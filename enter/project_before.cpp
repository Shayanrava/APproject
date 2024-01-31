#include "project_before.h"
#include "ui_project_before.h"
#include"change_member_task_in_project.h"
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

void project_before::on_change_task_person_pbn_clicked()
{
    change_member_task_in_project *cmt=new change_member_task_in_project();
    cmt->show();
}


void project_before::on_view_task_person_pbn_clicked()
{

}

