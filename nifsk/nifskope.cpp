#include <nifskope.h>
#include <headers.h>
#include <hkbBehaviorGraph_1.h>
#define private public
#define protected public
using namespace Niflib;
using namespace std;
using namespace Assimp;

#define RETURN_FAIL_IF(COND, MSG) \
	HK_MULTILINE_MACRO_BEGIN \
		if(COND) { HK_ERROR(0x53a6a026, MSG); return 1; } \
	HK_MULTILINE_MACRO_END

//globals/////////////////////////////////////////////////////////////////////////////////////////////////
const aiScene* scene;
const aiMesh* mesh;
const aiNode *in;
///
NifInfo nifInfo(VER_20_2_0_7, 12, 83);
NiNodeRef niparentnode;
NiObjectRef niparentobject;
NiAVObjectRef niparentav;
///
hkRootLevelContainer* hkroot;
hkbBehaviorGraph* newgraph;
//globals/////////////////////////////////////////////////////////////////////////////////////////////////
void appenditem(QString itemname)
{
	

}

void Ui::Ui_MainWindow::placemesh(const aiMesh* mesh)
{
	
	
}
void Ui::Ui_MainWindow::placemesh(hkMeshBody* hmesh)
{

}
void Ui::Ui_MainWindow::placemesh(NiTriShapeRef nimesh)
{

}

void view_behavior(void)
{

}

void getcasesout(QString etc)
{
newgraph=new hkbBehaviorGraph();
	if(etc.contains(".hkx",Qt::CaseSensitive)==true)
	{
		hkOstream stream("rigidBody_xml_tagfile.xml");
		hkResult res = hkSerializeUtil::saveTagfile( newgraph, hkbBehaviorGraphClass, stream.getStreamWriter(), HK_NULL, hkSerializeUtil::SAVE_TEXT_FORMAT);
	}
	else if(etc.contains(".nif",Qt::CaseSensitive)==true)
	{
		niparentnode=new NiNode();
		niparentnode->SetName("root");
        WriteNifTree(etc.toStdString(),niparentnode,nifInfo);
		
	}
	else if(etc.contains(".kfm",Qt::CaseSensitive)==true)
	{
		niparentnode=new NiNode();
		niparentnode->SetName("root");
        WriteNifTree(etc.toStdString(),niparentnode,nifInfo);
	}
	
	else if(etc.contains(".dae",Qt::CaseSensitive)==true)
	{
		const aiScene* scene1;
      aiExportScene(scene1,"dae","hihh",0);
	}
	else if(etc.contains(".obj",Qt::CaseSensitive)==true)
	{
      const aiScene* scene1;
      aiExportScene(scene1,"obj","hihh",0);
	}
	else if(etc.contains(".fbx",Qt::CaseSensitive)==true)
	{
      //
	}
	
	else
	{
	  
	        QMessageBox* mes;
			mes->setText("format isnt available for export");
			mes->exec();
	}
}

void getcasesin(QString etc)
{
try
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
catch(std::exception* ers)
{
	QMessageBox* mes;
			mes->setText(ers->what());
			mes->exec();
}
}

void Ui::Ui_MainWindow::importscene(void)
{
	
	QString fileName = QFileDialog::getOpenFileName(this,
	QObject::tr("Import File"), " ", QObject::tr("File formats (*.nif *.kfm *.hkx *.hkt *.3DS *.BLEND *.DAE *.FBX *.IFC-STEP *.ASE *.DXF *.HMP *.MD2 *.MD3 *.MD5 *.MDC *.MDL *.NFF *.PLY *.STL *.X *.OBJ *.SMD *.LWO *.LXO *.LWS *.TER *.AC3D *.MS3D *.COB *.Q3BSP *.XGL *.CSM *.BVH *.B3D *.NDO *.Ogre *.XML *.Q3D)"));
	getcasesin(fileName);
}

void Ui::Ui_MainWindow::exportscene(void)
{
	QString fileName = QFileDialog::getSaveFileName(this,
	QObject::tr("Export File"),"",QObject::tr("File formats (*.nif *.kfm *.hkx *.hkt *.3DS *.DAE *.FBX *.ASE *.MDL *.X *.OBJ *.SMD *.BVH *.Ogre *.XML )"));
	getcasesout(fileName);
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

