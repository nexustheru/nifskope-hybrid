#include <nifskope.h>
#include <headers.h>
#include <hkbBehaviorGraph_1.h>
#define private public
#define protected public
using namespace Niflib;
using namespace std;
using namespace Assimp;
using namespace fbxsdk_2014_1;

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
BSFadeNodeRef niparentfadenode;
NiObjectRef niparentobject;
NiAVObjectRef niparentav;
///
hkRootLevelContainer* hkroot;
hkbBehaviorGraph* newgraph;
FbxManager* manager;
FbxMesh* fmesh;
FbxNode* fnode;
//globals/////////////////////////////////////////////////////////////////////////////////////////////////
void Ui::Ui_MainWindow::zio(void)
{
	int res=Ui::Ui_MainWindow::horizontalSlider->value();
	
	gluLookAt(static_cast<double>(res),0,5,0,0,0,0,1,0);
}
void getcasesout(QString etc)
{
hkroot=new hkRootLevelContainer();
	if(etc.contains(".xml",Qt::CaseSensitive)==true)
	{
		hkOstream stream(etc.toStdString().c_str());
		hkSerializeUtil::saveTagfile( hkroot, hkRootLevelContainerClass, stream.getStreamWriter(), HK_NULL, hkSerializeUtil::SAVE_TEXT_FORMAT);
	}
	if(etc.contains(".hkx",Qt::CaseSensitive)==true)
	{
        hkPackfileWriter::Options options;
		hkOstream stream(etc.toStdString().c_str());
        hkSerializeUtil::savePackfile( hkroot, hkRootLevelContainerClass, hkOstream(stream).getStreamWriter(), options );
		//hkResult res = hkSerializeUtil::save(hkroot, stream.getStreamWriter(),hkSerializeUtil::SAVE_WRITE_ATTRIBUTES);
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
	else if(etc.contains(".FBX",Qt::CaseSensitive)==true)
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
	openglwindow glp;
	hkSerializeUtil::ErrorDetails* ers;
	if(etc.contains(".hkx")==true)
	{
		QMessageBox::information(0,"hkx import","importing hkx");
		 glp.getfileh(etc.toStdString().c_str());
		
	}
	
	else if(etc.contains(".nif")==true)
	{
		QMessageBox::information(0,"nif import","importing nif");
		glp.getfilen(etc.toStdString().c_str());
        
	}
	else
	{
	  QMessageBox::information(0,"assimp import","importing assimp formats");
	  glp.getfile(etc.toStdString().c_str());
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
	QObject::tr("Export File")," ",QObject::tr("File formats (*.nif *.kfm *.hkx *.hkt *.3DS *.DAE *.FBX *.ASE *.MDL *.X *.OBJ *.SMD *.BVH *.Ogre *.XML )"));
	getcasesout(fileName);
}
int HK_CALL main( int argc,char* argv[])
{
	hkMallocAllocator baseMalloc;
	hkMemoryRouter* memoryRouter = hkMemoryInitUtil::initDefault( &baseMalloc, hkMemorySystem::FrameInfo(1024 * 1024) );
	hkBaseSystem::init( memoryRouter, errorReport );
	glutInit(&argc,argv);
	QApplication app(argc, argv);
	QMainWindow *widget = new QMainWindow;
	Ui::Ui_MainWindow ui;
	ui.setupUi(widget);
	widget->show();
	return app.exec();
}