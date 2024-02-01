#include "change_member_task_in_project.h"
#include "ui_change_member_task_in_project.h"

change_member_task_in_project::change_member_task_in_project(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::change_member_task_in_project)
{
    ui->setupUi(this);
}

change_member_task_in_project::~change_member_task_in_project()
{
    delete ui;
}
