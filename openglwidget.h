#ifndef OPENGLWIDGET_H
#define OPENGLWIDGET_H

#include <QtWidgets>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QTimer>
#include <QVector3D>
#include <vector>
#include <QMouseEvent>
#include <QMatrix4x4>
#ifdef Q_OS_WIN
#include <Windows.h>
#endif
#include <GL/gl.h>
#include <GL/glu.h>
#include <QPainter>

class OpenGLWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    explicit OpenGLWidget(QWidget *parent = nullptr);
    ~OpenGLWidget();

    struct PointCloud {
        std::vector<QVector3D> points;
        std::vector<QVector3D> colors;
        bool visible = true;
        bool selected = false;
        QString name;

        GLuint vbo = 0;
        bool vboInitialized = false;
        int pointCount = 0;

        QVector3D min;
        QVector3D max;
    };

    std::vector<PointCloud> m_pointClouds;

    void addPointCloud(const std::vector<QVector3D>& points, const std::vector<QVector3D>& colors, const QString& name);
    void clearPointClouds();
    void setPointCloudVisibility(const QString& name, bool visible);
    bool isPointCloudVisible(const QString& name) const;
    void setPointCloudSelected(const QString& name, bool selected);
    bool isPointCloudSelected(const QString& name) const;
    const std::vector<PointCloud>& getPointClouds() const { return m_pointClouds; }

    void setGridVisible(bool visible) { m_showGrid = visible; update(); }
    void setGridSize(float size) { m_gridSize = size; m_gridNeedsUpdate = true; update(); }
    void setGridSpacing(float spacing) { m_gridSpacing = spacing; m_gridNeedsUpdate = true; update(); }
    bool isGridVisible() const { return m_showGrid; }

    void setFrameRate(int fps) {
        if (fps > 0) timer->start(1000 / fps);
        else timer->stop();
    }

protected:
    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int width, int height) override;

    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;

private:
    QTimer *timer;

    QPointF m_lastPos;
    float m_xRotation = 0.0f;
    float m_yRotation = 0.0f;
    bool m_rotating = false;
    bool m_panning = false;
    float m_zoom = 1.0f;
    QVector3D m_cameraPosition = QVector3D(0.0f, 0.0f, 5.0f);
    QVector2D m_panOffset;

    void calculateBoundingBox(const std::vector<QVector3D>& points, QVector3D& min, QVector3D& max);
    void drawPointCloud(PointCloud& pc);
    void initializePointCloudVBO(PointCloud& pc);
    void drawDefaultTriangle();
    void drawCoordinateSystem();

    bool m_showGrid = false; // Disable grid for preview
    bool m_autoResizeGrid = false;
    float m_gridSize = 10000.0f;
    float m_gridSpacing = 1.0f;
    bool m_gridNeedsUpdate = false;
    GLuint m_gridVBO = 0;
    GLuint m_gridIBO = 0;
    int m_gridVertexCount = 0;
    int m_gridIndexCount = 0;
    void updateGrid();
    void drawGrid();

    QVector3D m_sceneCenter;
    float m_sceneRadius = 10000.0f;
    bool m_sceneBoundsValid = false;
    void updateSceneBounds();

    bool m_viewChanged = false;
};
#endif // OPENGLWIDGET_H
