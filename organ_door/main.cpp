#include "mainwindow.h"
#include"darvaazeye_saazmaan.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    darvaazeye_saazmaan *ds=new darvaazeye_saazmaan();
    ds->show();
    return a.exec();
}
