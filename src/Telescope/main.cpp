#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*TODO: alinhar os espelhos na posicao inicial*/
    MainWindow w;
    w.show();

    return a.exec();
}
