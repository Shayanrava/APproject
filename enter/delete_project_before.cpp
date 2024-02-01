#include "delete_project_before.h"
#include "ui_delete_project_before.h"

delete_project_before::delete_project_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::delete_project_before)
{
    ui->setupUi(this);
}

delete_project_before::~delete_project_before()
{
    delete ui;
}
