#ifndef OPENGLG_H
#define OPENGLG_H
#include <QGLWidget>
#include <QTimer>
#include <glut.h>

class openglwindow :public QGLWidget
{
	Q_OBJECT

public:
	explicit openglwindow(QWidget *parent = 0);
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
private:
QTimer time;

};

#endif