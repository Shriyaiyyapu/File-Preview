#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <fstream>
#include <sstream>
#include <vector>
#include <QProgressDialog>
#include <QCoreApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , currentDirectory(QDir::currentPath())
{
    ui->setupUi(this);

    // Initialize main OpenGL widget
    openGLWidget = new OpenGLWidget(this);
    QVBoxLayout* viewportLayout = qobject_cast<QVBoxLayout*>(ui->viewportContainer->layout());
    if (viewportLayout) {
        for (int i = 0; i < viewportLayout->count(); ++i) {
            QLayoutItem* item = viewportLayout->itemAt(i);
            QWidget* widget = item->widget();
            if (widget && widget->objectName() == "openGLWidget") {
                viewportLayout->removeWidget(widget);
                delete widget;
                viewportLayout->insertWidget(i, openGLWidget);
                openGLWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
                openGLWidget->setMinimumSize(800, 600);
                break;
            }
        }
    }

    // Initialize preview OpenGL widget with fixed small square size
    previewOpenGLWidget = new OpenGLWidget(this);
    previewOpenGLWidget->setFixedSize(300, 300); // Small square preview
    QHBoxLayout* previewLayout = qobject_cast<QHBoxLayout*>(ui->previewtab->layout());
    if (previewLayout) {
        for (int i = 0; i < previewLayout->count(); ++i) {
            QLayoutItem* item = previewLayout->itemAt(i);
            QWidget* widget = item->widget();
            if (widget && widget->objectName() == "openGLWidget_2") {
                previewLayout->removeWidget(widget);
                delete widget;
                previewLayout->insertWidget(i, previewOpenGLWidget);
                previewOpenGLWidget->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
                break;
            }
        }
    }

    // Initialize hierarchy model
    hierarchyModel = new QStandardItemModel(this);
    hierarchyModel->setHorizontalHeaderLabels({tr("Asset Name")});
    ui->treeView->setModel(hierarchyModel);
    ui->treeView->setHeaderHidden(false);
    ui->treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);

    // Initialize file system model for Asset Browser
    fileSystemModel = new QFileSystemModel(this);
    fileSystemModel->setFilter(QDir::Files | QDir::NoDotAndDotDot); // Show only files
    updateFileView(currentDirectory);

    // Connect signals
    connect(hierarchyModel, &QStandardItemModel::itemChanged, this, &MainWindow::on_hierarchyItemChanged);
    connect(ui->treeView->selectionModel(), &QItemSelectionModel::selectionChanged,
            this, &MainWindow::on_hierarchySelectionChanged);
    connect(ui->assetTabs, &QTabWidget::currentChanged, this, &MainWindow::on_assetTabChanged);
    connect(ui->treeView_2->selectionModel(), &QItemSelectionModel::selectionChanged,
            this, &MainWindow::on_fileSelectionChanged);
    connect(ui->browseButton, &QPushButton::clicked, this, &MainWindow::on_browseButton_clicked);
    connect(ui->refreshAssetsButton, &QPushButton::clicked, this, &MainWindow::on_refreshAssetsButton_clicked);

    qDebug() << "MainWindow created";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createActions()
{
    connect(ui->actionOpen, &QAction::triggered, this, &MainWindow::on_actionOpen_triggered);
    connect(ui->actionDelete, &QAction::triggered, this, &MainWindow::on_actionDelete_triggered);
}

void MainWindow::updateHierarchyView()
{
    hierarchyModel->removeRows(0, hierarchyModel->rowCount());
    const auto& pointClouds = openGLWidget->getPointClouds();
    for (const auto& pc : pointClouds) {
        QStandardItem* item = new QStandardItem(pc.name);
        item->setEditable(false);
        item->setCheckable(true);
        item->setCheckState(pc.visible ? Qt::Checked : Qt::Unchecked);
        hierarchyModel->appendRow(item);
    }
    ui->treeView->expandAll();
}

void MainWindow::on_hierarchyItemChanged(QStandardItem *item)
{
    QString name = item->text();
    bool visible = (item->checkState() == Qt::Checked);
    openGLWidget->setPointCloudVisibility(name, visible);
}

void MainWindow::on_hierarchySelectionChanged(const QItemSelection &selected, const QItemSelection &deselected)
{
    for (const auto& index : deselected.indexes()) {
        QString name = hierarchyModel->item(index.row())->text();
        openGLWidget->setPointCloudSelected(name, false);
    }
    for (const auto& index : selected.indexes()) {
        QString name = hierarchyModel->item(index.row())->text();
        openGLWidget->setPointCloudSelected(name, true);
    }
}

void MainWindow::on_actionOpen_triggered()
{
    qDebug() << "Open action triggered (main viewport)";
    QStringList filePaths = QFileDialog::getOpenFileNames(
        this,
        tr("Open PTS Files"),
        QString(),
        tr("PTS Files (*.pts);;All Files (*)")
        );

    if (filePaths.isEmpty()) {
        return;
    }

    QProgressDialog progress(tr("Loading PTS Files..."), tr("Cancel"), 0, filePaths.size(), this);
    progress.setWindowModality(Qt::ApplicationModal);
    progress.setMinimumDuration(0);

    try {
        for (int i = 0; i < filePaths.size(); ++i) {
            const QString& filePath = filePaths[i];
            progress.setValue(i);
            progress.setLabelText(tr("Loading file: %1").arg(QFileInfo(filePath).fileName()));
            QCoreApplication::processEvents();

            if (progress.wasCanceled()) {
                QMessageBox::information(this, tr("Loading Canceled"), tr("File loading was canceled by the user."));
                return;
            }

            std::vector<QVector3D> points;
            std::vector<QVector3D> colors;

            std::ifstream file(filePath.toStdString());
            if (!file.is_open()) {
                throw std::runtime_error("Could not open file: " + filePath.toStdString());
            }

            std::string line;
            while (std::getline(file, line)) {
                std::istringstream iss(line);
                float x, y, z, r, g, b;
                if (iss >> x >> y >> z >> r >> g >> b) {
                    points.push_back(QVector3D(x, y, z));
                    colors.push_back(QVector3D(r / 255.0f, g / 255.0f, b / 255.0f));
                }
            }

            QFileInfo fileInfo(filePath);
            QString fileName = fileInfo.fileName();

            openGLWidget->addPointCloud(points, colors, fileName);
        }

        updateHierarchyView();

        progress.setValue(filePaths.size());
        QMessageBox::information(this, tr("Loading Complete"), tr("Successfully loaded %1 file(s).").arg(filePaths.size()));

        openGLWidget->update();

    } catch (const std::exception& e) {
        progress.setValue(filePaths.size());
        QMessageBox::critical(this, tr("Error"), tr("Failed to load PTS files: %1").arg(e.what()));
    }
}

void MainWindow::on_actionDelete_triggered()
{
    qDebug() << "Delete action triggered";
    openGLWidget->clearPointClouds();
    updateHierarchyView();
    openGLWidget->update();
}

void MainWindow::on_actionPointPicker_triggered()
{
    qDebug() << "PointPicker triggered";
}

void MainWindow::on_actionPick_Points_triggered()
{
    qDebug() << "Point picker widget created";
}

void MainWindow::on_assetTabChanged(int index)
{
    if (index == 1) { // Preview tab index is 1
        QString selectedPath = ui->assetPathEdit->text();
        if (!selectedPath.isEmpty()) {
            updatePreview(selectedPath);
        }
    }
}

void MainWindow::on_fileSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected)
{
    Q_UNUSED(deselected);
    if (!selected.indexes().isEmpty()) {
        QModelIndex index = selected.indexes().first();
        QString filePath = fileSystemModel->filePath(index);
        ui->assetPathEdit->setText(filePath);
        if (ui->assetTabs->currentIndex() == 1) { // If already on Preview tab
            updatePreview(filePath);
        }
    }
}

void MainWindow::on_browseButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("Select File"),
                                                    currentDirectory,
                                                    tr("PTS Files (*.pts);;All Files (*)"));
    if (!filePath.isEmpty()) {
        ui->assetPathEdit->setText(filePath);
        // Update preview immediately
        updatePreview(filePath);
        // Update treeView_2 to show files in the directory of the selected file
        currentDirectory = QFileInfo(filePath).absolutePath();
        updateFileView(currentDirectory);
        qDebug() << "Selected file:" << filePath;
    }
}

void MainWindow::on_refreshAssetsButton_clicked()
{
    QString dirPath = QFileDialog::getExistingDirectory(this, tr("Select Directory"),
                                                        currentDirectory,
                                                        QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    if (!dirPath.isEmpty()) {
        currentDirectory = dirPath;
        updateFileView(dirPath);
        ui->assetPathEdit->setText(dirPath); // Update path edit with directory
        qDebug() << "Selected directory:" << dirPath;
    }
}

void MainWindow::updateFileView(const QString& path)
{
    ui->treeView_2->setModel(nullptr); // Clear old model
    delete fileSystemModel; // Clean up old model
    fileSystemModel = new QFileSystemModel(this);
    fileSystemModel->setFilter(QDir::Files | QDir::NoDotAndDotDot); // Show only files
    ui->treeView_2->setModel(fileSystemModel);
    ui->treeView_2->setRootIndex(fileSystemModel->index(path));
    ui->treeView_2->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->treeView_2->setColumnHidden(1, false); // Ensure Size column is visible
    ui->treeView_2->setColumnHidden(2, false); // Ensure Type column is visible
    ui->treeView_2->setColumnHidden(3, false); // Ensure Date Modified column is visible
    qDebug() << "Updated file view for path:" << path;
}

void MainWindow::updatePreview(const QString& filePath)
{
    previewOpenGLWidget->clearPointClouds();

    std::vector<QVector3D> points;
    std::vector<QVector3D> colors;

    std::ifstream file(filePath.toStdString());
    if (!file.is_open()) {
        qDebug() << "Could not open file for preview:" << filePath;
        return;
    }

    std::string line;
    int lineCount = 0;
    while (std::getline(file, line)) {
        lineCount++;
        std::istringstream iss(line);
        float x, y, z, intensity = 0.0f; // Add intensity as optional fourth column
        if (iss >> x >> y >> z) { // Accept at least x, y, z
            points.push_back(QVector3D(x, y, z));
            // Check for optional intensity or fourth value
            if (iss >> intensity) {
                // Use intensity as a grayscale value (0.0 to 1.0)
                colors.push_back(QVector3D(intensity, intensity, intensity));
            } else {
                // Default to white if no color/intensity
                colors.push_back(QVector3D(1.0f, 1.0f, 1.0f));
            }
        } else {
            qDebug() << "Invalid data at line" << lineCount << "in" << filePath << ":" << line.c_str();
        }
    }
    file.close();

    if (points.empty()) {
        qDebug() << "No valid points loaded from:" << filePath;
        return;
    }

    QFileInfo fileInfo(filePath);
    QString fileName = fileInfo.fileName();
    qDebug() << "Loaded" << points.size() << "points from" << filePath;
    previewOpenGLWidget->addPointCloud(points, colors, fileName);
    previewOpenGLWidget->update();
}
