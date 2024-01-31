#include "project_before.h"
#include "ui_project_before.h"

project_before::project_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::project_before)
{
    ui->setupUi(this);
}

project_before::~project_before()
{
    delete ui;
}
