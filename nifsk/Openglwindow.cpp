#include "Openglwindow.h"
#include <assimp\scene.h>
#include <assimp\mesh.h>

openglwindow::openglwindow(QWidget *parent) :
    QGLWidget(parent)
{
    connect(&time,SIGNAL(timeout()),this,SLOT(updateGL()));
    time.start(16);
}


struct vertarr
{
	GLfloat x,y,z;
};


struct faces
{
	GLfloat x,y,z;
};

std::vector<vertarr> vertice;
std::vector<faces> face;

void openglwindow::initializeGL()
{
	glClearColor(0.2,0.2,0.2,1);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
}

int openglwindow::loadassfile(const aiScene* tscene)
{
	for (int i=0 ;i < tscene->mNumMeshes; i++)
	{
		const aiMesh* amesh=tscene->mMeshes[i];
		for (int is=0;is < amesh->mNumVertices ; is++)
		{
			vertarr vert;
			vert.x=amesh->mVertices[is].x;
			vert.y=amesh->mVertices[is].y;
			vert.z=amesh->mVertices[is].z;
			vertice.push_back(vert);
		}
		for (int ik=0;ik < amesh->mNumFaces ; ik++)
		{
			aiFace f=amesh->mFaces[ik];
			faces newface;
			newface.x=f.mIndices[0];
			newface.x=f.mIndices[1];
			newface.x=f.mIndices[2];
			face.push_back(newface);
		}

		
	}
	return 1;
}


void openglwindow::paintGL()
{
glRotatef(0.5,1,1,1);
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
if(vertice.size() > 0)
{
	for (int i=0 ;i < vertice.size() ;i++)
	{
	glLoadIdentity();//load identity matrix
    glColor3f(0.0f,0.0f,1.0f); //blue color
    glPointSize(10.0f);//set point size to 10 pixels
	glBegin(GL_POINTS);
	glVertex3f(vertice[i].x,vertice[i].y,vertice[i].z);
	glEnd();
	}
//glutSolidCube(0.6);
}
else
{
//gluPerspective(45.0f, (GLfloat)100/(GLfloat)67, 0.1f, 100.0f);
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