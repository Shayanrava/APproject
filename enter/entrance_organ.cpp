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


void entrance_organ::on_pbn_view_clicked()
{
 QFile f(userName+".txt");

 f.open(QIODevice::ReadOnly | QIODevice::Text);

 QString useRead= f.readAll();

 f.close();


 QStringList listuse;

 listuse=useRead.split("  ");


 f.open(QIODevice::WriteOnly | QIODevice::Text);

 f.resize(0);

 QTextStream out(&f);

 for(int i=0;i<listuse.length();i++){
     if(listuse[i]==""){
         continue;
     }

    out<<listuse[i]<<"  ";

 }

 f.close();

 f.open(QIODevice::ReadOnly | QIODevice::Text);

 QString useRead2= f.readAll();

 f.close();


 QStringList listuse2;

 listuse2=useRead2.split("  ");





for(int i=0;i<listuse2.length();i+=5){

//    if(listuse2[i]==""){
//        i-=4;
//        continue;
//    }

ui->textEdit->append(listuse2[i]);

}


}

