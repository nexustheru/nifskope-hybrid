#include <nifskope.h>
#include <headers.h>

#define private public
#define protected public

#define RETURN_FAIL_IF(COND, MSG) \
	HK_MULTILINE_MACRO_BEGIN \
		if(COND) { HK_ERROR(0x53a6a026, MSG); return 1; } \
	HK_MULTILINE_MACRO_END

const struct aiScene* scene = NULL;

void appenditem(QString itemname)
{
	

}

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
	
	else
	{
      scene = aiImportFile((etc.toStdString().c_str()),aiProcessPreset_TargetRealtime_MaxQuality);

	}
}

void Ui_MainWindow::importscene(void)
{
	
	QString fileName = QFileDialog::getOpenFileName(this,
	QObject::tr("Import File"), " ", QObject::tr("File formats (*.nif *.kfm *.hkx *.hkt *.3DS *.BLEND *.DAE *.FBX *.IFC-STEP *.ASE *.DXF *.HMP *.MD2 *.MD3 *.MD5 *.MDC *.MDL *.NFF *.PLY *.STL *.X *.OBJ *.SMD *.LWO *.LXO *.LWS *.TER *.AC3D *.MS3D *.COB *.Q3BSP *.XGL *.CSM *.BVH *.B3D *.NDO *.Ogre *.XML *.Q3D)"));
	
	
}

void Ui_MainWindow::exportscene(void)
{
	QString fileName = QFileDialog::getSaveFileName(this,
	QObject::tr("Export File"), " ", QObject::tr("File formats (*.nif *.kfm *.hkx *.hkt *.3DS *.BLEND *.DAE *.FBX *.IFC-STEP *.ASE *.DXF *.HMP *.MD2 *.MD3 *.MD5 *.MDC *.MDL *.NFF *.PLY *.STL *.X *.OBJ *.SMD *.LWO *.LXO *.LWS *.TER *.AC3D *.MS3D *.COB *.Q3BSP *.XGL *.CSM *.BVH *.B3D *.NDO *.Ogre *.XML *.Q3D)"));
}

static void HK_CALL errorReport(const char* msg, void* userContext)
{
	using namespace std;
	 QMessageBox msgBox;
	 msgBox.setText(QString::fromUtf8(msg));
	 msgBox.exec();
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

