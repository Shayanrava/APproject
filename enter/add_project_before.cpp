#include "add_project_before.h"
#include "ui_add_project_before.h"

add_project_before::add_project_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::add_project_before)
{
    ui->setupUi(this);
}

add_project_before::~add_project_before()
{
    delete ui;
}
