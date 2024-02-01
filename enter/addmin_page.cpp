#include "addmin_page.h"
#include "ui_addmin_page.h"

addmin_page::addmin_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addmin_page)
{
    ui->setupUi(this);
}

addmin_page::~addmin_page()
{
    delete ui;
}
