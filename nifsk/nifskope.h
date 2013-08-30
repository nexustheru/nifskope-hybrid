#include <assimp\mesh.h>
#include <fbxsdk.h>
#include <Common\GeometryUtilities\hkGeometryUtilities.h>
#include <niflib.h>
#include <obj\NiTriShape.h>
#include <QGLWidget>
#include <gl\glut.h>

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSlider>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include "Openglwindow.h"
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
	QAction *actionImport_file;
	QAction *actionExport_file;
	QAction *actionClose;
	QWidget *centralWidget;
	openglwindow *widget;
	QTabWidget *tabWidget;
	QWidget *tab;
	QWidget *tab_2;
	QWidget *tab_3;
	QWidget *tab_4;
	QWidget *tab_5;
	QWidget *tab_6;
	QWidget *tab_7;
	QWidget *tab_8;
	QSlider *verticalSlider;
	QSlider *horizontalSlider;
	QSlider *verticalSlider_2;
	QLabel *label;
	QMenuBar *menuBar;
	QMenu *menuFile;
	QMenu *menuOptions;
	QMenu *menuRender;
	QMenu *menuInspector;
	QMenu *menuAbout;
	QMenu *menuUpdate;
	char* thefilename;

	//button events
	public Q_SLOTS:
    void importscene(void);
	void exportscene(void);
	void placemesh(const aiMesh* mesh);
	void placemesh(hkMeshBody* hmesh);
	void placemesh(FbxMesh* fmesh);
	void placemesh(Niflib::NiTriShapeRef nimesh);
	void renderscene(void);

	
	
	//
	//functions

   //
	void setupUi(QMainWindow *MainWindow)
	{
		if (MainWindow->objectName().isEmpty())
			MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
		MainWindow->setWindowModality(Qt::ApplicationModal);
		MainWindow->resize(1170, 664);
		QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
		sizePolicy.setHorizontalStretch(0);
		sizePolicy.setVerticalStretch(0);
		sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
		MainWindow->setSizePolicy(sizePolicy);
		actionImport_file = new QAction(MainWindow);
		actionImport_file->setObjectName(QString::fromUtf8("actionImport_file"));
		actionExport_file = new QAction(MainWindow);
		actionExport_file->setObjectName(QString::fromUtf8("actionExport_file"));
		actionClose = new QAction(MainWindow);
		actionClose->setObjectName(QString::fromUtf8("actionClose"));
		centralWidget = new QWidget(MainWindow);
		centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
		sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
		centralWidget->setSizePolicy(sizePolicy);
		widget = new openglwindow(centralWidget);
		widget->setObjectName(QString::fromUtf8("widget"));
		widget->setGeometry(QRect(450, 10, 681, 581));
		widget->setAutoFillBackground(false);
		tabWidget = new QTabWidget(centralWidget);
		tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
		tabWidget->setGeometry(QRect(6, 9, 401, 621));
		tab = new QWidget();
		tab->setObjectName(QString::fromUtf8("tab"));
		tabWidget->addTab(tab, QString());
		tab_2 = new QWidget();
		tab_2->setObjectName(QString::fromUtf8("tab_2"));
		tabWidget->addTab(tab_2, QString());
		tab_3 = new QWidget();
		tab_3->setObjectName(QString::fromUtf8("tab_3"));
		tabWidget->addTab(tab_3, QString());
		tab_4 = new QWidget();
		tab_4->setObjectName(QString::fromUtf8("tab_4"));
		tabWidget->addTab(tab_4, QString());
		tab_5 = new QWidget();
		tab_5->setObjectName(QString::fromUtf8("tab_5"));
		tabWidget->addTab(tab_5, QString());
		tab_6 = new QWidget();
		tab_6->setObjectName(QString::fromUtf8("tab_6"));
		tabWidget->addTab(tab_6, QString());
		tab_7 = new QWidget();
		tab_7->setObjectName(QString::fromUtf8("tab_7"));
		tabWidget->addTab(tab_7, QString());
		tab_8 = new QWidget();
		tab_8->setObjectName(QString::fromUtf8("tab_8"));
		tabWidget->addTab(tab_8, QString());
		verticalSlider = new QSlider(centralWidget);
		verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
		verticalSlider->setGeometry(QRect(420, 10, 21, 581));
		verticalSlider->setOrientation(Qt::Vertical);
		horizontalSlider = new QSlider(centralWidget);
		horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
		horizontalSlider->setGeometry(QRect(450, 610, 681, 20));
		horizontalSlider->setOrientation(Qt::Horizontal);
		verticalSlider_2 = new QSlider(centralWidget);
		verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
		verticalSlider_2->setGeometry(QRect(1140, 10, 21, 581));
		verticalSlider_2->setOrientation(Qt::Vertical);
		label = new QLabel(centralWidget);
		label->setObjectName(QString::fromUtf8("label"));
		label->setGeometry(QRect(730, 600, 131, 16));
		MainWindow->setCentralWidget(centralWidget);
		menuBar = new QMenuBar(MainWindow);
		menuBar->setObjectName(QString::fromUtf8("menuBar"));
		menuBar->setGeometry(QRect(0, 0, 1170, 21));
		menuFile = new QMenu(menuBar);
		menuFile->setObjectName(QString::fromUtf8("menuFile"));
		menuOptions = new QMenu(menuBar);
		menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
		menuRender = new QMenu(menuBar);
		menuRender->setObjectName(QString::fromUtf8("menuRender"));
		menuInspector = new QMenu(menuBar);
		menuInspector->setObjectName(QString::fromUtf8("menuInspector"));
		menuAbout = new QMenu(menuBar);
		menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
		menuUpdate = new QMenu(menuBar);
		menuUpdate->setObjectName(QString::fromUtf8("menuUpdate"));
		MainWindow->setMenuBar(menuBar);

		menuBar->addAction(menuFile->menuAction());
		menuBar->addAction(menuOptions->menuAction());
		menuBar->addAction(menuRender->menuAction());
		menuBar->addAction(menuInspector->menuAction());
		menuBar->addAction(menuAbout->menuAction());
		menuBar->addAction(menuUpdate->menuAction());
		menuFile->addAction(actionImport_file);
		menuFile->addAction(actionExport_file);
		menuFile->addAction(actionClose);

		retranslateUi(MainWindow);

		tabWidget->setCurrentIndex(7);
        
		QObject::connect(actionImport_file, SIGNAL(triggered(bool)), this, SLOT(importscene()));
		QObject::connect(actionExport_file, SIGNAL(triggered(bool)), this, SLOT(exportscene()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi
	void retranslateUi(QMainWindow *MainWindow)
	{
		MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
		actionImport_file->setText(QApplication::translate("MainWindow", "Import file", 0, QApplication::UnicodeUTF8));
		actionExport_file->setText(QApplication::translate("MainWindow", "Export file", 0, QApplication::UnicodeUTF8));
		actionClose->setText(QApplication::translate("MainWindow", "Close", 0, QApplication::UnicodeUTF8));
		tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Mesh", 0, QApplication::UnicodeUTF8));
		tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Havok", 0, QApplication::UnicodeUTF8));
		tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Skeleton", 0, QApplication::UnicodeUTF8));
		tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Animation", 0, QApplication::UnicodeUTF8));
		tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Material", 0, QApplication::UnicodeUTF8));
		tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Particles", 0, QApplication::UnicodeUTF8));
		tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "Header", 0, QApplication::UnicodeUTF8));
		tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "Treeview", 0, QApplication::UnicodeUTF8));
		label->setText(QApplication::translate("MainWindow", "Left|Right|Up|Down|Zoom", 0, QApplication::UnicodeUTF8));
		menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
		menuOptions->setTitle(QApplication::translate("MainWindow", "Options", 0, QApplication::UnicodeUTF8));
		menuRender->setTitle(QApplication::translate("MainWindow", "Render", 0, QApplication::UnicodeUTF8));
		menuInspector->setTitle(QApplication::translate("MainWindow", "Inspector", 0, QApplication::UnicodeUTF8));
		menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
		menuUpdate->setTitle(QApplication::translate("MainWindow", "Update", 0, QApplication::UnicodeUTF8));
	} // retranslateUi
 
};

} // namespace Ui