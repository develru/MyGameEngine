#include <QApplication>
#include <QWidget>
#include "MyGlWindow.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    MyGlWindow myGlWindow;
    myGlWindow.show();

    return app.exec();
}
