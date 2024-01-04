#include "organization_entrance.h"
#include "ui_organization_entrance.h"
#include"making_decision_for_organ.h"
#include"key_pass_organ.h"
#include"making_organization.h"
organization_entrance::organization_entrance(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::organization_entrance)
{
    ui->setupUi(this);
}

organization_entrance::~organization_entrance()
{
    delete ui;
}

/*void organization_entrance::on_pushButton_2_clicked()
{
    making_decision_for_organ *mdfo=new making_decision_for_organ();
    mdfo->show();
}*/


void organization_entrance::on_pushButton_2_clicked()
{
    key_pass_organ *kpo=new key_pass_organ();
    kpo->show();
}


void organization_entrance::on_pushButton_clicked()
{
    making_organization *mo=new making_organization();
    mo->show();
}


void organization_entrance::on_pushButton_3_clicked()
{

}

