#include "mainwindow.h"
#include"organization_entrance.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    organization_entrance *oe=new organization_entrance();
    oe->show();
    return a.exec();
}
