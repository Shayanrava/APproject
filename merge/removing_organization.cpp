#include "removing_organization.h"
#include "ui_removing_organization.h"

removing_organization::removing_organization(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::removing_organization)
{
    ui->setupUi(this);
}

removing_organization::~removing_organization()
{
    delete ui;
}
