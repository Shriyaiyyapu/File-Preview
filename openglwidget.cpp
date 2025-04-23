#include "openglwidget.h"
#include <QDebug>
#include <QPainter>
#include <QtMath>

OpenGLWidget::OpenGLWidget(QWidget *parent)
    : QOpenGLWidget(parent)
{
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, QOverload<>::of(&QOpenGLWidget::update));
    timer->stop();

    setMouseTracking(true);
    setFocusPolicy(Qt::StrongFocus);
    m_zoom = 1.0f;
}

OpenGLWidget::~OpenGLWidget()
{
    timer->stop();
    makeCurrent();

    for (auto& pc : m_pointClouds) {
        if (pc.vboInitialized) {
            glDeleteBuffers(1, &pc.vbo);
        }
    }

    if (m_gridVBO) {
        glDeleteBuffers(1, &m_gridVBO);
    }
    if (m_gridIBO) {
        glDeleteBuffers(1, &m_gridIBO);
    }

    doneCurrent();
}

void OpenGLWidget::initializeGL()
{
    initializeOpenGLFunctions();
    glClearColor(0.078f, 0.078f, 0.078f, 1.0f);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_POINT_SMOOTH);
    glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);
    glPointSize(5.0f);

    glGenBuffers(1, &m_gridVBO);
    glGenBuffers(1, &m_gridIBO);
    m_gridNeedsUpdate = true;

    if (m_isPreview) {
        setMouseTracking(false);
        setFocusPolicy(Qt::NoFocus);
        m_showGrid = false;
        m_showCoordinateSystem = false;
        timer->stop();
    } else {
        timer->start(1000 / 60);
    }

    qDebug() << "OpenGL Widget initialized (Preview:" << m_isPreview << ")";
    qDebug() << "OpenGL Version:" << reinterpret_cast<const char*>(glGetString(GL_VERSION));
}

void OpenGLWidget::resizeGL(int width, int height)
{
    glViewport(0, 0, width, height);
    m_viewChanged = true;
    qDebug() << "Resized to" << width << "x" << height;
}

void OpenGLWidget::mousePressEvent(QMouseEvent *event)
{
    if (m_isPreview) return;

    m_lastPos = event->position();
    if (event->button() == Qt::LeftButton) {
        m_rotating = true;
    } else if (event->button() == Qt::MiddleButton) {
        m_panning = true;
    }
}

void OpenGLWidget::mouseMoveEvent(QMouseEvent *event)
{
    if (m_isPreview) return;

    QPointF pos = event->position();
    float dx = pos.x() - m_lastPos.x();
    float dy = pos.y() - m_lastPos.y();

    if (m_rotating) {
        m_xRotation += dy * 0.5f;
        m_yRotation += dx * 0.5f;
        m_xRotation = qBound(-90.0f, m_xRotation, 90.0f);
        update();
    } else if (m_panning) {
        float scale = m_sceneRadius / height();
        m_panOffset += QVector2D(dx * scale, -dy * scale);
        update();
    }

    m_lastPos = pos;
}

void OpenGLWidget::mouseReleaseEvent(QMouseEvent *event)
{
    if (m_isPreview) return;

    if (event->button() == Qt::LeftButton) {
        m_rotating = false;
    } else if (event->button() == Qt::MiddleButton) {
        m_panning = false;
    }
}

void OpenGLWidget::wheelEvent(QWheelEvent *event)
{
    if (m_isPreview) return;

    float delta = event->angleDelta().y() / 120.0f;
    m_zoom *= qPow(1.1f, delta);
    m_zoom = qBound(0.1f, m_zoom, 10.0f);
    update();
}

void OpenGLWidget::addPointCloud(const std::vector<QVector3D>& points, const std::vector<QVector3D>& colors, const QString& name)
{
    PointCloud pc;
    pc.points = points;
    pc.colors = colors;
    pc.name = name;
    pc.visible = true;
    pc.selected = false;
    pc.pointCount = points.size();

    calculateBoundingBox(points, pc.min, pc.max);
    qDebug() << "Point cloud '" << name << "' bounds: min =" << pc.min << ", max =" << pc.max;

    // Normalize to [-1, 1] range for preview
    QVector3D center = (pc.min + pc.max) * 0.5f;
    float maxExtent = qMax(qMax(pc.max.x() - pc.min.x(), pc.max.y() - pc.min.y()), pc.max.z() - pc.min.z());
    if (maxExtent > 0.0f) {
        for (auto& p : pc.points) {
            p = (p - center) / (maxExtent * 0.5f);
        }
        calculateBoundingBox(pc.points, pc.min, pc.max);
    }

    m_pointClouds.push_back(pc);
    m_sceneBoundsValid = false;
    if (m_isPreview) {
        adjustPreviewCamera();
    }
    qDebug() << "Point cloud '" << name << "' added with" << points.size() << "points";
    update();
}

void OpenGLWidget::clearPointClouds()
{
    makeCurrent();
    for (auto& pc : m_pointClouds) {
        if (pc.vboInitialized) {
            glDeleteBuffers(1, &pc.vbo);
        }
    }
    m_pointClouds.clear();
    m_sceneBoundsValid = false;
    update();
    doneCurrent();
}

void OpenGLWidget::setPointCloudVisibility(const QString& name, bool visible)
{
    for (auto& pc : m_pointClouds) {
        if (pc.name == name) {
            pc.visible = visible;
            m_sceneBoundsValid = false;
            update();
            return;
        }
    }
    qDebug() << "Point cloud with name '" << name << "' not found.";
}

bool OpenGLWidget::isPointCloudVisible(const QString& name) const
{
    for (const auto& pc : m_pointClouds) {
        if (pc.name == name) {
            return pc.visible;
        }
    }
    return false;
}

void OpenGLWidget::setPointCloudSelected(const QString& name, bool selected)
{
    for (auto& pc : m_pointClouds) {
        if (pc.name == name) {
            pc.selected = selected;
            update();
            return;
        }
    }
    qDebug() << "Point cloud with name '" << name << "' not found.";
}

bool OpenGLWidget::isPointCloudSelected(const QString& name) const
{
    for (const auto& pc : m_pointClouds) {
        if (pc.name == name) {
            return pc.selected;
        }
    }
    return false;
}

void OpenGLWidget::calculateBoundingBox(const std::vector<QVector3D>& points, QVector3D& min, QVector3D& max)
{
    if (points.empty()) {
        min = QVector3D(0, 0, 0);
        max = QVector3D(0, 0, 0);
        return;
    }
    min = points[0];
    max = points[0];
    for (const auto& point : points) {
        min.setX(qMin(min.x(), point.x()));
        min.setY(qMin(min.y(), point.y()));
        min.setZ(qMin(min.z(), point.z()));
        max.setX(qMax(max.x(), point.x()));
        max.setY(qMax(max.y(), point.y()));
        max.setZ(qMax(max.z(), point.z()));
    }
}

void OpenGLWidget::updateSceneBounds()
{
    if (m_sceneBoundsValid) return;

    bool firstCloud = true;
    QVector3D combinedMin, combinedMax;

    for (const auto& pc : m_pointClouds) {
        if (pc.visible && pc.pointCount > 0) {
            if (firstCloud) {
                combinedMin = pc.min;
                combinedMax = pc.max;
                firstCloud = false;
            } else {
                combinedMin.setX(qMin(combinedMin.x(), pc.min.x()));
                combinedMin.setY(qMin(combinedMin.y(), pc.min.y()));
                combinedMin.setZ(qMin(combinedMin.z(), pc.min.z()));
                combinedMax.setX(qMax(combinedMax.x(), pc.max.x()));
                combinedMax.setY(qMax(combinedMax.y(), pc.max.y()));
                combinedMax.setZ(qMax(combinedMax.z(), pc.max.z()));
            }
        }
    }

    if (!firstCloud) {
        m_sceneCenter = (combinedMin + combinedMax) * 0.5f;
        float dx = combinedMax.x() - combinedMin.x();
        float dy = combinedMax.y() - combinedMin.y();
        float dz = combinedMax.z() - combinedMin.z();
        m_sceneRadius = qSqrt(dx*dx + dy*dy + dz*dz) * 0.5f;
        m_sceneRadius = qMax(m_sceneRadius, 0.1f);
    } else {
        m_sceneCenter = QVector3D(0, 0, 0);
        m_sceneRadius = 1.0f;
    }

    m_sceneBoundsValid = true;
    m_gridNeedsUpdate = true;
    if (m_isPreview) {
        adjustPreviewCamera();
    }
    qDebug() << "Updated scene bounds: center =" << m_sceneCenter << ", radius =" << m_sceneRadius;
}

void OpenGLWidget::adjustPreviewCamera()
{
    // Position camera to view entire point cloud
    float cameraDistance = m_sceneRadius * 2.5f; // Adjusted multiplier for visibility
    m_previewCameraPos = QVector3D(m_sceneCenter.x(), m_sceneCenter.y(), m_sceneCenter.z() + cameraDistance);
    m_previewLookAt = m_sceneCenter;
    m_previewUp = QVector3D(0.0f, 1.0f, 0.0f);
    qDebug() << "Adjusted preview camera: pos =" << m_previewCameraPos << ", lookAt =" << m_previewLookAt;
}

void OpenGLWidget::initializePointCloudVBO(PointCloud& pc)
{
    if (pc.vboInitialized || pc.points.empty()) return;

    glGenBuffers(1, &pc.vbo);
    glBindBuffer(GL_ARRAY_BUFFER, pc.vbo);

    std::vector<float> vertexData;
    vertexData.reserve(pc.points.size() * 6);

    for (size_t i = 0; i < pc.points.size(); ++i) {
        vertexData.push_back(pc.points[i].x());
        vertexData.push_back(pc.points[i].y());
        vertexData.push_back(pc.points[i].z());

        if (i < pc.colors.size()) {
            vertexData.push_back(pc.colors[i].x());
            vertexData.push_back(pc.colors[i].y());
            vertexData.push_back(pc.colors[i].z());
        } else {
            vertexData.push_back(1.0f);
            vertexData.push_back(1.0f);
            vertexData.push_back(1.0f);
        }
    }

    glBufferData(GL_ARRAY_BUFFER, vertexData.size() * sizeof(float), vertexData.data(), GL_STATIC_DRAW);
    pc.vboInitialized = true;
    pc.pointCount = pc.points.size();
    qDebug() << "Initialized VBO for point cloud with" << pc.pointCount << "points";
}

void OpenGLWidget::updateGrid()
{
    if (!m_gridNeedsUpdate) return;

    float gridSize = m_gridSize;
    float gridSpacing = m_gridSpacing;

    int lineCount = static_cast<int>(gridSize / gridSpacing) + 1;
    lineCount = qMin(lineCount, 100);

    float start = -lineCount * gridSpacing;
    float end = lineCount * gridSpacing;

    std::vector<float> vertices;
    std::vector<unsigned int> indices;
    std::vector<float> colors;

    int linesPerAxis = 2 * lineCount + 1;
    int totalVertices = 4 * linesPerAxis;

    vertices.reserve(totalVertices * 3);
    colors.reserve(totalVertices * 4);
    indices.reserve(totalVertices);

    unsigned int index = 0;

    auto addGridLine = [&](float x1, float y1, float z1, float x2, float y2, float z2, float r, float g, float b, float a) {
        vertices.push_back(x1);
        vertices.push_back(y1);
        vertices.push_back(z1);
        vertices.push_back(x2);
        vertices.push_back(y2);
        vertices.push_back(z2);
        colors.push_back(r);
        colors.push_back(g);
        colors.push_back(b);
        colors.push_back(a);
        colors.push_back(r);
        colors.push_back(g);
        colors.push_back(b);
        colors.push_back(a);
        indices.push_back(index++);
        indices.push_back(index++);
    };

    addGridLine(start, 0.0f, 0.0f, end, 0.0f, 0.0f, 0.8f, 0.0f, 0.0f, 0.8f);
    addGridLine(0.0f, 0.0f, start, 0.0f, 0.0f, end, 0.0f, 0.0f, 0.8f, 0.8f);
    addGridLine(0.0f, 0.0f, 0.0f, 0.0f, end/2, 0.0f, 0.0f, 0.8f, 0.0f, 0.8f);

    for (int i = -lineCount; i <= lineCount; i++) {
        float pos = i * gridSpacing;
        if (qAbs(pos) < 0.001f) continue;
        float distanceFromCenter = qAbs(i) / static_cast<float>(lineCount);
        float alpha = qMax(0.05f, 0.5f - 0.4f * distanceFromCenter);
        addGridLine(pos, 0.0f, start, pos, 0.0f, end, 0.5f, 0.5f, 0.5f, alpha);
        addGridLine(start, 0.0f, pos, end, 0.0f, pos, 0.5f, 0.5f, 0.5f, alpha);
    }

    glBindBuffer(GL_ARRAY_BUFFER, m_gridVBO);
    size_t vertSize = vertices.size() * sizeof(float);
    size_t colorSize = colors.size() * sizeof(float);
    glBufferData(GL_ARRAY_BUFFER, vertSize + colorSize, nullptr, GL_STATIC_DRAW);
    glBufferSubData(GL_ARRAY_BUFFER, 0, vertSize, vertices.data());
    glBufferSubData(GL_ARRAY_BUFFER, vertSize, colorSize, colors.data());

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_gridIBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * sizeof(unsigned int), indices.data(), GL_STATIC_DRAW);

    m_gridVertexCount = vertices.size() / 3;
    m_gridIndexCount = indices.size();

    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

    m_gridNeedsUpdate = false;
    qDebug() << "Grid updated with" << m_gridVertexCount << "vertices";
}

void OpenGLWidget::paintGL()
{
    if (!m_sceneBoundsValid) {
        updateSceneBounds();
    }

    if (m_gridNeedsUpdate && m_showGrid) {
        updateGrid();
    }

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    float aspectRatio = static_cast<float>(width()) / height();
    gluPerspective(m_fov, aspectRatio, m_nearPlane, m_farPlane);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    if (m_isPreview) {
        // Fixed camera setup for preview using extrinsic parameters
        gluLookAt(
            m_previewCameraPos.x(), m_previewCameraPos.y(), m_previewCameraPos.z(),
            m_previewLookAt.x(), m_previewLookAt.y(), m_previewLookAt.z(),
            m_previewUp.x(), m_previewUp.y(), m_previewUp.z()
            );
    } else {
        // Interactive camera for main viewport
        float cameraDistance = m_sceneRadius * 3.0f * m_zoom;
        glTranslatef(m_panOffset.x(), m_panOffset.y(), -cameraDistance);
        glRotatef(m_xRotation, 1.0f, 0.0f, 0.0f);
        glRotatef(m_yRotation, 0.0f, 1.0f, 0.0f);
        glTranslatef(-m_sceneCenter.x(), -m_sceneCenter.y(), -m_sceneCenter.z());
    }

    if (m_showGrid && !m_isPreview) {
        drawGrid();
    }

    for (auto& pc : m_pointClouds) {
        if (pc.visible) {
            drawPointCloud(pc);
        }
    }

    if (m_showCoordinateSystem && !m_isPreview) {
        drawCoordinateSystem();
    }

    m_viewChanged = false;
    qDebug() << "Rendered frame with" << m_pointClouds.size() << "point clouds (Preview:" << m_isPreview << ")";
}

void OpenGLWidget::drawPointCloud(PointCloud& pc)
{
    if (!pc.vboInitialized) {
        initializePointCloudVBO(pc);
    }

    if (pc.pointCount == 0 || !pc.vboInitialized) {
        qDebug() << "No points or VBO not initialized for" << pc.name;
        return;
    }

    glPointSize(5.0f);

    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);

    glBindBuffer(GL_ARRAY_BUFFER, pc.vbo);

    const int stride = 6 * sizeof(float);
    glVertexPointer(3, GL_FLOAT, stride, 0);
    glColorPointer(3, GL_FLOAT, stride, (void*)(3 * sizeof(float)));

    glDrawArrays(GL_POINTS, 0, pc.pointCount);

    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    if (pc.selected) {
        glPushAttrib(GL_CURRENT_BIT | GL_LINE_BIT);
        glLineWidth(1.0f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glBegin(GL_LINES);
        auto addLine = [&](float x1, float y1, float z1, float x2, float y2, float z2) {
            glVertex3f(x1, y1, z1);
            glVertex3f(x2, y2, z2);
        };
        float x1 = pc.min.x(), x2 = pc.max.x();
        float y1 = pc.min.y(), y2 = pc.max.y();
        float z1 = pc.min.z(), z2 = pc.max.z();
        addLine(x1, y1, z1, x2, y1, z1);
        addLine(x2, y1, z1, x2, y2, z1);
        addLine(x2, y2, z1, x1, y2, z1);
        addLine(x1, y2, z1, x1, y1, z1);
        addLine(x1, y1, z2, x2, y1, z2);
        addLine(x2, y1, z2, x2, y2, z2);
        addLine(x2, y2, z2, x1, y2, z2);
        addLine(x1, y2, z2, x1, y1, z2);
        addLine(x1, y1, z1, x1, y1, z2);
        addLine(x2, y1, z1, x2, y1, z2);
        addLine(x2, y2, z1, x2, y2, z2);
        addLine(x1, y2, z1, x1, y2, z2);
        glEnd();
        glPopAttrib();
    }
}

void OpenGLWidget::drawDefaultTriangle()
{
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.5f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-0.5f, -0.5f, 0.0f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.5f, -0.5f, 0.0f);
    glEnd();
}

void OpenGLWidget::drawGrid()
{
    if (m_gridVertexCount == 0 || m_gridIndexCount == 0) return;

    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);

    glBindBuffer(GL_ARRAY_BUFFER, m_gridVBO);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_gridIBO);

    glVertexPointer(3, GL_FLOAT, 0, 0);
    glColorPointer(4, GL_FLOAT, 0, (void*)(m_gridVertexCount * 3 * sizeof(float)));

    glDrawElements(GL_LINES, m_gridIndexCount, GL_UNSIGNED_INT, 0);

    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}

void OpenGLWidget::drawCoordinateSystem()
{
    glPushAttrib(GL_CURRENT_BIT | GL_LINE_BIT);
    glLineWidth(2.0f);

    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 1.0f, 0.0f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.0f, 1.0f);
    glEnd();

    glPopAttrib();
}
