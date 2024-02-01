#include "view_member_task_in_team.h"
#include "ui_view_member_task_in_team.h"

view_member_task_in_team::view_member_task_in_team(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::view_member_task_in_team)
{
    ui->setupUi(this);
}

view_member_task_in_team::~view_member_task_in_team()
{
    delete ui;
}
