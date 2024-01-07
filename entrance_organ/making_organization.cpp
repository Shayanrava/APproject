#include "making_organization.h"
#include "ui_making_organization.h"

making_organization::making_organization(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::making_organization)
{
    ui->setupUi(this);
}

making_organization::~making_organization()
{
    delete ui;
}
