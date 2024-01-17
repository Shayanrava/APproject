#include "mainwindow.h"
#include"organization_voroodi.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ORGANIZATION_VOROODI_H *ov=new ORGANIZATION_VOROODI_H();
     return a.exec();
}
