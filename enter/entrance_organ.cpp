#include "entrance_organ.h"
#include "ui_entrance_organ.h"
#include"making_organization.h"
#include"removing_organization.h"
#include"filtering_organizations.h"
#include"key_pass_organ.h"
entrance_organ::entrance_organ(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::entrance_organ)
{
    ui->setupUi(this);


}

entrance_organ::~entrance_organ()
{
    delete ui;
}

void entrance_organ::setName(QString Name)
{
userName=Name;
ui->label->setText(userName);
}

void entrance_organ::on_pbn_making_clicked()
{
    making_organization *mo=new making_organization();

    mo->setUserName(userName);
    mo->show();
}


void entrance_organ::on_pbn_removing_clicked()
{
    removing_organization *ro=new removing_organization();
    ro->setUserName(userName);
    ro->show();
}


void entrance_organ::on_pbn_filter_clicked()
{
    filtering_organizations *fo=new filtering_organizations();
    fo->show();
}


void entrance_organ::on_pbn_login_clicked()
{
    key_pass_organ *kpo=new key_pass_organ();

    kpo->setUserName(userName);

    kpo->show();
}

