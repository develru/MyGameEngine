#ifndef SANDBOX_GLWINDOW_H
#define SANDBOX_GLWINDOW_H

#include <QGLWidget>

class MyGlWindow : public QGLWidget
{
protected:
    void initializeGL();
};

#endif /* SANDBOX_GLWINDOW_H */
