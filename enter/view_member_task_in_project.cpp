#include "view_member_task_in_project.h"
#include "ui_view_member_task_in_project.h"

view_member_task_in_project::view_member_task_in_project(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::view_member_task_in_project)
{
    ui->setupUi(this);
}

view_member_task_in_project::~view_member_task_in_project()
{
    delete ui;
}
