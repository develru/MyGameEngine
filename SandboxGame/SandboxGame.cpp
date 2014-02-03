#include <QApplication>
#include <QWidget>
#include "MyGlWindow.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget widget;
    widget.show();

    return app.exec();
}
