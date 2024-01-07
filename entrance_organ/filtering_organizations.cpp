#include "filtering_organizations.h"
#include "ui_filtering_organizations.h"

filtering_organizations::filtering_organizations(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::filtering_organizations)
{
    ui->setupUi(this);
}

filtering_organizations::~filtering_organizations()
{
    delete ui;
}
