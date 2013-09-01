#ifndef OPENGLG_H
#define OPENGLG_H
#include <QGLWidget>
#include <QTimer>
#include <assimp\Importer.hpp>
#include <assimp\Exporter.hpp>
#include <assimp\scene.h>
#include <assimp\mesh.h>
#include <assimp\config.h>
#include <assimp\material.h>
#include <assimp\cimport.h>
#include <assimp\postprocess.h>
#include <gl\glut.h>

class openglwindow :public QGLWidget
{
	Q_OBJECT

public:
	explicit openglwindow(QWidget *parent = 0);
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
	void getfile(const char* fname);

private:
QTimer time;

};

#endif