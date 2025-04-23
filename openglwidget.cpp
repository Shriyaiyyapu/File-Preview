#include "openglwidget.h"
#include <QDebug>
#include <QPainter>
#include <QtMath>

OpenGLWidget::OpenGLWidget(QWidget *parent)
    : QOpenGLWidget(parent)
{
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, QOverload<>::of(&QOpenGLWidget::update));
    timer->stop(); // Stop timer for static preview

    setMouseTracking(false); // Disable mouse tracking for preview
    setFocusPolicy(Qt::NoFocus); // Disable focus for preview
    m_zoom = 1.0f; // Reset zoom for preview
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
    glClearColor(0.078f, 0.078f, 0.078f, 1.0f); // Dark gray background
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_POINT_SMOOTH);
    glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);
    glPointSize(5.0f); // Increased point size for visibility

    glGenBuffers(1, &m_gridVBO);
    glGenBuffers(1, &m_gridIBO);
    m_gridNeedsUpdate = true;

    qDebug() << "OpenGL Widget initialized";
    qDebug() << "OpenGL Version:" << reinterpret_cast<const char*>(glGetString(GL_VERSION));
}

void OpenGLWidget::resizeGL(int width, int height)
{
    glViewport(0, 0, width, height);
    m_viewChanged = true;
    qDebug() << "Resized to" << width << "x" << height;
}

void OpenGLWidget::mousePressEvent(QMouseEvent *event) {}
void OpenGLWidget::mouseMoveEvent(QMouseEvent *event) {}
void OpenGLWidget::mouseReleaseEvent(QMouseEvent *event) {}
void OpenGLWidget::wheelEvent(QWheelEvent *event) {}

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
            p = (p - center) / (maxExtent * 0.5f); // Scale to [-1, 1]
        }
        calculateBoundingBox(pc.points, pc.min, pc.max);
    }

    m_pointClouds.push_back(pc);
    m_sceneBoundsValid = false;
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
        m_sceneRadius = 1.0f; // Smaller default radius for preview
    }

    m_sceneBoundsValid = true;
    m_gridNeedsUpdate = true;
    qDebug() << "Updated scene bounds: center =" << m_sceneCenter << ", radius =" << m_sceneRadius;
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

    if (m_gridNeedsUpdate) {
        updateGrid();
    }

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    float aspectRatio = static_cast<float>(width()) / height();
    gluPerspective(45.0f, aspectRatio, 0.1f, 100.0f); // Adjusted near/far planes

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    if (m_sceneBoundsValid) {
        // Fixed camera distance for preview to ensure points are visible
        float cameraDistance = 2.0f; // Close distance for 300x300 preview
        gluLookAt(
            m_sceneCenter.x() + m_panOffset.x(),
            m_sceneCenter.y() + m_panOffset.y(),
            m_sceneCenter.z() + cameraDistance,
            m_sceneCenter.x() + m_panOffset.x(),
            m_sceneCenter.y() + m_panOffset.y(),
            m_sceneCenter.z(),
            0.0f, 1.0f, 0.0f
            );
    } else {
        gluLookAt(0.0f, 0.0f, 2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f); // Default static view
    }

    if (m_showGrid) {
        drawGrid();
    }

    for (auto& pc : m_pointClouds) {
        if (pc.visible) {
            drawPointCloud(pc);
        }
    }

    drawCoordinateSystem();
    m_viewChanged = false;
    qDebug() << "Rendered frame with" << m_pointClouds.size() << "point clouds";
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

    glPointSize(5.0f); // Ensure points are visible in preview

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

void OpenGLWidget::drawDefaultTriangle() {}
void OpenGLWidget::drawGrid() {}
void OpenGLWidget::drawCoordinateSystem() {}
