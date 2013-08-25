#include <assimp\mesh.h>
#include <fbxsdk.h>
#include <Common\GeometryUtilities\hkGeometryUtilities.h>
#include <niflib.h>
#include <obj\NiTriShape.h>
#include <glut.h>
#include <Openglwindow.h>

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>
#include <QTGui/qfiledialog.h>
#include <QtGui/qdesktopservices.h>
#include <qdesktopservices.h>
#include <QtGui/qdesktopwidget.h>
#include <QtGui\qmessagebox.h>
#include <QtOpenGL\qglshaderprogram.h>
#include <QtOpenGL\qglfunctions.h>
#include <QtOpenGL\QtOpenGL>

QT_BEGIN_NAMESPACE
	
namespace Ui 
{
class Ui_MainWindow : public QMainWindow
{
	Q_OBJECT
public:
    QAction *actionLoad;
    QAction *actionAutosanitze_before_save;
    QAction *actionNew_Window;
    QAction *actionReaload_xml_and_nif;
    QAction *actionReload_xml;
    QAction *actionXml_checker;
    QAction *actionResource_file;
    QAction *actionImport_3ds;
    QAction *actionImport_obj;
    QAction *actionExport_3ds;
    QAction *actionReset_block_details;
    QAction *actionInteractive_view;
    QAction *actionBlock_list;
    QAction *actionBlock_details;
    QAction *actionFm;
    QAction *actionInspect;
    QAction *actionToolbars;
    QAction *actionSelect_font;
    QAction *actionTop;
    QAction *actionWalk;
    QAction *actionFront;
    QAction *actionSide;
    QAction *actionUser;
    QAction *actionFlip;
    QAction *actionPerspective;
    QAction *actionSave_user_view;
    QAction *actionDraw_axes;
    QAction *actionDraw_nodes;
    QAction *actionDraw_havok;
    QAction *actionDraw_constraints;
    QAction *actionDraw_furniture;
    QAction *actionShow_hiddens;
    QAction *actionSettings;
    QAction *actionInteractive_help;
    QAction *actionNifskope_documentation_and_tutorials;
    QAction *actionNifskope_help_and_bug;
    QAction *actionWiki;
    QAction *actionDownloads;
    QAction *actionAbout_qt;
    QAction *actionAbout_nifskope;
    QAction *actionAttach_F;
    QAction *actionEdit_string_palettes;
    QAction *actionInsert_by_id;
    QAction *actionRemove_by_id;
    QAction *actionSort;
    QAction *actionSearch;
    QAction *actionReorder_link_arrays;
    QAction *actionCollapse_link_arrays;
    QAction *actionAdjust_texture_sources;
    QAction *actionReorder_blocks;
    QAction *actionCheck_links;
    QAction *actionUppdate_all_MOPP_code;
    QAction *actionMake_all_skin_partions;
    QAction *actionUpdate_all_tangent_spaces;
    QAction *actionMulti_apply_mode;
    QAction *actionCombine_properties;
    QAction *actionSplit_properties;
    QAction *actionRemove_bogus_nodes;
    QAction *actionStripify_all_tri_shapes;
    QAction *actionShow_blocks_in_tree;
    QAction *actionShow_blocks_in_list;
    QAction *actionHide_mismatched;
    QAction *actionReset_block_details_2;
    QAction *actionSave_as_2;
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QTreeView *treeView;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QSlider *horizontalSlider;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QComboBox *comboBox;
    QMenuBar *menubar;
	openglwindow *widget;
    QMenu *menuFile;
    QMenu *menuImport;
    QMenu *menuExport;
    QMenu *menuView;
    QMenu *menuBlock_list;
    QMenu *menuBlock_details;
    QMenu *menuRender;
    QMenu *menuSpells;
    QMenu *menuAnimation;
    QMenu *menuBlock;
    QMenu *menuSanitze;
    QMenu *menuBatch;
    QMenu *menuOptimize;
    QMenu *menuHelp;
    QStatusBar *statusbar;
	char* thefilename;
	private:
		QTimer time;

	//button events
	public Q_SLOTS:
    void importscene(void);
	void exportscene(void);
	void placemesh(const aiMesh* mesh);
	void placemesh(hkMeshBody* hmesh);
	void placemesh(FbxMesh* fmesh);
	void placemesh(Niflib::NiTriShapeRef nimesh);

	//
	//functions

   //
 void setupUi(QMainWindow *MainWindow)
    {
         if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(989, 594);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Resources/nifskope.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromStdString("Resources/nifskope.png"), QSize(), QIcon::Normal, QIcon::On);
        MainWindow->setWindowIcon(icon);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionAutosanitze_before_save = new QAction(MainWindow);
        actionAutosanitze_before_save->setObjectName(QString::fromUtf8("actionAutosanitze_before_save"));
        actionNew_Window = new QAction(MainWindow);
        actionNew_Window->setObjectName(QString::fromUtf8("actionNew_Window"));
        actionReaload_xml_and_nif = new QAction(MainWindow);
        actionReaload_xml_and_nif->setObjectName(QString::fromUtf8("actionReaload_xml_and_nif"));
        actionReload_xml = new QAction(MainWindow);
        actionReload_xml->setObjectName(QString::fromUtf8("actionReload_xml"));
        actionXml_checker = new QAction(MainWindow);
        actionXml_checker->setObjectName(QString::fromUtf8("actionXml_checker"));
        actionResource_file = new QAction(MainWindow);
        actionResource_file->setObjectName(QString::fromUtf8("actionResource_file"));
        actionImport_3ds = new QAction(MainWindow);
        actionImport_3ds->setObjectName(QString::fromUtf8("actionImport_3ds"));
        actionImport_obj = new QAction(MainWindow);
        actionImport_obj->setObjectName(QString::fromUtf8("actionImport_obj"));
        actionExport_3ds = new QAction(MainWindow);
        actionExport_3ds->setObjectName(QString::fromUtf8("actionExport_3ds"));
        actionReset_block_details = new QAction(MainWindow);
        actionReset_block_details->setObjectName(QString::fromUtf8("actionReset_block_details"));
        actionInteractive_view = new QAction(MainWindow);
        actionInteractive_view->setObjectName(QString::fromUtf8("actionInteractive_view"));
        actionBlock_list = new QAction(MainWindow);
        actionBlock_list->setObjectName(QString::fromUtf8("actionBlock_list"));
        actionBlock_details = new QAction(MainWindow);
        actionBlock_details->setObjectName(QString::fromUtf8("actionBlock_details"));
        actionFm = new QAction(MainWindow);
        actionFm->setObjectName(QString::fromUtf8("actionFm"));
        actionInspect = new QAction(MainWindow);
        actionInspect->setObjectName(QString::fromUtf8("actionInspect"));
        actionToolbars = new QAction(MainWindow);
        actionToolbars->setObjectName(QString::fromUtf8("actionToolbars"));
        actionSelect_font = new QAction(MainWindow);
        actionSelect_font->setObjectName(QString::fromUtf8("actionSelect_font"));
        actionTop = new QAction(MainWindow);
        actionTop->setObjectName(QString::fromUtf8("actionTop"));
        actionWalk = new QAction(MainWindow);
        actionWalk->setObjectName(QString::fromUtf8("actionWalk"));
        actionFront = new QAction(MainWindow);
        actionFront->setObjectName(QString::fromUtf8("actionFront"));
        actionSide = new QAction(MainWindow);
        actionSide->setObjectName(QString::fromUtf8("actionSide"));
        actionUser = new QAction(MainWindow);
        actionUser->setObjectName(QString::fromUtf8("actionUser"));
        actionFlip = new QAction(MainWindow);
        actionFlip->setObjectName(QString::fromUtf8("actionFlip"));
        actionPerspective = new QAction(MainWindow);
        actionPerspective->setObjectName(QString::fromUtf8("actionPerspective"));
        actionSave_user_view = new QAction(MainWindow);
        actionSave_user_view->setObjectName(QString::fromUtf8("actionSave_user_view"));
        actionDraw_axes = new QAction(MainWindow);
        actionDraw_axes->setObjectName(QString::fromUtf8("actionDraw_axes"));
        actionDraw_nodes = new QAction(MainWindow);
        actionDraw_nodes->setObjectName(QString::fromUtf8("actionDraw_nodes"));
        actionDraw_havok = new QAction(MainWindow);
        actionDraw_havok->setObjectName(QString::fromUtf8("actionDraw_havok"));
        actionDraw_constraints = new QAction(MainWindow);
        actionDraw_constraints->setObjectName(QString::fromUtf8("actionDraw_constraints"));
        actionDraw_furniture = new QAction(MainWindow);
        actionDraw_furniture->setObjectName(QString::fromUtf8("actionDraw_furniture"));
        actionShow_hiddens = new QAction(MainWindow);
        actionShow_hiddens->setObjectName(QString::fromUtf8("actionShow_hiddens"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionInteractive_help = new QAction(MainWindow);
        actionInteractive_help->setObjectName(QString::fromUtf8("actionInteractive_help"));
        actionNifskope_documentation_and_tutorials = new QAction(MainWindow);
        actionNifskope_documentation_and_tutorials->setObjectName(QString::fromUtf8("actionNifskope_documentation_and_tutorials"));
        actionNifskope_help_and_bug = new QAction(MainWindow);
        actionNifskope_help_and_bug->setObjectName(QString::fromUtf8("actionNifskope_help_and_bug"));
        actionWiki = new QAction(MainWindow);
        actionWiki->setObjectName(QString::fromUtf8("actionWiki"));
        actionDownloads = new QAction(MainWindow);
        actionDownloads->setObjectName(QString::fromUtf8("actionDownloads"));
        actionAbout_qt = new QAction(MainWindow);
        actionAbout_qt->setObjectName(QString::fromUtf8("actionAbout_qt"));
        actionAbout_nifskope = new QAction(MainWindow);
        actionAbout_nifskope->setObjectName(QString::fromUtf8("actionAbout_nifskope"));
        actionAttach_F = new QAction(MainWindow);
        actionAttach_F->setObjectName(QString::fromUtf8("actionAttach_F"));
        actionEdit_string_palettes = new QAction(MainWindow);
        actionEdit_string_palettes->setObjectName(QString::fromUtf8("actionEdit_string_palettes"));
        actionInsert_by_id = new QAction(MainWindow);
        actionInsert_by_id->setObjectName(QString::fromUtf8("actionInsert_by_id"));
        actionRemove_by_id = new QAction(MainWindow);
        actionRemove_by_id->setObjectName(QString::fromUtf8("actionRemove_by_id"));
        actionSort = new QAction(MainWindow);
        actionSort->setObjectName(QString::fromUtf8("actionSort"));
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
        actionReorder_link_arrays = new QAction(MainWindow);
        actionReorder_link_arrays->setObjectName(QString::fromUtf8("actionReorder_link_arrays"));
        actionCollapse_link_arrays = new QAction(MainWindow);
        actionCollapse_link_arrays->setObjectName(QString::fromUtf8("actionCollapse_link_arrays"));
        actionAdjust_texture_sources = new QAction(MainWindow);
        actionAdjust_texture_sources->setObjectName(QString::fromUtf8("actionAdjust_texture_sources"));
        actionReorder_blocks = new QAction(MainWindow);
        actionReorder_blocks->setObjectName(QString::fromUtf8("actionReorder_blocks"));
        actionCheck_links = new QAction(MainWindow);
        actionCheck_links->setObjectName(QString::fromUtf8("actionCheck_links"));
        actionUppdate_all_MOPP_code = new QAction(MainWindow);
        actionUppdate_all_MOPP_code->setObjectName(QString::fromUtf8("actionUppdate_all_MOPP_code"));
        actionMake_all_skin_partions = new QAction(MainWindow);
        actionMake_all_skin_partions->setObjectName(QString::fromUtf8("actionMake_all_skin_partions"));
        actionUpdate_all_tangent_spaces = new QAction(MainWindow);
        actionUpdate_all_tangent_spaces->setObjectName(QString::fromUtf8("actionUpdate_all_tangent_spaces"));
        actionMulti_apply_mode = new QAction(MainWindow);
        actionMulti_apply_mode->setObjectName(QString::fromUtf8("actionMulti_apply_mode"));
        actionCombine_properties = new QAction(MainWindow);
        actionCombine_properties->setObjectName(QString::fromUtf8("actionCombine_properties"));
        actionSplit_properties = new QAction(MainWindow);
        actionSplit_properties->setObjectName(QString::fromUtf8("actionSplit_properties"));
        actionRemove_bogus_nodes = new QAction(MainWindow);
        actionRemove_bogus_nodes->setObjectName(QString::fromUtf8("actionRemove_bogus_nodes"));
        actionStripify_all_tri_shapes = new QAction(MainWindow);
        actionStripify_all_tri_shapes->setObjectName(QString::fromUtf8("actionStripify_all_tri_shapes"));
        actionShow_blocks_in_tree = new QAction(MainWindow);
        actionShow_blocks_in_tree->setObjectName(QString::fromUtf8("actionShow_blocks_in_tree"));
        actionShow_blocks_in_list = new QAction(MainWindow);
        actionShow_blocks_in_list->setObjectName(QString::fromUtf8("actionShow_blocks_in_list"));
        actionHide_mismatched = new QAction(MainWindow);
        actionHide_mismatched->setObjectName(QString::fromUtf8("actionHide_mismatched"));
        actionReset_block_details_2 = new QAction(MainWindow);
        actionReset_block_details_2->setObjectName(QString::fromUtf8("actionReset_block_details_2"));
        actionSave_as_2 = new QAction(MainWindow);
        actionSave_as_2->setObjectName(QString::fromUtf8("actionSave_as_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 440, 971, 111));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 301, 431));
        treeView = new QTreeView(groupBox);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(5, 50, 291, 371));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 10, 291, 20));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(320, 0, 661, 41));
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(280, 10, 41, 21));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Resources/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8("Resources/play.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_7->setIcon(icon1);
        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 10, 41, 21));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("Resources/view_walk.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon2);
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 10, 41, 21));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("Resources/view_front.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);
        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(240, 10, 41, 21));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("Resources/view_pers.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon4);
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(200, 10, 41, 21));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("Resources/view_flip.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon5);
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 10, 41, 21));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("Resources/view_user.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon6);
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(80, 10, 41, 21));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("Resources/view_side.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon7);
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 10, 41, 21));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("Resources/view_top.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QString::fromUtf8("Resources/view_top.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon8);
        pushButton->setAutoDefault(false);
        pushButton->setDefault(false);
        pushButton->setFlat(false);
        horizontalSlider = new QSlider(groupBox_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(330, 10, 41, 20));
        horizontalSlider->setOrientation(Qt::Horizontal);
        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(370, 10, 41, 21));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("Resources/loop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon9);
        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(410, 10, 41, 21));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("Resources/switch.png"), QSize(), QIcon::Normal, QIcon::Off);
              pushButton_10->setIcon(icon10);
        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(540, 10, 121, 21));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(450, 10, 81, 22));
        widget = new openglwindow(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(319, 49, 661, 381));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 989, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuImport = new QMenu(menuFile);
        menuImport->setObjectName(QString::fromUtf8("menuImport"));
        menuExport = new QMenu(menuFile);
        menuExport->setObjectName(QString::fromUtf8("menuExport"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuBlock_list = new QMenu(menuView);
        menuBlock_list->setObjectName(QString::fromUtf8("menuBlock_list"));
        menuBlock_details = new QMenu(menuView);
        menuBlock_details->setObjectName(QString::fromUtf8("menuBlock_details"));
        menuRender = new QMenu(menubar);
        menuRender->setObjectName(QString::fromUtf8("menuRender"));
        menuSpells = new QMenu(menubar);
        menuSpells->setObjectName(QString::fromUtf8("menuSpells"));
        menuAnimation = new QMenu(menuSpells);
        menuAnimation->setObjectName(QString::fromUtf8("menuAnimation"));
        menuBlock = new QMenu(menuSpells);
        menuBlock->setObjectName(QString::fromUtf8("menuBlock"));
        menuSanitze = new QMenu(menuSpells);
        menuSanitze->setObjectName(QString::fromUtf8("menuSanitze"));
        menuBatch = new QMenu(menuSpells);
        menuBatch->setObjectName(QString::fromUtf8("menuBatch"));
        menuOptimize = new QMenu(menuSpells);
        menuOptimize->setObjectName(QString::fromUtf8("menuOptimize"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuRender->menuAction());
        menubar->addAction(menuSpells->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(menuExport->menuAction());
        menuFile->addAction(menuImport->menuAction());
        menuFile->addAction(actionAutosanitze_before_save);
        menuFile->addAction(actionNew_Window);
        menuFile->addAction(actionReaload_xml_and_nif);
        menuFile->addAction(actionReload_xml);
        menuFile->addAction(actionXml_checker);
        menuFile->addAction(actionResource_file);
        menuImport->addAction(actionImport_3ds);
        menuExport->addAction(actionSave_as_2);
        menuView->addAction(actionReset_block_details);
        menuView->addAction(actionInteractive_view);
        menuView->addAction(actionBlock_list);
        menuView->addAction(actionBlock_details);
        menuView->addAction(actionFm);
        menuView->addAction(actionInspect);
        menuView->addAction(actionToolbars);
        menuView->addAction(menuBlock_list->menuAction());
        menuView->addAction(menuBlock_details->menuAction());
        menuView->addAction(actionSelect_font);
        menuBlock_list->addAction(actionShow_blocks_in_tree);
        menuBlock_list->addAction(actionShow_blocks_in_list);
        menuBlock_details->addAction(actionHide_mismatched);
        menuBlock_details->addAction(actionReset_block_details_2);
        menuRender->addAction(actionTop);
        menuRender->addAction(actionWalk);
        menuRender->addAction(actionFront);
        menuRender->addAction(actionSide);
        menuRender->addAction(actionUser);
        menuRender->addAction(actionFlip);
        menuRender->addAction(actionPerspective);
        menuRender->addAction(actionSave_user_view);
        menuRender->addAction(actionDraw_axes);
        menuRender->addAction(actionDraw_nodes);
        menuRender->addAction(actionDraw_havok);
        menuRender->addAction(actionDraw_constraints);
        menuRender->addAction(actionDraw_furniture);
        menuRender->addAction(actionShow_hiddens);
        menuRender->addAction(actionSettings);
        menuSpells->addAction(menuAnimation->menuAction());
        menuSpells->addAction(menuBlock->menuAction());
        menuSpells->addAction(menuSanitze->menuAction());
        menuSpells->addAction(menuBatch->menuAction());
        menuSpells->addAction(menuOptimize->menuAction());
        menuAnimation->addAction(actionAttach_F);
        menuAnimation->addAction(actionEdit_string_palettes);
        menuBlock->addAction(actionInsert_by_id);
        menuBlock->addAction(actionRemove_by_id);
        menuBlock->addAction(actionSort);
        menuBlock->addAction(actionSearch);
        menuSanitze->addAction(actionReorder_link_arrays);
        menuSanitze->addAction(actionCollapse_link_arrays);
        menuSanitze->addAction(actionAdjust_texture_sources);
        menuSanitze->addAction(actionReorder_blocks);
        menuSanitze->addAction(actionCheck_links);
        menuBatch->addAction(actionUppdate_all_MOPP_code);
        menuBatch->addAction(actionMake_all_skin_partions);
        menuBatch->addAction(actionUpdate_all_tangent_spaces);
        menuBatch->addAction(actionMulti_apply_mode);
        menuOptimize->addAction(actionCombine_properties);
        menuOptimize->addAction(actionSplit_properties);
        menuOptimize->addAction(actionRemove_bogus_nodes);
        menuOptimize->addAction(actionStripify_all_tri_shapes);
        menuHelp->addAction(actionInteractive_help);
        menuHelp->addAction(actionNifskope_documentation_and_tutorials);
        menuHelp->addAction(actionNifskope_help_and_bug);
        menuHelp->addAction(actionWiki);
        menuHelp->addAction(actionDownloads);
        menuHelp->addAction(actionAbout_qt);
        menuHelp->addAction(actionAbout_nifskope);

        retranslateUi(MainWindow);
		//the buttonslink//
        
		QObject::connect(actionImport_3ds, SIGNAL(triggered(bool)), this, SLOT(importscene()));
		QObject::connect(actionSave_as_2, SIGNAL(triggered(bool)), this, SLOT(exportscene()));

		QObject::connect(actionPerspective, SIGNAL(triggered(bool)), this, SLOT(renderscene()));
        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi
 void retranslateUi(QMainWindow *MainWindow)
    {
               MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Nifskope", 0, QApplication::UnicodeUTF8));
        actionLoad->setText(QApplication::translate("MainWindow", "Load", 0, QApplication::UnicodeUTF8));
        actionAutosanitze_before_save->setText(QApplication::translate("MainWindow", "Autosanitze before save", 0, QApplication::UnicodeUTF8));
        actionNew_Window->setText(QApplication::translate("MainWindow", "New Window", 0, QApplication::UnicodeUTF8));
        actionReaload_xml_and_nif->setText(QApplication::translate("MainWindow", "Reaload xml and nif", 0, QApplication::UnicodeUTF8));
        actionReload_xml->setText(QApplication::translate("MainWindow", "Reload xml", 0, QApplication::UnicodeUTF8));
        actionXml_checker->setText(QApplication::translate("MainWindow", "xml checker", 0, QApplication::UnicodeUTF8));
        actionResource_file->setText(QApplication::translate("MainWindow", "Resource file", 0, QApplication::UnicodeUTF8));
        actionImport_3ds->setText(QApplication::translate("MainWindow", "Load file", 0, QApplication::UnicodeUTF8));
        actionImport_obj->setText(QApplication::translate("MainWindow", "import obj", 0, QApplication::UnicodeUTF8));
        actionExport_3ds->setText(QApplication::translate("MainWindow", "export 3ds", 0, QApplication::UnicodeUTF8));
        actionReset_block_details->setText(QApplication::translate("MainWindow", "Reset block details", 0, QApplication::UnicodeUTF8));
        actionInteractive_view->setText(QApplication::translate("MainWindow", "interactive help", 0, QApplication::UnicodeUTF8));
        actionBlock_list->setText(QApplication::translate("MainWindow", "block list", 0, QApplication::UnicodeUTF8));
        actionBlock_details->setText(QApplication::translate("MainWindow", "block details", 0, QApplication::UnicodeUTF8));
        actionFm->setText(QApplication::translate("MainWindow", "Fm", 0, QApplication::UnicodeUTF8));
        actionInspect->setText(QApplication::translate("MainWindow", "inspect", 0, QApplication::UnicodeUTF8));
        actionToolbars->setText(QApplication::translate("MainWindow", "toolbars", 0, QApplication::UnicodeUTF8));
        actionSelect_font->setText(QApplication::translate("MainWindow", "select font", 0, QApplication::UnicodeUTF8));
        actionTop->setText(QApplication::translate("MainWindow", "top", 0, QApplication::UnicodeUTF8));
        actionWalk->setText(QApplication::translate("MainWindow", "walk", 0, QApplication::UnicodeUTF8));
        actionFront->setText(QApplication::translate("MainWindow", "front", 0, QApplication::UnicodeUTF8));
        actionSide->setText(QApplication::translate("MainWindow", "side", 0, QApplication::UnicodeUTF8));
        actionUser->setText(QApplication::translate("MainWindow", "user", 0, QApplication::UnicodeUTF8));
        actionFlip->setText(QApplication::translate("MainWindow", "flip", 0, QApplication::UnicodeUTF8));
        actionPerspective->setText(QApplication::translate("MainWindow", "perspective", 0, QApplication::UnicodeUTF8));
        actionSave_user_view->setText(QApplication::translate("MainWindow", "save user view", 0, QApplication::UnicodeUTF8));
        actionDraw_axes->setText(QApplication::translate("MainWindow", "draw axes", 0, QApplication::UnicodeUTF8));
        actionDraw_nodes->setText(QApplication::translate("MainWindow", "draw nodes", 0, QApplication::UnicodeUTF8));
        actionDraw_havok->setText(QApplication::translate("MainWindow", "draw havok", 0, QApplication::UnicodeUTF8));
        actionDraw_constraints->setText(QApplication::translate("MainWindow", "draw constraints", 0, QApplication::UnicodeUTF8));
        actionDraw_furniture->setText(QApplication::translate("MainWindow", "draw furniture", 0, QApplication::UnicodeUTF8));
        actionShow_hiddens->setText(QApplication::translate("MainWindow", "show hiddens", 0, QApplication::UnicodeUTF8));
        actionSettings->setText(QApplication::translate("MainWindow", "settings", 0, QApplication::UnicodeUTF8));
        actionInteractive_help->setText(QApplication::translate("MainWindow", "interactive help", 0, QApplication::UnicodeUTF8));
        actionNifskope_documentation_and_tutorials->setText(QApplication::translate("MainWindow", "nifskope documentation and tutorials", 0, QApplication::UnicodeUTF8));
        actionNifskope_help_and_bug->setText(QApplication::translate("MainWindow", "nifskope help and bug", 0, QApplication::UnicodeUTF8));
        actionWiki->setText(QApplication::translate("MainWindow", "wiki", 0, QApplication::UnicodeUTF8));
        actionDownloads->setText(QApplication::translate("MainWindow", "downloads", 0, QApplication::UnicodeUTF8));
        actionAbout_qt->setText(QApplication::translate("MainWindow", "about qt", 0, QApplication::UnicodeUTF8));
        actionAbout_nifskope->setText(QApplication::translate("MainWindow", "about nifskope", 0, QApplication::UnicodeUTF8));
        actionAttach_F->setText(QApplication::translate("MainWindow", "attach F", 0, QApplication::UnicodeUTF8));
        actionEdit_string_palettes->setText(QApplication::translate("MainWindow", "edit string palettes", 0, QApplication::UnicodeUTF8));
        actionInsert_by_id->setText(QApplication::translate("MainWindow", "insert", 0, QApplication::UnicodeUTF8));
        actionRemove_by_id->setText(QApplication::translate("MainWindow", "remove by id", 0, QApplication::UnicodeUTF8));
        actionSort->setText(QApplication::translate("MainWindow", "sort by name", 0, QApplication::UnicodeUTF8));
        actionSearch->setText(QApplication::translate("MainWindow", "search", 0, QApplication::UnicodeUTF8));
        actionReorder_link_arrays->setText(QApplication::translate("MainWindow", "reorder link arrays", 0, QApplication::UnicodeUTF8));
        actionCollapse_link_arrays->setText(QApplication::translate("MainWindow", "collapse link arrays", 0, QApplication::UnicodeUTF8));
        actionAdjust_texture_sources->setText(QApplication::translate("MainWindow", "adjust texture sources", 0, QApplication::UnicodeUTF8));
        actionReorder_blocks->setText(QApplication::translate("MainWindow", "reorder blocks", 0, QApplication::UnicodeUTF8));
        actionCheck_links->setText(QApplication::translate("MainWindow", "check links", 0, QApplication::UnicodeUTF8));
        actionUppdate_all_MOPP_code->setText(QApplication::translate("MainWindow", "uppdate all MOPP code", 0, QApplication::UnicodeUTF8));
        actionMake_all_skin_partions->setText(QApplication::translate("MainWindow", "make all skin partions", 0, QApplication::UnicodeUTF8));
        actionUpdate_all_tangent_spaces->setText(QApplication::translate("MainWindow", "update all tangent spaces", 0, QApplication::UnicodeUTF8));
        actionMulti_apply_mode->setText(QApplication::translate("MainWindow", "multi apply mode", 0, QApplication::UnicodeUTF8));
        actionCombine_properties->setText(QApplication::translate("MainWindow", "combine properties", 0, QApplication::UnicodeUTF8));
        actionSplit_properties->setText(QApplication::translate("MainWindow", "split properties", 0, QApplication::UnicodeUTF8));
        actionRemove_bogus_nodes->setText(QApplication::translate("MainWindow", "remove bogus nodes", 0, QApplication::UnicodeUTF8));
        actionStripify_all_tri_shapes->setText(QApplication::translate("MainWindow", "stripify all tri shapes", 0, QApplication::UnicodeUTF8));
        actionShow_blocks_in_tree->setText(QApplication::translate("MainWindow", "show blocks in tree", 0, QApplication::UnicodeUTF8));
        actionShow_blocks_in_list->setText(QApplication::translate("MainWindow", "show blocks in list", 0, QApplication::UnicodeUTF8));
        actionHide_mismatched->setText(QApplication::translate("MainWindow", "hide version mismatched rows", 0, QApplication::UnicodeUTF8));
        actionReset_block_details_2->setText(QApplication::translate("MainWindow", "reset block details", 0, QApplication::UnicodeUTF8));
        actionSave_as_2->setText(QApplication::translate("MainWindow", "Save as", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        pushButton_7->setText(QString());
        pushButton_6->setText(QString());
        pushButton_2->setText(QString());
        pushButton_8->setText(QString());
        pushButton_5->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QApplication::translate("MainWindow", "reset block details", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "file", 0, QApplication::UnicodeUTF8));
        menuImport->setTitle(QApplication::translate("MainWindow", "Import", 0, QApplication::UnicodeUTF8));
        menuExport->setTitle(QApplication::translate("MainWindow", "Export", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuBlock_list->setTitle(QApplication::translate("MainWindow", "block list", 0, QApplication::UnicodeUTF8));
        menuBlock_details->setTitle(QApplication::translate("MainWindow", "block details", 0, QApplication::UnicodeUTF8));
        menuRender->setTitle(QApplication::translate("MainWindow", "Render", 0, QApplication::UnicodeUTF8));
        menuSpells->setTitle(QApplication::translate("MainWindow", "Spells", 0, QApplication::UnicodeUTF8));
        menuAnimation->setTitle(QApplication::translate("MainWindow", "animation", 0, QApplication::UnicodeUTF8));
        menuBlock->setTitle(QApplication::translate("MainWindow", "block", 0, QApplication::UnicodeUTF8));
        menuSanitze->setTitle(QApplication::translate("MainWindow", "sanitze", 0, QApplication::UnicodeUTF8));
        menuBatch->setTitle(QApplication::translate("MainWindow", "batch", 0, QApplication::UnicodeUTF8));
        menuOptimize->setTitle(QApplication::translate("MainWindow", "optimize", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi
 
};

} // namespace Ui