#include "entrance_organ.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    entrance_organ w;
    w.show();
    return a.exec();
}
