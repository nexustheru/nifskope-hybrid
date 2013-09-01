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

const char* fnam;
const aiScene* di;

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
}
void openglwindow::getfile(const char* fname)
{
	fnam=fname;
}

void openglwindow::paintGL()
{
	if(fnam== NULL)
    { 
	glRotatef(0.5,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSolidTeapot(0.6);
    }
	else
	{
		glRotatef(0.5,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	di=aiImportFile("hairm.obj",aiProcessPreset_TargetRealtime_MaxQuality);

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
			//glVertex3fv(&amesh->mVertices[index].y);
			//glVertex3fv(&amesh->mVertices[index].z);
		   }
			//vertexes.push_back(amesh->mFaces[is].mIndices[0]);
		   glEnd();
		}

		
	}
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