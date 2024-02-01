#include "change_member_task_in_team.h"
#include "ui_change_member_task_in_team.h"

change_member_task_in_team::change_member_task_in_team(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::change_member_task_in_team)
{
    ui->setupUi(this);
}

change_member_task_in_team::~change_member_task_in_team()
{
    delete ui;
}
