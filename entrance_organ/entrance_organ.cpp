#include "entrance_organ.h"
#include "ui_entrance_organ.h"

entrance_organ::entrance_organ(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::entrance_organ)
{
    ui->setupUi(this);
}

entrance_organ::~entrance_organ()
{
    delete ui;
}
