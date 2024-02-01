#include "team_before.h"
#include "ui_team_before.h"
#include"change_member_task_in_team.h"
#include"view_member_task_in_team.h"
team_before::team_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::team_before)
{
    ui->setupUi(this);
}

team_before::~team_before()
{
    delete ui;
}

void team_before::on_change_member_task_pbn_clicked()
{
    change_member_task_in_team *cmtt=new change_member_task_in_team();
    cmtt->show();
}


void team_before::on_view_member_task_pbn_clicked()
{
    view_member_task_in_team *vtm=new view_member_task_in_team();
    vtm->show();
}

