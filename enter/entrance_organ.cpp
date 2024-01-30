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

 QFile f2("enter.txt");
    f2.open(QIODevice::ReadOnly | QIODevice::Text);
 QString useread( f2.readAll());
 f2.close();

 QStringList n=useread.split(" ");

    ui->label->setText(n[0]);


}

entrance_organ::~entrance_organ()
{
    delete ui;
}

void entrance_organ::on_pbn_making_clicked()
{
    making_organization *mo=new making_organization();
    mo->show();
}


void entrance_organ::on_pbn_removing_clicked()
{
    removing_organization *ro=new removing_organization();
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
    kpo->show();
}

