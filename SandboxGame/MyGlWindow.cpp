#include <GL/glew.h>
#include <cassert>
#include "MyGlWindow.h"

void MyGlWindow::initializeGL()
{
    GLenum error_code = glewInit();
    assert(error_code == 0);
}
