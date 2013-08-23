#include <nifskope.h>
#include <headers.h>
#include <hkbBehaviorGraph_1.h>


#define private public
#define protected public

#define RETURN_FAIL_IF(COND, MSG) \
	HK_MULTILINE_MACRO_BEGIN \
		if(COND) { HK_ERROR(0x53a6a026, MSG); return 1; } \
	HK_MULTILINE_MACRO_END

const struct aiScene* scene = NULL;
const struct aiMesh* mesh = NULL;
hkbBehaviorGraph* newgraph;

void appenditem(QString itemname)
{
	

}

void Ui::Ui_MainWindow::placemesh(const struct aiMesh* mesh)
{
	
	
}
void Ui::Ui_MainWindow::placemesh(hkMeshBody* hmesh)
{

}

void getcases(QString etc)
{
newgraph=new hkbBehaviorGraph();
	if(etc.contains(".hkx")==true)
	{
		
		hkOstream stream("rigidBody_xml_tagfile.xml");
		hkResult res = hkSerializeUtil::saveTagfile( newgraph, hkbBehaviorGraphClass, stream.getStreamWriter(), HK_NULL, hkSerializeUtil::SAVE_TEXT_FORMAT);
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

void Ui::Ui_MainWindow::importscene(void)
{
	
	QString fileName = QFileDialog::getOpenFileName(this,
	QObject::tr("Import File"), " ", QObject::tr("File formats (*.nif *.kfm *.hkx *.hkt *.3DS *.BLEND *.DAE *.FBX *.IFC-STEP *.ASE *.DXF *.HMP *.MD2 *.MD3 *.MD5 *.MDC *.MDL *.NFF *.PLY *.STL *.X *.OBJ *.SMD *.LWO *.LXO *.LWS *.TER *.AC3D *.MS3D *.COB *.Q3BSP *.XGL *.CSM *.BVH *.B3D *.NDO *.Ogre *.XML *.Q3D)"));
	getcases(fileName);
}

void view_behavior(void)
{

}

void Ui::Ui_MainWindow::exportscene(void)
{
	QString fileName = QFileDialog::getSaveFileName(this,
	QObject::tr("Export File"), " ", QObject::tr("File formats (*.nif *.kfm *.hkx *.hkt *.3DS *.BLEND *.DAE *.FBX *.IFC-STEP *.ASE *.DXF *.HMP *.MD2 *.MD3 *.MD5 *.MDC *.MDL *.NFF *.PLY *.STL *.X *.OBJ *.SMD *.LWO *.LXO *.LWS *.TER *.AC3D *.MS3D *.COB *.Q3BSP *.XGL *.CSM *.BVH *.B3D *.NDO *.Ogre *.XML *.Q3D)"));
	getcases(fileName);
}

int HK_CALL main( int argc,char* argv[])
{
	hkMallocAllocator baseMalloc;
	hkMemoryRouter* memoryRouter = hkMemoryInitUtil::initDefault( &baseMalloc, hkMemorySystem::FrameInfo(1024 * 1024) );
	hkBaseSystem::init( memoryRouter, errorReport );
	QApplication app(argc, argv);
	QMainWindow *widget = new QMainWindow;
	Ui::Ui_MainWindow ui;
	ui.setupUi(widget);
	widget->show();
	return app.exec();
}

