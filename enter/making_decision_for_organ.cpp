#include "making_decision_for_organ.h"
#include "ui_making_decision_for_organ.h"
#include"add_project_before.h"
#include"delete_project_before.h"
#include"add_team_before.h""
#include"delete_team_before.h"
#include"admin_before.h"
#include"project_before.h"
#include"key_project_before.h"
#include "add_people.h"
making_decision_for_organ::making_decision_for_organ(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::making_decision_for_organ)
{
    ui->setupUi(this);
}

making_decision_for_organ::~making_decision_for_organ()
{
    delete ui;
}

void making_decision_for_organ::setUserName(QString Name){

    UserName=Name;
}

void making_decision_for_organ::on_add_project_clicked()
{
    add_project_before *apb=new add_project_before();
    apb->show();
}


void making_decision_for_organ::on_delete_project_clicked()
{
    delete_project_before *dpb=new delete_project_before();
    dpb->show();

}


void making_decision_for_organ::on_add_team_clicked()
{
    add_team_before *atb=new add_team_before();
    atb->show();
}


void making_decision_for_organ::on_delete_team_clicked()
{
    delete_team_before *dtb=new delete_team_before();
    dtb->show();
}


void making_decision_for_organ::on_admin_clicked()
{
    admin_before *ab=new admin_before();
    ab->show();
}


void making_decision_for_organ::on_project_clicked()
{
    key_project_before *kpb=new key_project_before();
    kpb->show();
}

