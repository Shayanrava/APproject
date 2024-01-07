#include "organization_entrance.h"
#include "ui_organization_entrance.h"

organization_entrance::organization_entrance(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::organization_entrance)
{
    ui->setupUi(this);
}

organization_entrance::~organization_entrance()
{
    delete ui;
}
