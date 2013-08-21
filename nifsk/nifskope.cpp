#include "nifskope.h"
#include <headers.h>

#define private public
#define protected public

const struct aiScene* scene = NULL;

void getcases(QString etc)
{
	if(etc.contains(".hkx")==true)
	{
		
	}
	else if(etc.contains(".nif")==true)
	{

	}
	else if(etc.contains(".kfm")==true)
	{

	}
	else if(etc.contains(".obj")==true)
	{

	}
	else if(etc.contains(".3ds")==true)
	{

	}
	else if(etc.contains(".DAE")==true)
	{

	}
	else if(etc.contains(".fbx")==true)
	{

	}
	else if(etc.contains(".ase")==true)
	{

	}
	else if(etc.contains(".blend")==true)
	{

	}
	else if(etc.contains(".x")==true)
	{

	}
	else if(etc.contains(".xml")==true)
	{

	}
	else if(etc.contains(".mdl")==true)
	{

	}
	else
	{

	}
}

void Ui_MainWindow::saveas(void)
{
	QString fileName = QFileDialog::getSaveFileName(this,
	QObject::tr("Import Hkx File"), "/home/jana", QObject::tr("File formats (*.hkx *.nif *.kfm *.3DS *.BLEND *.DAE *.FBX *.IFC-STEP *.ASE *.DXF *.HMP *.MD2 *.MD3 *.MD5 *.MDC *.MDL *.NFF *.PLY *.STL *.X *.OBJ *.SMD *.LWO *.LXO *.LWS *.TER *.AC3D *.MS3D *.COB *.Q3BSP *.XGL *.CSM *.BVH *.B3D *.NDO *.Ogre *.XML *.Q3D)"));
	QMessageBox msgBox;
	std::string test="file has been saved as " + fileName.toStdString();
	msgBox.setText(QString::fromStdString((test)));
	msgBox.exec();
	
}

void Ui_MainWindow::importhkx(void)
{
	QString fileName = QFileDialog::getOpenFileName(this,
	QObject::tr("Import Hkx File"), "/home/jana", QObject::tr("File formats (*.hkx)"));
	getcases(fileName);
	const char* fname=fileName.toStdString().c_str();
	Ui_MainWindow::lineEdit->setText(fileName.toStdString().c_str());
}

 void Ui_MainWindow::importscene(void)
{
	
	QString fileName = QFileDialog::getOpenFileName(this,
	QObject::tr("Import File"), "/home/jana", QObject::tr("File formats (*.3DS *.BLEND *.DAE *.FBX *.IFC-STEP *.ASE *.DXF *.HMP *.MD2 *.MD3 *.MD5 *.MDC *.MDL *.NFF *.PLY *.STL *.X *.OBJ *.SMD *.LWO *.LXO *.LWS *.TER *.AC3D *.MS3D *.COB *.Q3BSP *.XGL *.CSM *.BVH *.B3D *.NDO *.Ogre *.XML *.Q3D)"));
	scene = aiImportFile((fileName.toStdString().c_str()),aiProcessPreset_TargetRealtime_MaxQuality);
	Ui_MainWindow::lineEdit->setText(fileName.toStdString().c_str());
}

int HK_CALL main( int argc,char* argv[])
{
	hkMemoryRouter* memoryRouter = hkMemoryInitUtil::initDefault( hkMallocAllocator::m_defaultMallocAllocator, hkMemorySystem::FrameInfo(1024 * 1024) );
	hkBaseSystem::init( memoryRouter, errorReport );
	QApplication app(argc, argv);
	QMainWindow *widget = new QMainWindow;
	Ui::MainWindow ui;
	ui.setupUi(widget);
	widget->show();
	return app.exec();
}

