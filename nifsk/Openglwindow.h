#ifndef OPENGLG_H
#define OPENGLG_H
#include <QGLWidget>
#include <QTimer>
#include <assimp\scene.h>
#include <assimp\mesh.h>
#include <gl\glut.h>

class openglwindow :public QGLWidget
{
	Q_OBJECT

public:
	explicit openglwindow(QWidget *parent = 0);
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
	static int loadassfile(const aiScene* tscene);
private:
QTimer time;

};

#endif