#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QFileSystemModel>
#include "openglwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();
    void on_actionDelete_triggered();
    void on_actionPointPicker_triggered();
    void on_actionPick_Points_triggered();
    void on_hierarchyItemChanged(QStandardItem *item);
    void on_hierarchySelectionChanged(const QItemSelection &selected, const QItemSelection &deselected);
    void on_assetTabChanged(int index);
    void on_fileSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected);
    void on_browseButton_clicked();
    void on_refreshAssetsButton_clicked();

private:
    Ui::MainWindow *ui;
    OpenGLWidget *openGLWidget;
    OpenGLWidget *previewOpenGLWidget;
    QStandardItemModel *hierarchyModel;
    QFileSystemModel *fileSystemModel;
    QString currentDirectory;

    void createActions();
    void updateHierarchyView();
    void updatePreview(const QString& filePath);
    void updateFileView(const QString& path);
};
#endif // MAINWINDOW_H
