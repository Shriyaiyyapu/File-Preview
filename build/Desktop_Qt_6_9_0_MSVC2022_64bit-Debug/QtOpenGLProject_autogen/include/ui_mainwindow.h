/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionExport;
    QAction *actionImport;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionDuplicate;
    QAction *actionShow_Grid;
    QAction *actionShow_Axis;
    QAction *actionFront_View;
    QAction *actionTop_View;
    QAction *actionSide_View;
    QAction *actionIsometric_View;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionZoom_to_Fit;
    QAction *actionPreferences;
    QAction *actionAbout;
    QAction *actionShortcuts;
    QAction *actionMove_Tool;
    QAction *actionRotate_Tool;
    QAction *actionScale_Tool;
    QAction *actionVertex_Mode;
    QAction *actionEdge_Mode;
    QAction *actionFace_Mode;
    QAction *actionObject_Mode;
    QAction *actionCube;
    QAction *actionSphere;
    QAction *actionCylinder;
    QAction *actionCone;
    QAction *actionPlane;
    QAction *actionTorus;
    QAction *actionLight;
    QAction *actionCamera;
    QAction *actionEmpty;
    QAction *actionBezier_Curve;
    QAction *actionNURBS_Curve;
    QAction *actionText;
    QAction *actionReference_Image;
    QAction *actionSubdivide;
    QAction *actionExtrude;
    QAction *actionBevel;
    QAction *actionLoop_Cut;
    QAction *actionBoolean_Union;
    QAction *actionBoolean_Difference;
    QAction *actionBoolean_Intersect;
    QAction *actionPick_Points_2;
    QAction *actionShow_Points_2;
    QAction *actionSave_Points;
    QAction *actionIdentify_Similar_Clusters;
    QAction *actionCell_Divison_Slections;
    QAction *actionCell_Focus;
    QAction *actionGenerate_3D_grid;
    QAction *actionGenerate_2D_grid;
    QAction *action2D_to_3D_Grid;
    QAction *action3D_to_2D_Grid;
    QAction *actionGrid_Placment;
    QAction *actionGrid_Population_desity;
    QAction *actionGrid_Subdivsion;
    QAction *actionDigital_Twinning;
    QAction *actionICP;
    QAction *actionColor_Assigner;
    QAction *actionClustering_mNager;
    QAction *actionCluster_list;
    QAction *actionManage_Objects;
    QAction *actionTraining_Manager;
    QAction *actionRecognize_Objects;
    QAction *actionCollison_map;
    QAction *actionPath_Manager;
    QAction *actionAlignment_starting_point;
    QAction *actionLoad_points;
    QAction *actionCDD;
    QAction *actionPoint_cloud_Cropper;
    QAction *actionUser_Capture;
    QAction *actionSlection_Capture;
    QAction *actionCell_Report;
    QAction *actionCDD_analysis;
    QAction *actionObject_detection_Report;
    QAction *actionDigital_twinning;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *viewportSplitter;
    QWidget *viewportContainer;
    QVBoxLayout *verticalLayout_viewport;
    QComboBox *viewportModeSelector;
    QWidget *viewportToolbar;
    QHBoxLayout *horizontalLayout_viewportToolbar;
    QToolButton *snapToGridButton;
    QToolButton *snapToAngleButton;
    QToolButton *pivotButton;
    QLabel *viewportLabel;
    QOpenGLWidget *openGLWidget;
    QWidget *viewportStatusBar;
    QHBoxLayout *horizontalLayout_viewportStatus;
    QLabel *viewportInfoLabel;
    QLabel *selectionInfoLabel;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuCameras;
    QMenu *menuViewport_Capture;
    QMenu *menuWorkspaces;
    QMenu *menuTools;
    QMenu *menuSelection_Tools;
    QMenu *menu_Point_Picker;
    QMenu *menuModify;
    QMenu *menuDeform;
    QMenu *menuHelp;
    QMenu *menuCreate;
    QMenu *menuPrimitives;
    QMenu *menuCurves;
    QMenu *menuFeatures;
    QMenu *menuPoint_Picker;
    QMenu *menuClustering;
    QMenu *menuAdd_Objects;
    QMenu *menuModel_Training;
    QMenu *menuUBG;
    QMenu *menuCell_Divison;
    QMenu *menuGrid_Generator;
    QMenu *menuCollision_Detection;
    QMenu *menuCollision_Path_Generator;
    QMenu *menuCollision_Body;
    QMenu *menuReports;
    QStatusBar *statusbar;
    QToolBar *mainToolBar;
    QDockWidget *hierarchyDock;
    QWidget *hierarchyDockContents;
    QVBoxLayout *verticalLayout_Hierarchy;
    QLineEdit *searchHierarchy;
    QWidget *hierarchyFilterBar;
    QHBoxLayout *horizontalLayout_hierarchyFilters;
    QTreeView *treeView;
    QWidget *hierarchyButtons;
    QHBoxLayout *horizontalLayout_hierarchyButtons;
    QPushButton *addObjectButton;
    QPushButton *deleteObjectButton;
    QPushButton *groupButton;
    QDockWidget *propertiesDock;
    QWidget *propertiesDockContents;
    QVBoxLayout *verticalLayout_Properties;
    QTabWidget *propertiesTabs;
    QWidget *transformTab;
    QGridLayout *gridLayout_2;
    QGroupBox *transformOptions;
    QGridLayout *gridLayout_TransformOptions;
    QComboBox *transformSpaceCombo;
    QPushButton *resetTransformButton;
    QCheckBox *showGizmoCheckbox;
    QCheckBox *lockScaleCheckbox;
    QGroupBox *transformGroup;
    QFormLayout *formLayout_Transform;
    QLabel *positionLabel;
    QHBoxLayout *horizontalLayout_Position;
    QDoubleSpinBox *positionX;
    QDoubleSpinBox *positionY;
    QDoubleSpinBox *positionZ;
    QLabel *rotationLabel;
    QHBoxLayout *horizontalLayout_Rotation;
    QDoubleSpinBox *rotationX;
    QDoubleSpinBox *rotationY;
    QDoubleSpinBox *rotationZ;
    QLabel *scaleLabel;
    QHBoxLayout *horizontalLayout_Scale;
    QDoubleSpinBox *scaleX;
    QDoubleSpinBox *scaleY;
    QDoubleSpinBox *scaleZ;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QToolButton *showLightsButton;
    QToolButton *showCamerasButton;
    QToolButton *showMeshButton;
    QToolButton *hierarchyOptionsButton;
    QWidget *materialsTab;
    QVBoxLayout *verticalLayout_Materials;
    QWidget *materialToolbar;
    QHBoxLayout *horizontalLayout_materialToolbar;
    QLabel *materialLabel;
    QComboBox *materialSelector;
    QPushButton *addMaterialButton;
    QTabWidget *materialPropertiesTabs;
    QWidget *surfaceTab;
    QVBoxLayout *verticalLayout_Surface;
    QWidget *colorPicker;
    QFormLayout *formLayout_ColorPicker;
    QLabel *baseColorLabel;
    QHBoxLayout *horizontalLayout_colorPicker;
    QPushButton *colorPickerButton;
    QSlider *rSlider;
    QSlider *gSlider;
    QSlider *bSlider;
    QTableWidget *materialPropertiesTable;
    QWidget *texturesTab;
    QVBoxLayout *verticalLayout_Textures;
    QListWidget *texturesList;
    QWidget *textureActions;
    QHBoxLayout *horizontalLayout_textureActions;
    QPushButton *loadTextureButton;
    QPushButton *clearTextureButton;
    QPushButton *editTextureButton;
    QWidget *modifiersTab;
    QVBoxLayout *verticalLayout_Modifiers;
    QWidget *modifierToolbar;
    QHBoxLayout *horizontalLayout_modifierToolbar;
    QPushButton *addModifierButton;
    QPushButton *applyModifierButton;
    QListWidget *modifierList;
    QGroupBox *modifierSettings;
    QFormLayout *formLayout_ModifierSettings;
    QLabel *subdivLevelLabel;
    QSpinBox *subdivLevelSpinBox;
    QCheckBox *showInViewportCheckBox;
    QDockWidget *consoleDock;
    QWidget *consoleDockContents;
    QVBoxLayout *verticalLayout_Console;
    QPlainTextEdit *consoleOutput;
    QHBoxLayout *horizontalLayout_Console;
    QLineEdit *consoleInput;
    QPushButton *executeButton;
    QDockWidget *assetBrowserDock;
    QWidget *assetDockContents;
    QVBoxLayout *verticalLayout_Assets;
    QWidget *assetNavigation;
    QHBoxLayout *horizontalLayout_assetNavigation;
    QPushButton *assetBackButton;
    QPushButton *assetForwardButton;
    QPushButton *assetUpButton;
    QLineEdit *assetPathEdit;
    QPushButton *refreshAssetsButton;
    QTabWidget *assetTabs;
    QWidget *FilesTab;
    QVBoxLayout *verticalLayout_2;
    QPushButton *browseButton;
    QSplitter *assetSplitter;
    QWidget *fileDetailsContainer;
    QVBoxLayout *verticalLayout_fileDetails;
    QTreeView *treeView_2;
    QGroupBox *fileDetailsGroup;
    QFormLayout *formLayout_fileDetails;
    QLabel *fileNameLabel;
    QLabel *fileNameValue;
    QLabel *fileSizeLabel;
    QLabel *fileSizeValue;
    QLabel *fileTypeLabel;
    QLabel *fileTypeValue;
    QLabel *fileDateLabel;
    QLabel *fileDateValue;
    QWidget *previewContainer;
    QVBoxLayout *verticalLayout_preview;
    QOpenGLWidget *previewOpenGLWidget;
    QWidget *propertiesTab;
    QVBoxLayout *verticalLayout_Favorites;
    QTreeView *treeView_3;
    QWidget *assetSearch;
    QHBoxLayout *horizontalLayout_assetSearch;
    QLabel *searchLabel;
    QLineEdit *assetSearchEdit;
    QPushButton *assetFilterButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1896, 1328);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon2);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName("actionSave_As");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/save_as.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave_As->setIcon(icon3);
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName("actionExport");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/export.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExport->setIcon(icon4);
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName("actionImport");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/import.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionImport->setIcon(icon5);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/exit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExit->setIcon(icon6);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/undo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/redo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRedo->setIcon(icon8);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/cut.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCut->setIcon(icon9);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopy->setIcon(icon10);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/paste.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPaste->setIcon(icon11);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName("actionDelete");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/delete.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionDelete->setIcon(icon12);
        actionDuplicate = new QAction(MainWindow);
        actionDuplicate->setObjectName("actionDuplicate");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/duplicate.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionDuplicate->setIcon(icon13);
        actionShow_Grid = new QAction(MainWindow);
        actionShow_Grid->setObjectName("actionShow_Grid");
        actionShow_Grid->setCheckable(true);
        actionShow_Grid->setChecked(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/grid.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionShow_Grid->setIcon(icon14);
        actionShow_Axis = new QAction(MainWindow);
        actionShow_Axis->setObjectName("actionShow_Axis");
        actionShow_Axis->setCheckable(true);
        actionShow_Axis->setChecked(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/axis.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionShow_Axis->setIcon(icon15);
        actionFront_View = new QAction(MainWindow);
        actionFront_View->setObjectName("actionFront_View");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/front_view.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFront_View->setIcon(icon16);
        actionTop_View = new QAction(MainWindow);
        actionTop_View->setObjectName("actionTop_View");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/top_view.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionTop_View->setIcon(icon17);
        actionSide_View = new QAction(MainWindow);
        actionSide_View->setObjectName("actionSide_View");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/side_view.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSide_View->setIcon(icon18);
        actionIsometric_View = new QAction(MainWindow);
        actionIsometric_View->setObjectName("actionIsometric_View");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icons/isometric_view.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionIsometric_View->setIcon(icon19);
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName("actionZoom_In");
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/icons/zoom_in.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionZoom_In->setIcon(icon20);
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName("actionZoom_Out");
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/icons/zoom_out.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionZoom_Out->setIcon(icon21);
        actionZoom_to_Fit = new QAction(MainWindow);
        actionZoom_to_Fit->setObjectName("actionZoom_to_Fit");
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/icons/zoom_fit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionZoom_to_Fit->setIcon(icon22);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName("actionPreferences");
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/icons/preferences.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPreferences->setIcon(icon23);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/icons/about.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAbout->setIcon(icon24);
        actionShortcuts = new QAction(MainWindow);
        actionShortcuts->setObjectName("actionShortcuts");
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/icons/shortcuts.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionShortcuts->setIcon(icon25);
        actionMove_Tool = new QAction(MainWindow);
        actionMove_Tool->setObjectName("actionMove_Tool");
        actionMove_Tool->setCheckable(true);
        actionMove_Tool->setChecked(true);
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/icons/move.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMove_Tool->setIcon(icon26);
        actionRotate_Tool = new QAction(MainWindow);
        actionRotate_Tool->setObjectName("actionRotate_Tool");
        actionRotate_Tool->setCheckable(true);
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/icons/rotate.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRotate_Tool->setIcon(icon27);
        actionScale_Tool = new QAction(MainWindow);
        actionScale_Tool->setObjectName("actionScale_Tool");
        actionScale_Tool->setCheckable(true);
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/icons/scale.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionScale_Tool->setIcon(icon28);
        actionVertex_Mode = new QAction(MainWindow);
        actionVertex_Mode->setObjectName("actionVertex_Mode");
        actionVertex_Mode->setCheckable(true);
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/icons/vertex.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionVertex_Mode->setIcon(icon29);
        actionEdge_Mode = new QAction(MainWindow);
        actionEdge_Mode->setObjectName("actionEdge_Mode");
        actionEdge_Mode->setCheckable(true);
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/icons/edge.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionEdge_Mode->setIcon(icon30);
        actionFace_Mode = new QAction(MainWindow);
        actionFace_Mode->setObjectName("actionFace_Mode");
        actionFace_Mode->setCheckable(true);
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/icons/face.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFace_Mode->setIcon(icon31);
        actionObject_Mode = new QAction(MainWindow);
        actionObject_Mode->setObjectName("actionObject_Mode");
        actionObject_Mode->setCheckable(true);
        actionObject_Mode->setChecked(true);
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/icons/object.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionObject_Mode->setIcon(icon32);
        actionCube = new QAction(MainWindow);
        actionCube->setObjectName("actionCube");
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/icons/cube.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCube->setIcon(icon33);
        actionSphere = new QAction(MainWindow);
        actionSphere->setObjectName("actionSphere");
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/icons/sphere.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSphere->setIcon(icon34);
        actionCylinder = new QAction(MainWindow);
        actionCylinder->setObjectName("actionCylinder");
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/icons/cylinder.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCylinder->setIcon(icon35);
        actionCone = new QAction(MainWindow);
        actionCone->setObjectName("actionCone");
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/icons/cone.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCone->setIcon(icon36);
        actionPlane = new QAction(MainWindow);
        actionPlane->setObjectName("actionPlane");
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/icons/plane.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPlane->setIcon(icon37);
        actionTorus = new QAction(MainWindow);
        actionTorus->setObjectName("actionTorus");
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/icons/torus.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionTorus->setIcon(icon38);
        actionLight = new QAction(MainWindow);
        actionLight->setObjectName("actionLight");
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/icons/light.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionLight->setIcon(icon39);
        actionCamera = new QAction(MainWindow);
        actionCamera->setObjectName("actionCamera");
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/icons/camera.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCamera->setIcon(icon40);
        actionEmpty = new QAction(MainWindow);
        actionEmpty->setObjectName("actionEmpty");
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/icons/empty.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionEmpty->setIcon(icon41);
        actionBezier_Curve = new QAction(MainWindow);
        actionBezier_Curve->setObjectName("actionBezier_Curve");
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/icons/curve.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionBezier_Curve->setIcon(icon42);
        actionNURBS_Curve = new QAction(MainWindow);
        actionNURBS_Curve->setObjectName("actionNURBS_Curve");
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/icons/nurbs.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNURBS_Curve->setIcon(icon43);
        actionText = new QAction(MainWindow);
        actionText->setObjectName("actionText");
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/icons/text.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionText->setIcon(icon44);
        actionReference_Image = new QAction(MainWindow);
        actionReference_Image->setObjectName("actionReference_Image");
        QIcon icon45;
        icon45.addFile(QString::fromUtf8(":/icons/image.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionReference_Image->setIcon(icon45);
        actionSubdivide = new QAction(MainWindow);
        actionSubdivide->setObjectName("actionSubdivide");
        QIcon icon46;
        icon46.addFile(QString::fromUtf8(":/icons/subdivide.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSubdivide->setIcon(icon46);
        actionExtrude = new QAction(MainWindow);
        actionExtrude->setObjectName("actionExtrude");
        QIcon icon47;
        icon47.addFile(QString::fromUtf8(":/icons/extrude.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExtrude->setIcon(icon47);
        actionBevel = new QAction(MainWindow);
        actionBevel->setObjectName("actionBevel");
        QIcon icon48;
        icon48.addFile(QString::fromUtf8(":/icons/bevel.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionBevel->setIcon(icon48);
        actionLoop_Cut = new QAction(MainWindow);
        actionLoop_Cut->setObjectName("actionLoop_Cut");
        QIcon icon49;
        icon49.addFile(QString::fromUtf8(":/icons/loopcut.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionLoop_Cut->setIcon(icon49);
        actionBoolean_Union = new QAction(MainWindow);
        actionBoolean_Union->setObjectName("actionBoolean_Union");
        QIcon icon50;
        icon50.addFile(QString::fromUtf8(":/icons/union.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionBoolean_Union->setIcon(icon50);
        actionBoolean_Difference = new QAction(MainWindow);
        actionBoolean_Difference->setObjectName("actionBoolean_Difference");
        QIcon icon51;
        icon51.addFile(QString::fromUtf8(":/icons/difference.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionBoolean_Difference->setIcon(icon51);
        actionBoolean_Intersect = new QAction(MainWindow);
        actionBoolean_Intersect->setObjectName("actionBoolean_Intersect");
        QIcon icon52;
        icon52.addFile(QString::fromUtf8(":/icons/intersect.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionBoolean_Intersect->setIcon(icon52);
        actionPick_Points_2 = new QAction(MainWindow);
        actionPick_Points_2->setObjectName("actionPick_Points_2");
        actionShow_Points_2 = new QAction(MainWindow);
        actionShow_Points_2->setObjectName("actionShow_Points_2");
        actionSave_Points = new QAction(MainWindow);
        actionSave_Points->setObjectName("actionSave_Points");
        actionIdentify_Similar_Clusters = new QAction(MainWindow);
        actionIdentify_Similar_Clusters->setObjectName("actionIdentify_Similar_Clusters");
        actionCell_Divison_Slections = new QAction(MainWindow);
        actionCell_Divison_Slections->setObjectName("actionCell_Divison_Slections");
        actionCell_Focus = new QAction(MainWindow);
        actionCell_Focus->setObjectName("actionCell_Focus");
        actionGenerate_3D_grid = new QAction(MainWindow);
        actionGenerate_3D_grid->setObjectName("actionGenerate_3D_grid");
        actionGenerate_2D_grid = new QAction(MainWindow);
        actionGenerate_2D_grid->setObjectName("actionGenerate_2D_grid");
        action2D_to_3D_Grid = new QAction(MainWindow);
        action2D_to_3D_Grid->setObjectName("action2D_to_3D_Grid");
        action3D_to_2D_Grid = new QAction(MainWindow);
        action3D_to_2D_Grid->setObjectName("action3D_to_2D_Grid");
        actionGrid_Placment = new QAction(MainWindow);
        actionGrid_Placment->setObjectName("actionGrid_Placment");
        actionGrid_Population_desity = new QAction(MainWindow);
        actionGrid_Population_desity->setObjectName("actionGrid_Population_desity");
        actionGrid_Subdivsion = new QAction(MainWindow);
        actionGrid_Subdivsion->setObjectName("actionGrid_Subdivsion");
        actionDigital_Twinning = new QAction(MainWindow);
        actionDigital_Twinning->setObjectName("actionDigital_Twinning");
        actionICP = new QAction(MainWindow);
        actionICP->setObjectName("actionICP");
        actionColor_Assigner = new QAction(MainWindow);
        actionColor_Assigner->setObjectName("actionColor_Assigner");
        actionClustering_mNager = new QAction(MainWindow);
        actionClustering_mNager->setObjectName("actionClustering_mNager");
        actionCluster_list = new QAction(MainWindow);
        actionCluster_list->setObjectName("actionCluster_list");
        actionManage_Objects = new QAction(MainWindow);
        actionManage_Objects->setObjectName("actionManage_Objects");
        actionTraining_Manager = new QAction(MainWindow);
        actionTraining_Manager->setObjectName("actionTraining_Manager");
        actionRecognize_Objects = new QAction(MainWindow);
        actionRecognize_Objects->setObjectName("actionRecognize_Objects");
        actionCollison_map = new QAction(MainWindow);
        actionCollison_map->setObjectName("actionCollison_map");
        actionPath_Manager = new QAction(MainWindow);
        actionPath_Manager->setObjectName("actionPath_Manager");
        actionAlignment_starting_point = new QAction(MainWindow);
        actionAlignment_starting_point->setObjectName("actionAlignment_starting_point");
        actionLoad_points = new QAction(MainWindow);
        actionLoad_points->setObjectName("actionLoad_points");
        actionCDD = new QAction(MainWindow);
        actionCDD->setObjectName("actionCDD");
        actionPoint_cloud_Cropper = new QAction(MainWindow);
        actionPoint_cloud_Cropper->setObjectName("actionPoint_cloud_Cropper");
        actionUser_Capture = new QAction(MainWindow);
        actionUser_Capture->setObjectName("actionUser_Capture");
        actionSlection_Capture = new QAction(MainWindow);
        actionSlection_Capture->setObjectName("actionSlection_Capture");
        actionCell_Report = new QAction(MainWindow);
        actionCell_Report->setObjectName("actionCell_Report");
        actionCDD_analysis = new QAction(MainWindow);
        actionCDD_analysis->setObjectName("actionCDD_analysis");
        actionObject_detection_Report = new QAction(MainWindow);
        actionObject_detection_Report->setObjectName("actionObject_detection_Report");
        actionDigital_twinning = new QAction(MainWindow);
        actionDigital_twinning->setObjectName("actionDigital_twinning");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        viewportSplitter = new QSplitter(centralwidget);
        viewportSplitter->setObjectName("viewportSplitter");
        viewportSplitter->setOrientation(Qt::Orientation::Horizontal);
        viewportSplitter->setChildrenCollapsible(false);
        viewportContainer = new QWidget(viewportSplitter);
        viewportContainer->setObjectName("viewportContainer");
        verticalLayout_viewport = new QVBoxLayout(viewportContainer);
        verticalLayout_viewport->setObjectName("verticalLayout_viewport");
        verticalLayout_viewport->setContentsMargins(0, 0, 0, 0);
        viewportModeSelector = new QComboBox(viewportContainer);
        viewportModeSelector->addItem(QString());
        viewportModeSelector->addItem(QString());
        viewportModeSelector->addItem(QString());
        viewportModeSelector->addItem(QString());
        viewportModeSelector->setObjectName("viewportModeSelector");

        verticalLayout_viewport->addWidget(viewportModeSelector);

        viewportToolbar = new QWidget(viewportContainer);
        viewportToolbar->setObjectName("viewportToolbar");
        horizontalLayout_viewportToolbar = new QHBoxLayout(viewportToolbar);
        horizontalLayout_viewportToolbar->setObjectName("horizontalLayout_viewportToolbar");
        horizontalLayout_viewportToolbar->setContentsMargins(0, 0, 0, 0);
        snapToGridButton = new QToolButton(viewportToolbar);
        snapToGridButton->setObjectName("snapToGridButton");
        QIcon icon53;
        icon53.addFile(QString::fromUtf8(":/icons/snap.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        snapToGridButton->setIcon(icon53);
        snapToGridButton->setCheckable(true);

        horizontalLayout_viewportToolbar->addWidget(snapToGridButton);

        snapToAngleButton = new QToolButton(viewportToolbar);
        snapToAngleButton->setObjectName("snapToAngleButton");
        QIcon icon54;
        icon54.addFile(QString::fromUtf8(":/icons/angle_snap.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        snapToAngleButton->setIcon(icon54);
        snapToAngleButton->setCheckable(true);

        horizontalLayout_viewportToolbar->addWidget(snapToAngleButton);

        pivotButton = new QToolButton(viewportToolbar);
        pivotButton->setObjectName("pivotButton");
        QIcon icon55;
        icon55.addFile(QString::fromUtf8(":/icons/pivot.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pivotButton->setIcon(icon55);
        pivotButton->setCheckable(true);

        horizontalLayout_viewportToolbar->addWidget(pivotButton);

        viewportLabel = new QLabel(viewportToolbar);
        viewportLabel->setObjectName("viewportLabel");
        viewportLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_viewportToolbar->addWidget(viewportLabel);


        verticalLayout_viewport->addWidget(viewportToolbar);

        openGLWidget = new QOpenGLWidget(viewportContainer);
        openGLWidget->setObjectName("openGLWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy);
        openGLWidget->setMinimumSize(QSize(800, 600));

        verticalLayout_viewport->addWidget(openGLWidget);

        viewportStatusBar = new QWidget(viewportContainer);
        viewportStatusBar->setObjectName("viewportStatusBar");
        horizontalLayout_viewportStatus = new QHBoxLayout(viewportStatusBar);
        horizontalLayout_viewportStatus->setObjectName("horizontalLayout_viewportStatus");
        horizontalLayout_viewportStatus->setContentsMargins(0, 0, 0, 0);
        viewportInfoLabel = new QLabel(viewportStatusBar);
        viewportInfoLabel->setObjectName("viewportInfoLabel");

        horizontalLayout_viewportStatus->addWidget(viewportInfoLabel);

        selectionInfoLabel = new QLabel(viewportStatusBar);
        selectionInfoLabel->setObjectName("selectionInfoLabel");
        selectionInfoLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_viewportStatus->addWidget(selectionInfoLabel);


        verticalLayout_viewport->addWidget(viewportStatusBar);

        viewportSplitter->addWidget(viewportContainer);
        viewportToolbar->raise();
        openGLWidget->raise();
        viewportStatusBar->raise();
        viewportModeSelector->raise();

        verticalLayout->addWidget(viewportSplitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1896, 28));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuCameras = new QMenu(menuView);
        menuCameras->setObjectName("menuCameras");
        menuViewport_Capture = new QMenu(menuCameras);
        menuViewport_Capture->setObjectName("menuViewport_Capture");
        menuWorkspaces = new QMenu(menuView);
        menuWorkspaces->setObjectName("menuWorkspaces");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuSelection_Tools = new QMenu(menuTools);
        menuSelection_Tools->setObjectName("menuSelection_Tools");
        menu_Point_Picker = new QMenu(menuTools);
        menu_Point_Picker->setObjectName("menu_Point_Picker");
        menuModify = new QMenu(menubar);
        menuModify->setObjectName("menuModify");
        menuDeform = new QMenu(menuModify);
        menuDeform->setObjectName("menuDeform");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuCreate = new QMenu(menubar);
        menuCreate->setObjectName("menuCreate");
        menuPrimitives = new QMenu(menuCreate);
        menuPrimitives->setObjectName("menuPrimitives");
        menuCurves = new QMenu(menuCreate);
        menuCurves->setObjectName("menuCurves");
        menuFeatures = new QMenu(menubar);
        menuFeatures->setObjectName("menuFeatures");
        menuPoint_Picker = new QMenu(menuFeatures);
        menuPoint_Picker->setObjectName("menuPoint_Picker");
        menuClustering = new QMenu(menuPoint_Picker);
        menuClustering->setObjectName("menuClustering");
        menuAdd_Objects = new QMenu(menuPoint_Picker);
        menuAdd_Objects->setObjectName("menuAdd_Objects");
        menuModel_Training = new QMenu(menuPoint_Picker);
        menuModel_Training->setObjectName("menuModel_Training");
        menuUBG = new QMenu(menuFeatures);
        menuUBG->setObjectName("menuUBG");
        menuCell_Divison = new QMenu(menuUBG);
        menuCell_Divison->setObjectName("menuCell_Divison");
        menuGrid_Generator = new QMenu(menuUBG);
        menuGrid_Generator->setObjectName("menuGrid_Generator");
        menuCollision_Detection = new QMenu(menuFeatures);
        menuCollision_Detection->setObjectName("menuCollision_Detection");
        menuCollision_Path_Generator = new QMenu(menuCollision_Detection);
        menuCollision_Path_Generator->setObjectName("menuCollision_Path_Generator");
        menuCollision_Body = new QMenu(menuCollision_Detection);
        menuCollision_Body->setObjectName("menuCollision_Body");
        menuReports = new QMenu(menubar);
        menuReports->setObjectName("menuReports");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setIconSize(QSize(24, 24));
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        hierarchyDock = new QDockWidget(MainWindow);
        hierarchyDock->setObjectName("hierarchyDock");
        hierarchyDock->setFeatures(QDockWidget::DockWidgetFeature::DockWidgetClosable|QDockWidget::DockWidgetFeature::DockWidgetFloatable|QDockWidget::DockWidgetFeature::DockWidgetMovable);
        hierarchyDockContents = new QWidget();
        hierarchyDockContents->setObjectName("hierarchyDockContents");
        verticalLayout_Hierarchy = new QVBoxLayout(hierarchyDockContents);
        verticalLayout_Hierarchy->setObjectName("verticalLayout_Hierarchy");
        searchHierarchy = new QLineEdit(hierarchyDockContents);
        searchHierarchy->setObjectName("searchHierarchy");
        searchHierarchy->setClearButtonEnabled(true);

        verticalLayout_Hierarchy->addWidget(searchHierarchy);

        hierarchyFilterBar = new QWidget(hierarchyDockContents);
        hierarchyFilterBar->setObjectName("hierarchyFilterBar");
        horizontalLayout_hierarchyFilters = new QHBoxLayout(hierarchyFilterBar);
        horizontalLayout_hierarchyFilters->setObjectName("horizontalLayout_hierarchyFilters");
        horizontalLayout_hierarchyFilters->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(hierarchyFilterBar);
        treeView->setObjectName("treeView");
        treeView->setDragDropMode(QAbstractItemView::DragDropMode::InternalMove);
        treeView->setAlternatingRowColors(true);
        treeView->setHeaderHidden(true);

        horizontalLayout_hierarchyFilters->addWidget(treeView);


        verticalLayout_Hierarchy->addWidget(hierarchyFilterBar);

        hierarchyButtons = new QWidget(hierarchyDockContents);
        hierarchyButtons->setObjectName("hierarchyButtons");
        horizontalLayout_hierarchyButtons = new QHBoxLayout(hierarchyButtons);
        horizontalLayout_hierarchyButtons->setObjectName("horizontalLayout_hierarchyButtons");
        horizontalLayout_hierarchyButtons->setContentsMargins(0, 0, 0, 0);
        addObjectButton = new QPushButton(hierarchyButtons);
        addObjectButton->setObjectName("addObjectButton");
        QIcon icon56;
        icon56.addFile(QString::fromUtf8(":/icons/add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addObjectButton->setIcon(icon56);

        horizontalLayout_hierarchyButtons->addWidget(addObjectButton);

        deleteObjectButton = new QPushButton(hierarchyButtons);
        deleteObjectButton->setObjectName("deleteObjectButton");
        deleteObjectButton->setIcon(icon12);

        horizontalLayout_hierarchyButtons->addWidget(deleteObjectButton);

        groupButton = new QPushButton(hierarchyButtons);
        groupButton->setObjectName("groupButton");
        QIcon icon57;
        icon57.addFile(QString::fromUtf8(":/icons/group.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        groupButton->setIcon(icon57);

        horizontalLayout_hierarchyButtons->addWidget(groupButton);


        verticalLayout_Hierarchy->addWidget(hierarchyButtons);

        hierarchyDock->setWidget(hierarchyDockContents);
        MainWindow->addDockWidget(Qt::DockWidgetArea::LeftDockWidgetArea, hierarchyDock);
        propertiesDock = new QDockWidget(MainWindow);
        propertiesDock->setObjectName("propertiesDock");
        propertiesDock->setFeatures(QDockWidget::DockWidgetFeature::DockWidgetClosable|QDockWidget::DockWidgetFeature::DockWidgetFloatable|QDockWidget::DockWidgetFeature::DockWidgetMovable);
        propertiesDockContents = new QWidget();
        propertiesDockContents->setObjectName("propertiesDockContents");
        verticalLayout_Properties = new QVBoxLayout(propertiesDockContents);
        verticalLayout_Properties->setObjectName("verticalLayout_Properties");
        propertiesTabs = new QTabWidget(propertiesDockContents);
        propertiesTabs->setObjectName("propertiesTabs");
        transformTab = new QWidget();
        transformTab->setObjectName("transformTab");
        gridLayout_2 = new QGridLayout(transformTab);
        gridLayout_2->setObjectName("gridLayout_2");
        transformOptions = new QGroupBox(transformTab);
        transformOptions->setObjectName("transformOptions");
        gridLayout_TransformOptions = new QGridLayout(transformOptions);
        gridLayout_TransformOptions->setObjectName("gridLayout_TransformOptions");
        transformSpaceCombo = new QComboBox(transformOptions);
        transformSpaceCombo->addItem(QString());
        transformSpaceCombo->addItem(QString());
        transformSpaceCombo->addItem(QString());
        transformSpaceCombo->setObjectName("transformSpaceCombo");

        gridLayout_TransformOptions->addWidget(transformSpaceCombo, 0, 1, 1, 1);

        resetTransformButton = new QPushButton(transformOptions);
        resetTransformButton->setObjectName("resetTransformButton");
        QIcon icon58;
        icon58.addFile(QString::fromUtf8(":/icons/reset.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        resetTransformButton->setIcon(icon58);

        gridLayout_TransformOptions->addWidget(resetTransformButton, 1, 1, 1, 1);

        showGizmoCheckbox = new QCheckBox(transformOptions);
        showGizmoCheckbox->setObjectName("showGizmoCheckbox");
        showGizmoCheckbox->setChecked(true);

        gridLayout_TransformOptions->addWidget(showGizmoCheckbox, 1, 0, 1, 1);

        lockScaleCheckbox = new QCheckBox(transformOptions);
        lockScaleCheckbox->setObjectName("lockScaleCheckbox");
        lockScaleCheckbox->setChecked(true);

        gridLayout_TransformOptions->addWidget(lockScaleCheckbox, 0, 0, 1, 1);


        gridLayout_2->addWidget(transformOptions, 0, 0, 1, 1);

        transformGroup = new QGroupBox(transformTab);
        transformGroup->setObjectName("transformGroup");
        formLayout_Transform = new QFormLayout(transformGroup);
        formLayout_Transform->setObjectName("formLayout_Transform");
        positionLabel = new QLabel(transformGroup);
        positionLabel->setObjectName("positionLabel");

        formLayout_Transform->setWidget(0, QFormLayout::ItemRole::LabelRole, positionLabel);

        horizontalLayout_Position = new QHBoxLayout();
        horizontalLayout_Position->setObjectName("horizontalLayout_Position");
        positionX = new QDoubleSpinBox(transformGroup);
        positionX->setObjectName("positionX");
        positionX->setDecimals(3);
        positionX->setMinimum(-99999.000000000000000);
        positionX->setMaximum(99999.000000000000000);

        horizontalLayout_Position->addWidget(positionX);

        positionY = new QDoubleSpinBox(transformGroup);
        positionY->setObjectName("positionY");
        positionY->setDecimals(3);
        positionY->setMinimum(-99999.000000000000000);
        positionY->setMaximum(99999.000000000000000);

        horizontalLayout_Position->addWidget(positionY);

        positionZ = new QDoubleSpinBox(transformGroup);
        positionZ->setObjectName("positionZ");
        positionZ->setDecimals(3);
        positionZ->setMinimum(-99999.000000000000000);
        positionZ->setMaximum(99999.000000000000000);

        horizontalLayout_Position->addWidget(positionZ);


        formLayout_Transform->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout_Position);

        rotationLabel = new QLabel(transformGroup);
        rotationLabel->setObjectName("rotationLabel");

        formLayout_Transform->setWidget(1, QFormLayout::ItemRole::LabelRole, rotationLabel);

        horizontalLayout_Rotation = new QHBoxLayout();
        horizontalLayout_Rotation->setObjectName("horizontalLayout_Rotation");
        rotationX = new QDoubleSpinBox(transformGroup);
        rotationX->setObjectName("rotationX");
        rotationX->setDecimals(1);
        rotationX->setMinimum(-360.000000000000000);
        rotationX->setMaximum(360.000000000000000);

        horizontalLayout_Rotation->addWidget(rotationX);

        rotationY = new QDoubleSpinBox(transformGroup);
        rotationY->setObjectName("rotationY");
        rotationY->setDecimals(1);
        rotationY->setMinimum(-360.000000000000000);
        rotationY->setMaximum(360.000000000000000);

        horizontalLayout_Rotation->addWidget(rotationY);

        rotationZ = new QDoubleSpinBox(transformGroup);
        rotationZ->setObjectName("rotationZ");
        rotationZ->setDecimals(1);
        rotationZ->setMinimum(-360.000000000000000);
        rotationZ->setMaximum(360.000000000000000);

        horizontalLayout_Rotation->addWidget(rotationZ);


        formLayout_Transform->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_Rotation);

        scaleLabel = new QLabel(transformGroup);
        scaleLabel->setObjectName("scaleLabel");

        formLayout_Transform->setWidget(2, QFormLayout::ItemRole::LabelRole, scaleLabel);

        horizontalLayout_Scale = new QHBoxLayout();
        horizontalLayout_Scale->setObjectName("horizontalLayout_Scale");
        scaleX = new QDoubleSpinBox(transformGroup);
        scaleX->setObjectName("scaleX");
        scaleX->setDecimals(3);
        scaleX->setMinimum(0.001000000000000);
        scaleX->setMaximum(9999.000000000000000);
        scaleX->setValue(1.000000000000000);

        horizontalLayout_Scale->addWidget(scaleX);

        scaleY = new QDoubleSpinBox(transformGroup);
        scaleY->setObjectName("scaleY");
        scaleY->setDecimals(3);
        scaleY->setMinimum(0.001000000000000);
        scaleY->setMaximum(9999.000000000000000);
        scaleY->setValue(1.000000000000000);

        horizontalLayout_Scale->addWidget(scaleY);

        scaleZ = new QDoubleSpinBox(transformGroup);
        scaleZ->setObjectName("scaleZ");
        scaleZ->setDecimals(3);
        scaleZ->setMinimum(0.001000000000000);
        scaleZ->setMaximum(9999.000000000000000);
        scaleZ->setValue(1.000000000000000);

        horizontalLayout_Scale->addWidget(scaleZ);


        formLayout_Transform->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_Scale);


        gridLayout_2->addWidget(transformGroup, 1, 0, 1, 1);

        groupBox = new QGroupBox(transformTab);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        showLightsButton = new QToolButton(groupBox);
        showLightsButton->setObjectName("showLightsButton");
        showLightsButton->setIcon(icon39);
        showLightsButton->setCheckable(true);
        showLightsButton->setChecked(true);

        horizontalLayout->addWidget(showLightsButton);

        showCamerasButton = new QToolButton(groupBox);
        showCamerasButton->setObjectName("showCamerasButton");
        showCamerasButton->setIcon(icon40);
        showCamerasButton->setCheckable(true);
        showCamerasButton->setChecked(true);

        horizontalLayout->addWidget(showCamerasButton);

        showMeshButton = new QToolButton(groupBox);
        showMeshButton->setObjectName("showMeshButton");
        QIcon icon59;
        icon59.addFile(QString::fromUtf8(":/icons/mesh.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        showMeshButton->setIcon(icon59);
        showMeshButton->setCheckable(true);
        showMeshButton->setChecked(true);

        horizontalLayout->addWidget(showMeshButton);

        hierarchyOptionsButton = new QToolButton(groupBox);
        hierarchyOptionsButton->setObjectName("hierarchyOptionsButton");
        QIcon icon60;
        icon60.addFile(QString::fromUtf8(":/icons/options.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        hierarchyOptionsButton->setIcon(icon60);
        hierarchyOptionsButton->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);

        horizontalLayout->addWidget(hierarchyOptionsButton);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 1);

        QIcon icon61;
        icon61.addFile(QString::fromUtf8(":/icons/transform.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        propertiesTabs->addTab(transformTab, icon61, QString());
        materialsTab = new QWidget();
        materialsTab->setObjectName("materialsTab");
        verticalLayout_Materials = new QVBoxLayout(materialsTab);
        verticalLayout_Materials->setObjectName("verticalLayout_Materials");
        materialToolbar = new QWidget(materialsTab);
        materialToolbar->setObjectName("materialToolbar");
        horizontalLayout_materialToolbar = new QHBoxLayout(materialToolbar);
        horizontalLayout_materialToolbar->setObjectName("horizontalLayout_materialToolbar");
        horizontalLayout_materialToolbar->setContentsMargins(0, 0, 0, 0);
        materialLabel = new QLabel(materialToolbar);
        materialLabel->setObjectName("materialLabel");

        horizontalLayout_materialToolbar->addWidget(materialLabel);

        materialSelector = new QComboBox(materialToolbar);
        materialSelector->addItem(QString());
        materialSelector->setObjectName("materialSelector");

        horizontalLayout_materialToolbar->addWidget(materialSelector);

        addMaterialButton = new QPushButton(materialToolbar);
        addMaterialButton->setObjectName("addMaterialButton");
        addMaterialButton->setIcon(icon56);

        horizontalLayout_materialToolbar->addWidget(addMaterialButton);


        verticalLayout_Materials->addWidget(materialToolbar);

        materialPropertiesTabs = new QTabWidget(materialsTab);
        materialPropertiesTabs->setObjectName("materialPropertiesTabs");
        surfaceTab = new QWidget();
        surfaceTab->setObjectName("surfaceTab");
        verticalLayout_Surface = new QVBoxLayout(surfaceTab);
        verticalLayout_Surface->setObjectName("verticalLayout_Surface");
        colorPicker = new QWidget(surfaceTab);
        colorPicker->setObjectName("colorPicker");
        formLayout_ColorPicker = new QFormLayout(colorPicker);
        formLayout_ColorPicker->setObjectName("formLayout_ColorPicker");
        baseColorLabel = new QLabel(colorPicker);
        baseColorLabel->setObjectName("baseColorLabel");

        formLayout_ColorPicker->setWidget(0, QFormLayout::ItemRole::LabelRole, baseColorLabel);

        horizontalLayout_colorPicker = new QHBoxLayout();
        horizontalLayout_colorPicker->setObjectName("horizontalLayout_colorPicker");
        colorPickerButton = new QPushButton(colorPicker);
        colorPickerButton->setObjectName("colorPickerButton");
        colorPickerButton->setMinimumSize(QSize(40, 24));
        colorPickerButton->setMaximumSize(QSize(40, 24));

        horizontalLayout_colorPicker->addWidget(colorPickerButton);

        rSlider = new QSlider(colorPicker);
        rSlider->setObjectName("rSlider");
        rSlider->setMaximum(255);
        rSlider->setValue(200);
        rSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_colorPicker->addWidget(rSlider);

        gSlider = new QSlider(colorPicker);
        gSlider->setObjectName("gSlider");
        gSlider->setMaximum(255);
        gSlider->setValue(100);
        gSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_colorPicker->addWidget(gSlider);

        bSlider = new QSlider(colorPicker);
        bSlider->setObjectName("bSlider");
        bSlider->setMaximum(255);
        bSlider->setValue(100);
        bSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_colorPicker->addWidget(bSlider);


        formLayout_ColorPicker->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout_colorPicker);


        verticalLayout_Surface->addWidget(colorPicker);

        materialPropertiesTable = new QTableWidget(surfaceTab);
        if (materialPropertiesTable->columnCount() < 2)
            materialPropertiesTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        materialPropertiesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        materialPropertiesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (materialPropertiesTable->rowCount() < 6)
            materialPropertiesTable->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        materialPropertiesTable->setItem(0, 0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        materialPropertiesTable->setItem(0, 1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        materialPropertiesTable->setItem(1, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        materialPropertiesTable->setItem(1, 1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        materialPropertiesTable->setItem(2, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        materialPropertiesTable->setItem(2, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        materialPropertiesTable->setItem(3, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        materialPropertiesTable->setItem(3, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        materialPropertiesTable->setItem(4, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        materialPropertiesTable->setItem(4, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        materialPropertiesTable->setItem(5, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        materialPropertiesTable->setItem(5, 1, __qtablewidgetitem13);
        materialPropertiesTable->setObjectName("materialPropertiesTable");
        materialPropertiesTable->setAlternatingRowColors(true);
        materialPropertiesTable->setShowGrid(false);
        materialPropertiesTable->setCornerButtonEnabled(false);
        materialPropertiesTable->setRowCount(6);
        materialPropertiesTable->setColumnCount(2);
        materialPropertiesTable->horizontalHeader()->setDefaultSectionSize(150);
        materialPropertiesTable->horizontalHeader()->setStretchLastSection(true);
        materialPropertiesTable->verticalHeader()->setVisible(false);

        verticalLayout_Surface->addWidget(materialPropertiesTable);

        materialPropertiesTabs->addTab(surfaceTab, QString());
        texturesTab = new QWidget();
        texturesTab->setObjectName("texturesTab");
        verticalLayout_Textures = new QVBoxLayout(texturesTab);
        verticalLayout_Textures->setObjectName("verticalLayout_Textures");
        texturesList = new QListWidget(texturesTab);
        new QListWidgetItem(texturesList);
        new QListWidgetItem(texturesList);
        new QListWidgetItem(texturesList);
        new QListWidgetItem(texturesList);
        new QListWidgetItem(texturesList);
        new QListWidgetItem(texturesList);
        texturesList->setObjectName("texturesList");
        texturesList->setAlternatingRowColors(true);

        verticalLayout_Textures->addWidget(texturesList);

        textureActions = new QWidget(texturesTab);
        textureActions->setObjectName("textureActions");
        horizontalLayout_textureActions = new QHBoxLayout(textureActions);
        horizontalLayout_textureActions->setObjectName("horizontalLayout_textureActions");
        horizontalLayout_textureActions->setContentsMargins(0, 0, 0, 0);
        loadTextureButton = new QPushButton(textureActions);
        loadTextureButton->setObjectName("loadTextureButton");
        QIcon icon62;
        icon62.addFile(QString::fromUtf8(":/icons/load.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        loadTextureButton->setIcon(icon62);

        horizontalLayout_textureActions->addWidget(loadTextureButton);

        clearTextureButton = new QPushButton(textureActions);
        clearTextureButton->setObjectName("clearTextureButton");
        QIcon icon63;
        icon63.addFile(QString::fromUtf8(":/icons/clear.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        clearTextureButton->setIcon(icon63);

        horizontalLayout_textureActions->addWidget(clearTextureButton);

        editTextureButton = new QPushButton(textureActions);
        editTextureButton->setObjectName("editTextureButton");
        QIcon icon64;
        icon64.addFile(QString::fromUtf8(":/icons/edit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        editTextureButton->setIcon(icon64);

        horizontalLayout_textureActions->addWidget(editTextureButton);


        verticalLayout_Textures->addWidget(textureActions);

        materialPropertiesTabs->addTab(texturesTab, QString());

        verticalLayout_Materials->addWidget(materialPropertiesTabs);

        QIcon icon65;
        icon65.addFile(QString::fromUtf8(":/icons/material.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        propertiesTabs->addTab(materialsTab, icon65, QString());
        modifiersTab = new QWidget();
        modifiersTab->setObjectName("modifiersTab");
        verticalLayout_Modifiers = new QVBoxLayout(modifiersTab);
        verticalLayout_Modifiers->setObjectName("verticalLayout_Modifiers");
        modifierToolbar = new QWidget(modifiersTab);
        modifierToolbar->setObjectName("modifierToolbar");
        horizontalLayout_modifierToolbar = new QHBoxLayout(modifierToolbar);
        horizontalLayout_modifierToolbar->setObjectName("horizontalLayout_modifierToolbar");
        horizontalLayout_modifierToolbar->setContentsMargins(0, 0, 0, 0);
        addModifierButton = new QPushButton(modifierToolbar);
        addModifierButton->setObjectName("addModifierButton");
        addModifierButton->setIcon(icon56);

        horizontalLayout_modifierToolbar->addWidget(addModifierButton);

        applyModifierButton = new QPushButton(modifierToolbar);
        applyModifierButton->setObjectName("applyModifierButton");
        QIcon icon66;
        icon66.addFile(QString::fromUtf8(":/icons/apply.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        applyModifierButton->setIcon(icon66);

        horizontalLayout_modifierToolbar->addWidget(applyModifierButton);


        verticalLayout_Modifiers->addWidget(modifierToolbar);

        modifierList = new QListWidget(modifiersTab);
        modifierList->setObjectName("modifierList");
        modifierList->setAlternatingRowColors(true);
        modifierList->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

        verticalLayout_Modifiers->addWidget(modifierList);

        modifierSettings = new QGroupBox(modifiersTab);
        modifierSettings->setObjectName("modifierSettings");
        formLayout_ModifierSettings = new QFormLayout(modifierSettings);
        formLayout_ModifierSettings->setObjectName("formLayout_ModifierSettings");
        subdivLevelLabel = new QLabel(modifierSettings);
        subdivLevelLabel->setObjectName("subdivLevelLabel");

        formLayout_ModifierSettings->setWidget(0, QFormLayout::ItemRole::LabelRole, subdivLevelLabel);

        subdivLevelSpinBox = new QSpinBox(modifierSettings);
        subdivLevelSpinBox->setObjectName("subdivLevelSpinBox");
        subdivLevelSpinBox->setMinimum(1);
        subdivLevelSpinBox->setMaximum(6);
        subdivLevelSpinBox->setValue(2);

        formLayout_ModifierSettings->setWidget(0, QFormLayout::ItemRole::FieldRole, subdivLevelSpinBox);

        showInViewportCheckBox = new QCheckBox(modifierSettings);
        showInViewportCheckBox->setObjectName("showInViewportCheckBox");
        showInViewportCheckBox->setChecked(true);

        formLayout_ModifierSettings->setWidget(1, QFormLayout::ItemRole::LabelRole, showInViewportCheckBox);


        verticalLayout_Modifiers->addWidget(modifierSettings);

        QIcon icon67;
        icon67.addFile(QString::fromUtf8(":/icons/modifier.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        propertiesTabs->addTab(modifiersTab, icon67, QString());

        verticalLayout_Properties->addWidget(propertiesTabs);

        propertiesDock->setWidget(propertiesDockContents);
        MainWindow->addDockWidget(Qt::DockWidgetArea::RightDockWidgetArea, propertiesDock);
        consoleDock = new QDockWidget(MainWindow);
        consoleDock->setObjectName("consoleDock");
        consoleDock->setFeatures(QDockWidget::DockWidgetFeature::DockWidgetClosable|QDockWidget::DockWidgetFeature::DockWidgetFloatable|QDockWidget::DockWidgetFeature::DockWidgetMovable);
        consoleDockContents = new QWidget();
        consoleDockContents->setObjectName("consoleDockContents");
        verticalLayout_Console = new QVBoxLayout(consoleDockContents);
        verticalLayout_Console->setObjectName("verticalLayout_Console");
        consoleOutput = new QPlainTextEdit(consoleDockContents);
        consoleOutput->setObjectName("consoleOutput");
        consoleOutput->setReadOnly(true);

        verticalLayout_Console->addWidget(consoleOutput);

        horizontalLayout_Console = new QHBoxLayout();
        horizontalLayout_Console->setObjectName("horizontalLayout_Console");
        consoleInput = new QLineEdit(consoleDockContents);
        consoleInput->setObjectName("consoleInput");

        horizontalLayout_Console->addWidget(consoleInput);

        executeButton = new QPushButton(consoleDockContents);
        executeButton->setObjectName("executeButton");

        horizontalLayout_Console->addWidget(executeButton);


        verticalLayout_Console->addLayout(horizontalLayout_Console);

        consoleDock->setWidget(consoleDockContents);
        MainWindow->addDockWidget(Qt::DockWidgetArea::BottomDockWidgetArea, consoleDock);
        assetBrowserDock = new QDockWidget(MainWindow);
        assetBrowserDock->setObjectName("assetBrowserDock");
        assetBrowserDock->setFeatures(QDockWidget::DockWidgetFeature::DockWidgetClosable|QDockWidget::DockWidgetFeature::DockWidgetFloatable|QDockWidget::DockWidgetFeature::DockWidgetMovable);
        assetDockContents = new QWidget();
        assetDockContents->setObjectName("assetDockContents");
        verticalLayout_Assets = new QVBoxLayout(assetDockContents);
        verticalLayout_Assets->setObjectName("verticalLayout_Assets");
        assetNavigation = new QWidget(assetDockContents);
        assetNavigation->setObjectName("assetNavigation");
        horizontalLayout_assetNavigation = new QHBoxLayout(assetNavigation);
        horizontalLayout_assetNavigation->setObjectName("horizontalLayout_assetNavigation");
        horizontalLayout_assetNavigation->setContentsMargins(0, 0, 0, 0);
        assetBackButton = new QPushButton(assetNavigation);
        assetBackButton->setObjectName("assetBackButton");
        QIcon icon68;
        icon68.addFile(QString::fromUtf8(":/icons/back.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        assetBackButton->setIcon(icon68);

        horizontalLayout_assetNavigation->addWidget(assetBackButton);

        assetForwardButton = new QPushButton(assetNavigation);
        assetForwardButton->setObjectName("assetForwardButton");
        QIcon icon69;
        icon69.addFile(QString::fromUtf8(":/icons/forward.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        assetForwardButton->setIcon(icon69);

        horizontalLayout_assetNavigation->addWidget(assetForwardButton);

        assetUpButton = new QPushButton(assetNavigation);
        assetUpButton->setObjectName("assetUpButton");
        QIcon icon70;
        icon70.addFile(QString::fromUtf8(":/icons/up.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        assetUpButton->setIcon(icon70);

        horizontalLayout_assetNavigation->addWidget(assetUpButton);

        assetPathEdit = new QLineEdit(assetNavigation);
        assetPathEdit->setObjectName("assetPathEdit");

        horizontalLayout_assetNavigation->addWidget(assetPathEdit);

        refreshAssetsButton = new QPushButton(assetNavigation);
        refreshAssetsButton->setObjectName("refreshAssetsButton");
        QIcon icon71;
        icon71.addFile(QString::fromUtf8(":/icons/refresh.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        refreshAssetsButton->setIcon(icon71);

        horizontalLayout_assetNavigation->addWidget(refreshAssetsButton);


        verticalLayout_Assets->addWidget(assetNavigation);

        assetTabs = new QTabWidget(assetDockContents);
        assetTabs->setObjectName("assetTabs");
        FilesTab = new QWidget();
        FilesTab->setObjectName("FilesTab");
        verticalLayout_2 = new QVBoxLayout(FilesTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        browseButton = new QPushButton(FilesTab);
        browseButton->setObjectName("browseButton");

        verticalLayout_2->addWidget(browseButton);

        assetSplitter = new QSplitter(FilesTab);
        assetSplitter->setObjectName("assetSplitter");
        assetSplitter->setOrientation(Qt::Orientation::Horizontal);
        fileDetailsContainer = new QWidget(assetSplitter);
        fileDetailsContainer->setObjectName("fileDetailsContainer");
        verticalLayout_fileDetails = new QVBoxLayout(fileDetailsContainer);
        verticalLayout_fileDetails->setObjectName("verticalLayout_fileDetails");
        treeView_2 = new QTreeView(fileDetailsContainer);
        treeView_2->setObjectName("treeView_2");

        verticalLayout_fileDetails->addWidget(treeView_2);

        fileDetailsGroup = new QGroupBox(fileDetailsContainer);
        fileDetailsGroup->setObjectName("fileDetailsGroup");
        formLayout_fileDetails = new QFormLayout(fileDetailsGroup);
        formLayout_fileDetails->setObjectName("formLayout_fileDetails");
        fileNameLabel = new QLabel(fileDetailsGroup);
        fileNameLabel->setObjectName("fileNameLabel");

        formLayout_fileDetails->setWidget(0, QFormLayout::ItemRole::LabelRole, fileNameLabel);

        fileNameValue = new QLabel(fileDetailsGroup);
        fileNameValue->setObjectName("fileNameValue");

        formLayout_fileDetails->setWidget(0, QFormLayout::ItemRole::FieldRole, fileNameValue);

        fileSizeLabel = new QLabel(fileDetailsGroup);
        fileSizeLabel->setObjectName("fileSizeLabel");

        formLayout_fileDetails->setWidget(1, QFormLayout::ItemRole::LabelRole, fileSizeLabel);

        fileSizeValue = new QLabel(fileDetailsGroup);
        fileSizeValue->setObjectName("fileSizeValue");

        formLayout_fileDetails->setWidget(1, QFormLayout::ItemRole::FieldRole, fileSizeValue);

        fileTypeLabel = new QLabel(fileDetailsGroup);
        fileTypeLabel->setObjectName("fileTypeLabel");

        formLayout_fileDetails->setWidget(2, QFormLayout::ItemRole::LabelRole, fileTypeLabel);

        fileTypeValue = new QLabel(fileDetailsGroup);
        fileTypeValue->setObjectName("fileTypeValue");

        formLayout_fileDetails->setWidget(2, QFormLayout::ItemRole::FieldRole, fileTypeValue);

        fileDateLabel = new QLabel(fileDetailsGroup);
        fileDateLabel->setObjectName("fileDateLabel");

        formLayout_fileDetails->setWidget(3, QFormLayout::ItemRole::LabelRole, fileDateLabel);

        fileDateValue = new QLabel(fileDetailsGroup);
        fileDateValue->setObjectName("fileDateValue");

        formLayout_fileDetails->setWidget(3, QFormLayout::ItemRole::FieldRole, fileDateValue);


        verticalLayout_fileDetails->addWidget(fileDetailsGroup);

        assetSplitter->addWidget(fileDetailsContainer);
        previewContainer = new QWidget(assetSplitter);
        previewContainer->setObjectName("previewContainer");
        verticalLayout_preview = new QVBoxLayout(previewContainer);
        verticalLayout_preview->setObjectName("verticalLayout_preview");
        previewOpenGLWidget = new QOpenGLWidget(previewContainer);
        previewOpenGLWidget->setObjectName("previewOpenGLWidget");
        previewOpenGLWidget->setFixedSize(QSize(300, 300));

        verticalLayout_preview->addWidget(previewOpenGLWidget, 0, Qt::AlignRight);

        assetSplitter->addWidget(previewContainer);

        verticalLayout_2->addWidget(assetSplitter);

        assetTabs->addTab(FilesTab, QString());
        propertiesTab = new QWidget();
        propertiesTab->setObjectName("propertiesTab");
        verticalLayout_Favorites = new QVBoxLayout(propertiesTab);
        verticalLayout_Favorites->setObjectName("verticalLayout_Favorites");
        treeView_3 = new QTreeView(propertiesTab);
        treeView_3->setObjectName("treeView_3");

        verticalLayout_Favorites->addWidget(treeView_3);

        assetTabs->addTab(propertiesTab, QString());

        verticalLayout_Assets->addWidget(assetTabs);

        assetSearch = new QWidget(assetDockContents);
        assetSearch->setObjectName("assetSearch");
        horizontalLayout_assetSearch = new QHBoxLayout(assetSearch);
        horizontalLayout_assetSearch->setObjectName("horizontalLayout_assetSearch");
        horizontalLayout_assetSearch->setContentsMargins(0, 0, 0, 0);
        searchLabel = new QLabel(assetSearch);
        searchLabel->setObjectName("searchLabel");

        horizontalLayout_assetSearch->addWidget(searchLabel);

        assetSearchEdit = new QLineEdit(assetSearch);
        assetSearchEdit->setObjectName("assetSearchEdit");
        assetSearchEdit->setClearButtonEnabled(true);

        horizontalLayout_assetSearch->addWidget(assetSearchEdit);

        assetFilterButton = new QPushButton(assetSearch);
        assetFilterButton->setObjectName("assetFilterButton");
        QIcon icon72;
        icon72.addFile(QString::fromUtf8(":/icons/filter.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        assetFilterButton->setIcon(icon72);

        horizontalLayout_assetSearch->addWidget(assetFilterButton);


        verticalLayout_Assets->addWidget(assetSearch);

        assetBrowserDock->setWidget(assetDockContents);
        MainWindow->addDockWidget(Qt::DockWidgetArea::BottomDockWidgetArea, assetBrowserDock);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuCreate->menuAction());
        menubar->addAction(menuModify->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuFeatures->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuReports->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionExport);
        menuFile->addSeparator();
        menuFile->addAction(actionImport);
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionDelete);
        menuEdit->addAction(actionDuplicate);
        menuEdit->addSeparator();
        menuEdit->addSeparator();
        menuEdit->addAction(actionPreferences);
        menuView->addAction(actionShow_Grid);
        menuView->addAction(actionShow_Axis);
        menuView->addSeparator();
        menuView->addAction(menuCameras->menuAction());
        menuView->addAction(menuWorkspaces->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionZoom_In);
        menuView->addAction(actionZoom_Out);
        menuView->addAction(actionZoom_to_Fit);
        menuView->addSeparator();
        menuCameras->addAction(actionFront_View);
        menuCameras->addAction(actionTop_View);
        menuCameras->addAction(actionSide_View);
        menuCameras->addAction(actionIsometric_View);
        menuCameras->addSeparator();
        menuCameras->addAction(menuViewport_Capture->menuAction());
        menuViewport_Capture->addAction(actionUser_Capture);
        menuViewport_Capture->addAction(actionSlection_Capture);
        menuWorkspaces->addSeparator();
        menuTools->addAction(actionMove_Tool);
        menuTools->addAction(actionRotate_Tool);
        menuTools->addAction(actionScale_Tool);
        menuTools->addSeparator();
        menuTools->addAction(menuSelection_Tools->menuAction());
        menuTools->addSeparator();
        menuTools->addAction(actionVertex_Mode);
        menuTools->addAction(actionEdge_Mode);
        menuTools->addAction(actionFace_Mode);
        menuTools->addAction(actionObject_Mode);
        menuTools->addSeparator();
        menuTools->addAction(menu_Point_Picker->menuAction());
        menuSelection_Tools->addSeparator();
        menu_Point_Picker->addAction(actionPick_Points_2);
        menu_Point_Picker->addAction(actionShow_Points_2);
        menu_Point_Picker->addAction(actionSave_Points);
        menuModify->addAction(actionSubdivide);
        menuModify->addAction(actionExtrude);
        menuModify->addAction(actionBevel);
        menuModify->addAction(actionLoop_Cut);
        menuModify->addSeparator();
        menuModify->addAction(menuDeform->menuAction());
        menuModify->addSeparator();
        menuModify->addAction(actionBoolean_Union);
        menuModify->addAction(actionBoolean_Difference);
        menuModify->addAction(actionBoolean_Intersect);
        menuModify->addSeparator();
        menuHelp->addAction(actionShortcuts);
        menuHelp->addSeparator();
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuCreate->addAction(menuPrimitives->menuAction());
        menuCreate->addAction(menuCurves->menuAction());
        menuCreate->addSeparator();
        menuCreate->addAction(actionLight);
        menuCreate->addAction(actionCamera);
        menuCreate->addAction(actionEmpty);
        menuCreate->addSeparator();
        menuCreate->addAction(actionText);
        menuCreate->addAction(actionReference_Image);
        menuCreate->addSeparator();
        menuPrimitives->addAction(actionCube);
        menuPrimitives->addAction(actionSphere);
        menuPrimitives->addAction(actionCylinder);
        menuPrimitives->addAction(actionCone);
        menuPrimitives->addAction(actionTorus);
        menuPrimitives->addAction(actionPlane);
        menuCurves->addAction(actionBezier_Curve);
        menuCurves->addAction(actionNURBS_Curve);
        menuFeatures->addAction(menuPoint_Picker->menuAction());
        menuFeatures->addAction(menuUBG->menuAction());
        menuFeatures->addAction(actionDigital_Twinning);
        menuFeatures->addAction(actionICP);
        menuFeatures->addAction(menuCollision_Detection->menuAction());
        menuFeatures->addAction(actionCDD);
        menuFeatures->addAction(actionPoint_cloud_Cropper);
        menuPoint_Picker->addAction(menuClustering->menuAction());
        menuPoint_Picker->addAction(menuModel_Training->menuAction());
        menuPoint_Picker->addAction(menuAdd_Objects->menuAction());
        menuPoint_Picker->addAction(actionRecognize_Objects);
        menuClustering->addAction(actionIdentify_Similar_Clusters);
        menuClustering->addAction(actionColor_Assigner);
        menuClustering->addAction(actionClustering_mNager);
        menuClustering->addAction(actionCluster_list);
        menuAdd_Objects->addAction(actionManage_Objects);
        menuModel_Training->addAction(actionTraining_Manager);
        menuUBG->addAction(menuGrid_Generator->menuAction());
        menuUBG->addAction(menuCell_Divison->menuAction());
        menuUBG->addAction(actionCell_Focus);
        menuUBG->addAction(actionGrid_Population_desity);
        menuCell_Divison->addAction(actionCell_Divison_Slections);
        menuGrid_Generator->addAction(actionGenerate_3D_grid);
        menuGrid_Generator->addAction(actionGenerate_2D_grid);
        menuGrid_Generator->addAction(action2D_to_3D_Grid);
        menuGrid_Generator->addAction(action3D_to_2D_Grid);
        menuGrid_Generator->addAction(actionGrid_Placment);
        menuGrid_Generator->addAction(actionGrid_Subdivsion);
        menuCollision_Detection->addAction(menuCollision_Path_Generator->menuAction());
        menuCollision_Detection->addAction(actionCollison_map);
        menuCollision_Detection->addAction(menuCollision_Body->menuAction());
        menuCollision_Path_Generator->addAction(actionPath_Manager);
        menuCollision_Body->addAction(actionAlignment_starting_point);
        menuCollision_Body->addAction(actionLoad_points);
        menuReports->addAction(actionCell_Report);
        menuReports->addAction(actionCDD_analysis);
        menuReports->addAction(actionObject_detection_Report);
        menuReports->addAction(actionDigital_twinning);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionMove_Tool);
        mainToolBar->addAction(actionRotate_Tool);
        mainToolBar->addAction(actionScale_Tool);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionVertex_Mode);
        mainToolBar->addAction(actionEdge_Mode);
        mainToolBar->addAction(actionFace_Mode);
        mainToolBar->addAction(actionObject_Mode);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFront_View);
        mainToolBar->addAction(actionTop_View);
        mainToolBar->addAction(actionSide_View);
        mainToolBar->addAction(actionIsometric_View);

        retranslateUi(MainWindow);

        propertiesTabs->setCurrentIndex(2);
        materialPropertiesTabs->setCurrentIndex(0);
        assetTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "3D Editor Pro", nullptr));
        MainWindow->setStyleSheet(QCoreApplication::translate("MainWindow", "\n"
"    QMainWindow, QWidget {\n"
"      background-color: #1e1e1e;\n"
"      color: #e0e0e0;\n"
"    }\n"
"    QMenuBar, QToolBar, QDockWidget::title {\n"
"      background-color: #2d2d2d;\n"
"      color: #e0e0e0;\n"
"    }\n"
"    QMenuBar::item, QMenu::item {\n"
"      padding: 4px 10px;\n"
"    }\n"
"    QMenuBar::item:selected, QMenu::item:selected {\n"
"      background-color: #3d3d3d;\n"
"    }\n"
"    QMenu {\n"
"      background-color: #2d2d2d;\n"
"      border: 1px solid #444444;\n"
"    }\n"
"    QToolButton, QPushButton {\n"
"      background-color: #2d2d2d;\n"
"      color: #e0e0e0;\n"
"      border: none;\n"
"      padding: 5px;\n"
"    }\n"
"    QToolButton:hover, QPushButton:hover {\n"
"      background-color: #3d3d3d;\n"
"    }\n"
"    QToolButton:checked {\n"
"      background-color: #4d4d4d;\n"
"      border-bottom: 2px solid #00a8ff;\n"
"    }\n"
"    QTreeView, QTableWidget, QPlainTextEdit, QLineEdit, QListWidget {\n"
"      background-color: #252525;\n"
"      color: #e0e0e0;\n"
"      "
                        "border: 1px solid #444444;\n"
"    }\n"
"    QTreeView::item:selected, QTableWidget::item:selected, QListWidget::item:selected {\n"
"      background-color: #3d3d3d;\n"
"    }\n"
"    QHeaderView::section {\n"
"      background-color: #2d2d2d;\n"
"      color: #e0e0e0;\n"
"      padding: 5px;\n"
"      border: 1px solid #444444;\n"
"    }\n"
"    QStatusBar {\n"
"      background-color: #2d2d2d;\n"
"      color: #e0e0e0;\n"
"    }\n"
"    QTabWidget::pane {\n"
"      border: 1px solid #444444;\n"
"    }\n"
"    QTabBar::tab {\n"
"      background-color: #2d2d2d;\n"
"      color: #e0e0e0;\n"
"      padding: 6px 12px;\n"
"      border-top-left-radius: 4px;\n"
"      border-top-right-radius: 4px;\n"
"    }\n"
"    QTabBar::tab:selected {\n"
"      background-color: #3d3d3d;\n"
"      border-bottom: 2px solid #00a8ff;\n"
"    }\n"
"    QSlider::groove:horizontal {\n"
"      height: 4px;\n"
"      background: #444444;\n"
"    }\n"
"    QSlider::handle:horizontal {\n"
"      background: #00a8ff;\n"
"      width: 12p"
                        "x;\n"
"      margin: -4px 0;\n"
"      border-radius: 6px;\n"
"    }\n"
"    QGroupBox {\n"
"      border: 1px solid #444444;\n"
"      margin-top: 12px;\n"
"      padding-top: 12px;\n"
"    }\n"
"    QGroupBox::title {\n"
"      subcontrol-origin: margin;\n"
"      left: 8px;\n"
"      padding: 0 5px;\n"
"    }\n"
"    QComboBox {\n"
"      background-color: #2d2d2d;\n"
"      color: #e0e0e0;\n"
"      border: 1px solid #444444;\n"
"      padding: 2px 8px;\n"
"    }\n"
"    QComboBox::drop-down {\n"
"      subcontrol-origin: padding;\n"
"      subcontrol-position: top right;\n"
"      width: 15px;\n"
"      border-left: 1px solid #444444;\n"
"    }\n"
"    QComboBox QAbstractItemView {\n"
"      background-color: #2d2d2d;\n"
"      selection-background-color: #3d3d3d;\n"
"    }\n"
"    QCheckBox {\n"
"      spacing: 5px;\n"
"    }\n"
"    QCheckBox::indicator {\n"
"      width: 14px;\n"
"      height: 14px;\n"
"    }\n"
"    QRadioButton {\n"
"      spacing: 5px;\n"
"    }\n"
"    QRadioButton::indicator {\n"
""
                        "      width: 14px;\n"
"      height: 14px;\n"
"    }\n"
"   ", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExport->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
#if QT_CONFIG(shortcut)
        actionExport->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionImport->setText(QCoreApplication::translate("MainWindow", "Import", nullptr));
#if QT_CONFIG(shortcut)
        actionImport->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDuplicate->setText(QCoreApplication::translate("MainWindow", "Duplicate", nullptr));
#if QT_CONFIG(shortcut)
        actionDuplicate->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShow_Grid->setText(QCoreApplication::translate("MainWindow", "Show Grid", nullptr));
#if QT_CONFIG(shortcut)
        actionShow_Grid->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShow_Axis->setText(QCoreApplication::translate("MainWindow", "Show Axis", nullptr));
#if QT_CONFIG(shortcut)
        actionShow_Axis->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFront_View->setText(QCoreApplication::translate("MainWindow", "Front View", nullptr));
#if QT_CONFIG(shortcut)
        actionFront_View->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTop_View->setText(QCoreApplication::translate("MainWindow", "Top View", nullptr));
#if QT_CONFIG(shortcut)
        actionTop_View->setShortcut(QCoreApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSide_View->setText(QCoreApplication::translate("MainWindow", "Side View", nullptr));
#if QT_CONFIG(shortcut)
        actionSide_View->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionIsometric_View->setText(QCoreApplication::translate("MainWindow", "Isometric View", nullptr));
#if QT_CONFIG(shortcut)
        actionIsometric_View->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_In->setText(QCoreApplication::translate("MainWindow", "Zoom In", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_In->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+=", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_Out->setText(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_Out->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_to_Fit->setText(QCoreApplication::translate("MainWindow", "Zoom to Fit", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_to_Fit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "Preferences", nullptr));
#if QT_CONFIG(shortcut)
        actionPreferences->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionShortcuts->setText(QCoreApplication::translate("MainWindow", "Keyboard Shortcuts", nullptr));
        actionMove_Tool->setText(QCoreApplication::translate("MainWindow", "Move Tool", nullptr));
#if QT_CONFIG(shortcut)
        actionMove_Tool->setShortcut(QCoreApplication::translate("MainWindow", "W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRotate_Tool->setText(QCoreApplication::translate("MainWindow", "Rotate Tool", nullptr));
#if QT_CONFIG(shortcut)
        actionRotate_Tool->setShortcut(QCoreApplication::translate("MainWindow", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionScale_Tool->setText(QCoreApplication::translate("MainWindow", "Scale Tool", nullptr));
#if QT_CONFIG(shortcut)
        actionScale_Tool->setShortcut(QCoreApplication::translate("MainWindow", "R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVertex_Mode->setText(QCoreApplication::translate("MainWindow", "Vertex Mode", nullptr));
#if QT_CONFIG(shortcut)
        actionVertex_Mode->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEdge_Mode->setText(QCoreApplication::translate("MainWindow", "Edge Mode", nullptr));
#if QT_CONFIG(shortcut)
        actionEdge_Mode->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFace_Mode->setText(QCoreApplication::translate("MainWindow", "Face Mode", nullptr));
#if QT_CONFIG(shortcut)
        actionFace_Mode->setShortcut(QCoreApplication::translate("MainWindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionObject_Mode->setText(QCoreApplication::translate("MainWindow", "Object Mode", nullptr));
#if QT_CONFIG(shortcut)
        actionObject_Mode->setShortcut(QCoreApplication::translate("MainWindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCube->setText(QCoreApplication::translate("MainWindow", "Cube", nullptr));
        actionSphere->setText(QCoreApplication::translate("MainWindow", "Sphere", nullptr));
        actionCylinder->setText(QCoreApplication::translate("MainWindow", "Cylinder", nullptr));
        actionCone->setText(QCoreApplication::translate("MainWindow", "Cone", nullptr));
        actionPlane->setText(QCoreApplication::translate("MainWindow", "Plane", nullptr));
        actionTorus->setText(QCoreApplication::translate("MainWindow", "Torus", nullptr));
        actionLight->setText(QCoreApplication::translate("MainWindow", "Light", nullptr));
        actionCamera->setText(QCoreApplication::translate("MainWindow", "Camera", nullptr));
        actionEmpty->setText(QCoreApplication::translate("MainWindow", "Empty", nullptr));
        actionBezier_Curve->setText(QCoreApplication::translate("MainWindow", "Bezier Curve", nullptr));
        actionNURBS_Curve->setText(QCoreApplication::translate("MainWindow", "NURBS Curve", nullptr));
        actionText->setText(QCoreApplication::translate("MainWindow", "Text", nullptr));
        actionReference_Image->setText(QCoreApplication::translate("MainWindow", "Reference Image", nullptr));
        actionSubdivide->setText(QCoreApplication::translate("MainWindow", "Subdivide", nullptr));
        actionExtrude->setText(QCoreApplication::translate("MainWindow", "Extrude", nullptr));
#if QT_CONFIG(shortcut)
        actionExtrude->setShortcut(QCoreApplication::translate("MainWindow", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBevel->setText(QCoreApplication::translate("MainWindow", "Bevel", nullptr));
#if QT_CONFIG(shortcut)
        actionBevel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoop_Cut->setText(QCoreApplication::translate("MainWindow", "Loop Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionLoop_Cut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBoolean_Union->setText(QCoreApplication::translate("MainWindow", "Boolean Union", nullptr));
        actionBoolean_Difference->setText(QCoreApplication::translate("MainWindow", "Boolean Difference", nullptr));
        actionBoolean_Intersect->setText(QCoreApplication::translate("MainWindow", "Boolean Intersect", nullptr));
        actionPick_Points_2->setText(QCoreApplication::translate("MainWindow", "Pick Points", nullptr));
        actionShow_Points_2->setText(QCoreApplication::translate("MainWindow", "Show Points", nullptr));
        actionSave_Points->setText(QCoreApplication::translate("MainWindow", "Save Points", nullptr));
        actionIdentify_Similar_Clusters->setText(QCoreApplication::translate("MainWindow", "Identify Similar Clusters", nullptr));
        actionCell_Divison_Slections->setText(QCoreApplication::translate("MainWindow", "Cell Divison Slections", nullptr));
        actionCell_Focus->setText(QCoreApplication::translate("MainWindow", "Cell Focus", nullptr));
        actionGenerate_3D_grid->setText(QCoreApplication::translate("MainWindow", "Generate 3D grid", nullptr));
        actionGenerate_2D_grid->setText(QCoreApplication::translate("MainWindow", "Generate 2D grid", nullptr));
        action2D_to_3D_Grid->setText(QCoreApplication::translate("MainWindow", "2D to 3D Grid", nullptr));
        action3D_to_2D_Grid->setText(QCoreApplication::translate("MainWindow", "Grid Manager", nullptr));
        actionGrid_Placment->setText(QCoreApplication::translate("MainWindow", "Grid Placment", nullptr));
        actionGrid_Population_desity->setText(QCoreApplication::translate("MainWindow", "Grid Population desity", nullptr));
        actionGrid_Subdivsion->setText(QCoreApplication::translate("MainWindow", "Grid Subdivsion", nullptr));
        actionDigital_Twinning->setText(QCoreApplication::translate("MainWindow", "Digital Twinning", nullptr));
        actionICP->setText(QCoreApplication::translate("MainWindow", "ICP", nullptr));
        actionColor_Assigner->setText(QCoreApplication::translate("MainWindow", "Color Assigner", nullptr));
        actionClustering_mNager->setText(QCoreApplication::translate("MainWindow", "Clustering Manager", nullptr));
        actionCluster_list->setText(QCoreApplication::translate("MainWindow", "Cluster list", nullptr));
        actionManage_Objects->setText(QCoreApplication::translate("MainWindow", "Manage Objects", nullptr));
        actionTraining_Manager->setText(QCoreApplication::translate("MainWindow", "Training Manager", nullptr));
        actionRecognize_Objects->setText(QCoreApplication::translate("MainWindow", "Recognize Objects", nullptr));
        actionCollison_map->setText(QCoreApplication::translate("MainWindow", "Collision Map", nullptr));
        actionPath_Manager->setText(QCoreApplication::translate("MainWindow", "Path Manager", nullptr));
        actionAlignment_starting_point->setText(QCoreApplication::translate("MainWindow", "Alignment / starting point", nullptr));
        actionLoad_points->setText(QCoreApplication::translate("MainWindow", "Load points", nullptr));
        actionCDD->setText(QCoreApplication::translate("MainWindow", "CDD", nullptr));
        actionPoint_cloud_Cropper->setText(QCoreApplication::translate("MainWindow", "Point cloud Cropper", nullptr));
        actionUser_Capture->setText(QCoreApplication::translate("MainWindow", "User Capture", nullptr));
        actionSlection_Capture->setText(QCoreApplication::translate("MainWindow", "Selection Capture", nullptr));
        actionCell_Report->setText(QCoreApplication::translate("MainWindow", "Cell Report", nullptr));
        actionCDD_analysis->setText(QCoreApplication::translate("MainWindow", "CDD analysis", nullptr));
        actionObject_detection_Report->setText(QCoreApplication::translate("MainWindow", "Object detection Report", nullptr));
        actionDigital_twinning->setText(QCoreApplication::translate("MainWindow", "Digital twinning", nullptr));
        viewportModeSelector->setItemText(0, QCoreApplication::translate("MainWindow", "Wireframe", nullptr));
        viewportModeSelector->setItemText(1, QCoreApplication::translate("MainWindow", "Solid", nullptr));
        viewportModeSelector->setItemText(2, QCoreApplication::translate("MainWindow", "Material Preview", nullptr));
        viewportModeSelector->setItemText(3, QCoreApplication::translate("MainWindow", "Rendered", nullptr));

        viewportModeSelector->setPlaceholderText(QCoreApplication::translate("MainWindow", "Viewport Shading", nullptr));
        snapToGridButton->setText(QCoreApplication::translate("MainWindow", "Snap", nullptr));
        snapToAngleButton->setText(QCoreApplication::translate("MainWindow", "Angle", nullptr));
        pivotButton->setText(QCoreApplication::translate("MainWindow", "Pivot", nullptr));
        viewportLabel->setText(QCoreApplication::translate("MainWindow", "Perspective", nullptr));
        viewportInfoLabel->setText(QCoreApplication::translate("MainWindow", "Verts: 0 | Faces: 0 | Tris: 0", nullptr));
        selectionInfoLabel->setText(QCoreApplication::translate("MainWindow", "Selection: None", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuCameras->setTitle(QCoreApplication::translate("MainWindow", "Cameras", nullptr));
        menuViewport_Capture->setTitle(QCoreApplication::translate("MainWindow", "Viewport Capture", nullptr));
        menuWorkspaces->setTitle(QCoreApplication::translate("MainWindow", "Workspaces", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuSelection_Tools->setTitle(QCoreApplication::translate("MainWindow", "Selection Tools", nullptr));
        menu_Point_Picker->setTitle(QCoreApplication::translate("MainWindow", " Point Picker", nullptr));
        menuModify->setTitle(QCoreApplication::translate("MainWindow", "Modify", nullptr));
        menuDeform->setTitle(QCoreApplication::translate("MainWindow", "Deform", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuCreate->setTitle(QCoreApplication::translate("MainWindow", "Create", nullptr));
        menuPrimitives->setTitle(QCoreApplication::translate("MainWindow", "Primitives", nullptr));
        menuCurves->setTitle(QCoreApplication::translate("MainWindow", "Curves", nullptr));
        menuFeatures->setTitle(QCoreApplication::translate("MainWindow", "Features", nullptr));
        menuPoint_Picker->setTitle(QCoreApplication::translate("MainWindow", "Object Detection", nullptr));
        menuClustering->setTitle(QCoreApplication::translate("MainWindow", "Clustering", nullptr));
        menuAdd_Objects->setTitle(QCoreApplication::translate("MainWindow", "Add Objects", nullptr));
        menuModel_Training->setTitle(QCoreApplication::translate("MainWindow", "Model Training", nullptr));
        menuUBG->setTitle(QCoreApplication::translate("MainWindow", "UBG", nullptr));
        menuCell_Divison->setTitle(QCoreApplication::translate("MainWindow", "Cell Divison ", nullptr));
        menuGrid_Generator->setTitle(QCoreApplication::translate("MainWindow", "Grid Generator", nullptr));
        menuCollision_Detection->setTitle(QCoreApplication::translate("MainWindow", "Collision Detection", nullptr));
        menuCollision_Path_Generator->setTitle(QCoreApplication::translate("MainWindow", "Collision Path Generator", nullptr));
        menuCollision_Body->setTitle(QCoreApplication::translate("MainWindow", "Collision Body", nullptr));
        menuReports->setTitle(QCoreApplication::translate("MainWindow", "Reports", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Main Toolbar", nullptr));
        hierarchyDock->setWindowTitle(QCoreApplication::translate("MainWindow", "Asset Tree", nullptr));
        searchHierarchy->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search assets...", nullptr));
        addObjectButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        deleteObjectButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        groupButton->setText(QCoreApplication::translate("MainWindow", "Group", nullptr));
        propertiesDock->setWindowTitle(QCoreApplication::translate("MainWindow", "Model Properties", nullptr));
        transformOptions->setTitle(QCoreApplication::translate("MainWindow", "Transform Options", nullptr));
        transformSpaceCombo->setItemText(0, QCoreApplication::translate("MainWindow", "Local Space", nullptr));
        transformSpaceCombo->setItemText(1, QCoreApplication::translate("MainWindow", "World Space", nullptr));
        transformSpaceCombo->setItemText(2, QCoreApplication::translate("MainWindow", "Parent Space", nullptr));

        resetTransformButton->setText(QCoreApplication::translate("MainWindow", "Reset Transform", nullptr));
        showGizmoCheckbox->setText(QCoreApplication::translate("MainWindow", "Show Transform Gizmo", nullptr));
        lockScaleCheckbox->setText(QCoreApplication::translate("MainWindow", "Lock Scale Proportions", nullptr));
        transformGroup->setTitle(QCoreApplication::translate("MainWindow", "Coordinates", nullptr));
        positionLabel->setText(QCoreApplication::translate("MainWindow", "Position:", nullptr));
        positionX->setPrefix(QCoreApplication::translate("MainWindow", "X: ", nullptr));
        positionY->setPrefix(QCoreApplication::translate("MainWindow", "Y: ", nullptr));
        positionZ->setPrefix(QCoreApplication::translate("MainWindow", "Z: ", nullptr));
        rotationLabel->setText(QCoreApplication::translate("MainWindow", "Rotation:", nullptr));
        rotationX->setPrefix(QCoreApplication::translate("MainWindow", "X: ", nullptr));
        rotationX->setSuffix(QCoreApplication::translate("MainWindow", "\302\260", nullptr));
        rotationY->setPrefix(QCoreApplication::translate("MainWindow", "Y: ", nullptr));
        rotationY->setSuffix(QCoreApplication::translate("MainWindow", "\302\260", nullptr));
        rotationZ->setPrefix(QCoreApplication::translate("MainWindow", "Z: ", nullptr));
        rotationZ->setSuffix(QCoreApplication::translate("MainWindow", "\302\260", nullptr));
        scaleLabel->setText(QCoreApplication::translate("MainWindow", "Scale:", nullptr));
        scaleX->setPrefix(QCoreApplication::translate("MainWindow", "X: ", nullptr));
        scaleY->setPrefix(QCoreApplication::translate("MainWindow", "Y: ", nullptr));
        scaleZ->setPrefix(QCoreApplication::translate("MainWindow", "Z: ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Quick Tools", nullptr));
        showLightsButton->setText(QCoreApplication::translate("MainWindow", "Lights", nullptr));
        showCamerasButton->setText(QCoreApplication::translate("MainWindow", "Cameras", nullptr));
        showMeshButton->setText(QCoreApplication::translate("MainWindow", "Meshes", nullptr));
        hierarchyOptionsButton->setText(QCoreApplication::translate("MainWindow", "Options", nullptr));
        propertiesTabs->setTabText(propertiesTabs->indexOf(transformTab), QCoreApplication::translate("MainWindow", "Transform", nullptr));
        materialLabel->setText(QCoreApplication::translate("MainWindow", "Material:", nullptr));
        materialSelector->setItemText(0, QCoreApplication::translate("MainWindow", "Default Material", nullptr));

        addMaterialButton->setText(QString());
        baseColorLabel->setText(QCoreApplication::translate("MainWindow", "Base Color:", nullptr));
        colorPickerButton->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: rgb(200, 100, 100);", nullptr));
        colorPickerButton->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = materialPropertiesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Property", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = materialPropertiesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Value", nullptr));

        const bool __sortingEnabled = materialPropertiesTable->isSortingEnabled();
        materialPropertiesTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem2 = materialPropertiesTable->item(0, 0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Metallic", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = materialPropertiesTable->item(0, 1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = materialPropertiesTable->item(1, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Roughness", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = materialPropertiesTable->item(1, 1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "0.5", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = materialPropertiesTable->item(2, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Specular", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = materialPropertiesTable->item(2, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "0.5", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = materialPropertiesTable->item(3, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Transmission", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = materialPropertiesTable->item(3, 1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = materialPropertiesTable->item(4, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "IOR", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = materialPropertiesTable->item(4, 1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "1.45", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = materialPropertiesTable->item(5, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Emission Strength", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = materialPropertiesTable->item(5, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        materialPropertiesTable->setSortingEnabled(__sortingEnabled);

        materialPropertiesTabs->setTabText(materialPropertiesTabs->indexOf(surfaceTab), QCoreApplication::translate("MainWindow", "Surface", nullptr));

        const bool __sortingEnabled1 = texturesList->isSortingEnabled();
        texturesList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = texturesList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Base Color Map", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = texturesList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Normal Map", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = texturesList->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Metallic Map", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = texturesList->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "Roughness Map", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = texturesList->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "Displacement Map", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = texturesList->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "Emission Map", nullptr));
        texturesList->setSortingEnabled(__sortingEnabled1);

        loadTextureButton->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        clearTextureButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        editTextureButton->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        materialPropertiesTabs->setTabText(materialPropertiesTabs->indexOf(texturesTab), QCoreApplication::translate("MainWindow", "Textures", nullptr));
        propertiesTabs->setTabText(propertiesTabs->indexOf(materialsTab), QCoreApplication::translate("MainWindow", "Materials", nullptr));
        addModifierButton->setText(QCoreApplication::translate("MainWindow", "Add Modifier", nullptr));
        applyModifierButton->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
        modifierSettings->setTitle(QCoreApplication::translate("MainWindow", "Modifier Settings", nullptr));
        subdivLevelLabel->setText(QCoreApplication::translate("MainWindow", "Subdivision Level:", nullptr));
        showInViewportCheckBox->setText(QCoreApplication::translate("MainWindow", "Show in Viewport", nullptr));
        propertiesTabs->setTabText(propertiesTabs->indexOf(modifiersTab), QCoreApplication::translate("MainWindow", "Modifiers", nullptr));
        consoleDock->setWindowTitle(QCoreApplication::translate("MainWindow", "Console", nullptr));
        consoleOutput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Output will appear here...", nullptr));
        consoleInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter command...", nullptr));
        executeButton->setText(QCoreApplication::translate("MainWindow", "Execute", nullptr));
        assetBrowserDock->setWindowTitle(QCoreApplication::translate("MainWindow", "Asset Browser", nullptr));
        assetPathEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Library path...", nullptr));
        refreshAssetsButton->setText(QString());
        browseButton->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        fileDetailsGroup->setTitle(QCoreApplication::translate("MainWindow", "File Details", nullptr));
        fileNameLabel->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        fileNameValue->setText(QString());
        fileSizeLabel->setText(QCoreApplication::translate("MainWindow", "Size:", nullptr));
        fileSizeValue->setText(QString());
        fileTypeLabel->setText(QCoreApplication::translate("MainWindow", "Type:", nullptr));
        fileTypeValue->setText(QString());
        fileDateLabel->setText(QCoreApplication::translate("MainWindow", "Date Modified:", nullptr));
        fileDateValue->setText(QString());
        assetTabs->setTabText(assetTabs->indexOf(FilesTab), QCoreApplication::translate("MainWindow", "Files", nullptr));
        assetTabs->setTabText(assetTabs->indexOf(propertiesTab), QCoreApplication::translate("MainWindow", "Properties", nullptr));
        searchLabel->setText(QCoreApplication::translate("MainWindow", "Search:", nullptr));
        assetSearchEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search assets...", nullptr));
        assetFilterButton->setText(QCoreApplication::translate("MainWindow", "Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
