#include "Openglwindow.h"
#include <qmessagebox.h>
#include <assimp\Importer.hpp>
#include <assimp\Exporter.hpp>
#include <assimp\scene.h>
#include <assimp\mesh.h>
#include <assimp\config.h>
#include <assimp\material.h>
#include <assimp\cimport.h>
#include <assimp\postprocess.h>
#include <nifskope.h>
#include <fbxsdk.h>
#include <fbxsdk\scene\geometry\fbxmesh.h>
#include<nifh.h>

#include <Common/Base/hkBase.h>
#include <Common/Base/Memory/System/Util/hkMemoryInitUtil.h>
#include <Common/Base/Memory/Allocator/Malloc/hkMallocAllocator.h>
#include <Common/Base/System/Io/IStream/hkIStream.h>

#include <Common/Base/Reflection/Registry/hkDefaultClassNameRegistry.h>
#include <Common/Serialize/Util/hkStaticClassNameRegistry.h>
//vs
#include <cstdio>
// Scene
#include <Common/SceneData/Scene/hkxScene.h>
// Compatibility
#include <Common/Compat/hkCompat.h>
// Scene
#include <Common/SceneData/Scene/hkxScene.h>
// Serialize
#include <Common/Serialize/Util/hkRootLevelContainer.h>
#include <Common/Serialize/Util/hkLoader.h>
#include <Common/Serialize/Util/hkSerializeUtil.h>
#include <Common/Serialize/Version/hkVersionPatchManager.h>
#include <Common/Serialize/Data/hkDataObject.h>
#include <Common/Compat/Deprecated/Packfile/hkPackfileReader.h>
#include <Common\Base\System\Io\Reader\hkStreamReader.h>
//#include <Common/Serialize/Util/hkBuiltinTypeRegistry.h>

// Reflection
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkClassMember.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkClassMemberAccessor.h>
// Animation
#include <Animation/Animation/Rig/hkaSkeleton.h>
#include <Animation/Animation/hkaAnimationContainer.h>
#include <Animation/Animation/Mapper/hkaSkeletonMapper.h>
#include <Animation/Animation/Playback/Control/Default/hkaDefaultAnimationControl.h>
#include <Animation/Animation/Playback/hkaAnimatedSkeleton.h>
#include <Animation/Animation/Animation/SplineCompressed/hkaSplineCompressedAnimation.h>
#include <Animation/Animation/Rig/hkaPose.h>
#include <Animation/Ragdoll/Controller/PoweredConstraint/hkaRagdollPoweredConstraintController.h>
#include <Animation/Ragdoll/Controller/RigidBody/hkaRagdollRigidBodyController.h>
#include <Animation/Ragdoll/Utils/hkaRagdollUtils.h>
// Physics
#include <Physics/Dynamics/Entity/hkpRigidBody.h>
#include <Physics/Collide/Shape/Convex/Box/hkpBoxShape.h>
#include <Physics/Utilities/Dynamics/Inertia/hkpInertiaTensorComputer.h>
#include <Physics/Collide/Shape/Convex/Box/hkpBoxShape.h>
#include <Physics/Dynamics/Entity/hkpRigidBody.h>

#include <Common/Base/hkBase.h>
#include <Common/Base/Types/Geometry/hkGeometry.h>
#include <Common/Base/System/Io/IStream/hkIStream.h>
#include <Common/Base/System/hkBaseSystem.h>
#include <Common/Base/System/Error/hkDefaultError.h>
#include <Common/Base/Memory/System/Util/hkMemoryInitUtil.h>
#include <Common/Base/Monitor/hkMonitorStream.h>
#include <Common/Base/Memory/System/hkMemorySystem.h>
#include <Common/Base/Memory/Allocator/Malloc/hkMallocAllocator.h>
#include <Common/Base/Container/String/hkStringBuf.h>
#include <Common/Serialize/Util/hkSerializeUtil.h>
#include <Common\Base\Container\hkContainerAllocators.h>
#include <Common\Base\Container\Array\hkArray.h>
#include <Common\Base\System\Io\IStream\hkIStream.h>
#include <Common\Base\System\Io\OStream\hkOStream.h>

// Dynamics includes
#include <Physics/Collide/hkpCollide.h>	
#include <Common\Internal\ConvexHull\hkGeometryUtility.h>
#include <Physics/Collide/Agent/ConvexAgent/SphereBox/hkpSphereBoxAgent.h>	
#include <Physics/Collide/Shape/Convex/Box/hkpBoxShape.h>					
#include <Physics/Collide/Shape/Convex/Sphere/hkpSphereShape.h>
#include <Physics/Collide/Shape/Convex/hkpConvexShape.h>
#include <Physics/Collide/Dispatch/hkpAgentRegisterUtil.h>
#include <Physics/Collide/Query/CastUtil/hkpWorldRayCastInput.h>			
#include <Physics/Collide/Query/CastUtil/hkpWorldRayCastOutput.h>			
#include <Physics/Dynamics/World/hkpWorld.h>								
#include <Physics/Dynamics/Entity/hkpRigidBody.h>
#include <Physics/Dynamics/Entity/hkpRigidBodyCinfo.h>
#include <Physics/Utilities/Dynamics/Inertia/hkpInertiaTensorComputer.h>
#include <Common\Serialize\Util\hkLoader.h>
#include <Common\Serialize\Util\hkRootLevelContainer.h>
#include <Physics\Utilities\Serialize\hkpPhysicsData.h> 
#include <common/base/Container/hkContainerAllocators.h> 
#include <Animation/Ragdoll/hkaRagdoll.h>
#include <Animation/Ragdoll/Instance/hkaRagdollInstance.h>
#include <Physics/Dynamics/Constraint/hkpConstraintInstance.h>
#include <Common\GeometryUtilities\hkGeometryUtilities.h>
#include <Common\GeometryUtilities\Mesh\hkMeshBody.h>
#include <Common\SceneData\hkSceneData.h>
#include <Common\SceneData\Mesh\hkxMesh.h>
#include <Common\SceneData\Scene\hkxScene.h>
#include <Common\SceneData\Graph\hkxNode.h>
//animations skeletons

#include <Animation\Animation\hkaAnimationContainer.h>
#include <Animation\Animation\hkaAnimation.h>
#include <Animation\Animation\Mapper\hkaSkeletonMapper.h>
#include <Animation\Animation\Mapper\hkaSkeletonMapperUtils.h>
#include <Animation\Animation\Rig\hkaSkeletonUtils.h>
#include <Animation\Animation\Rig\hkaSkeleton.h>
#include <Animation\Animation\Rig\hkaBone.h>
#include <iostream> 
#include <fstream>
#include <string>
#include <glmesh.h>
const char* fnam;
const aiScene* di;
Niflib::NiTriShapeRef shape;
Niflib::NiTriBasedGeomDataRef ndata;
GLvoid *font_style = GLUT_BITMAP_TIMES_ROMAN_10;
Niflib::vector<Niflib::Vector3> shapevertice;
Niflib::vector<Niflib::Triangle> shapetriangles;

openglwindow::openglwindow(QWidget *parent) :
    QGLWidget(parent)
{
    connect(&time,SIGNAL(timeout()),this,SLOT(updateGL()));
    time.start(16);
}
void openglwindow::initializeGL()
{
	glClearColor(0.2,0.2,0.2,1);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_SMOOTH);
	glEnable(GL_NORMALIZE);
	glEnable(GL_SHININESS);

}
void openglwindow::getfile(const char* fname)
{
	di=aiImportFile(fname,aiProcessPreset_TargetRealtime_MaxQuality);
}
void openglwindow::getfilen(const char* fname)
{

	Niflib::NiObjectRef niparentobject;
		niparentobject=Niflib::ReadNifTree(fname);
		Niflib::NiNodeRef niparentnode;
        niparentnode=Niflib::DynamicCast<Niflib::NiNode>(niparentobject);
		vector<Niflib::NiAVObjectRef> niavparent=niparentnode->GetChildren();
		const aiMesh* m;
		for(int i=0 ; i< niavparent.size();i++)
		{
			if (niavparent[i]->GetType().GetTypeName()=="NiTriShape")
            {
				shape=Niflib::DynamicCast<Niflib::NiTriShape>(niavparent[i]);
				ndata= Niflib::DynamicCast<Niflib::NiTriBasedGeomData>(shape->GetData());
				gl::GLWriter wr;
				
		    }
		}
}
void openglwindow::getfileh(const char* fname)
{
	hkIstream stream(fname);
        hkResource* resource = hkSerializeUtil::load(stream.getStreamReader());
		hkRootLevelContainer* hkroot= resource->getContents<hkRootLevelContainer>();
}

void openglwindow::paintGL()
{
    glRotatef(0.5,1,1,1);
	if(ndata > NULL)
	{
        
		glRotatef(0.5,1,1,1);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glEnableClientState(GL_VERTEX_ARRAY);
        glVertexPointer(3, GL_FLOAT, 0, &ndata->GetVertices());
		GLenum face_mode;
		switch(ndata->GetVertices().size())
            {
              case 1: face_mode = GL_POINTS; break;
              case 2: face_mode = GL_LINES; break;
              case 3: face_mode = GL_TRIANGLES; break;
              default: face_mode = GL_POLYGON; break;
            }
           glBegin(GL_TRIANGLES);
			for (unsigned int i=0; i < ndata->GetVertices().size(); i++)
			{
            glArrayElement(i);
            }
			
		glEnd();
		
    glDisableClientState(GL_VERTEX_ARRAY);
    glFlush();
	}
	else if(di > NULL)
	{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	for (unsigned int i=0 ;i < di->mNumMeshes; i++)
	{
		const aiMesh* amesh=di->mMeshes[i];

		for (unsigned int is=0;is < amesh->mNumFaces ; is++)
		{

			const aiFace* face = &amesh->mFaces[is];
			GLenum face_mode;
            switch(face->mNumIndices)
            {
              case 1: face_mode = GL_POINTS; break;
              case 2: face_mode = GL_LINES; break;
              case 3: face_mode = GL_TRIANGLES; break;
              default: face_mode = GL_POLYGON; break;
            }
           glBegin(face_mode);
		   for(unsigned int ik = 0; ik < face->mNumIndices; ik++) 
           {
           int index = face->mIndices[ik];
            glVertex3fv(&amesh->mVertices[index].x);
			glNormal3fv(&amesh->mNormals[index].x);
		   }
		   glEnd();
		}

	  }
	}
	else
    { 
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSolidTeapot(0.6);
    }
 }

void openglwindow::resizeGL(int w, int h)
{
  glViewport(0,0,w,h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(45,(float)w/h,0.01,100.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluLookAt(0,0,5,0,0,0,0,1,0);
}