#include "making_decision_for_organ.h"
#include "ui_making_decision_for_organ.h"
#include"add_project_before.h"
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

