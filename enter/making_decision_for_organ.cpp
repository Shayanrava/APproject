#include "making_decision_for_organ.h"
#include "ui_making_decision_for_organ.h"
#include"add_project_before.h"
#include"delete_project_before.h"
#include"add_team_before.h"
#include"delete_team_before.h"
#include"admin_before.h"
#include"project_before.h"
#include"key_project_before.h"
#include"key_team_before.h"
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

void making_decision_for_organ::setOrganName(QString Name){

    orgaName=Name;


    QString address=orgaName+".txt";


      QFile file(address);

      file.open(QIODevice::ReadOnly | QIODevice::Text);

      QString useRead= file.readAll();

      file.close();



      QStringList listuse,listadmin;

      listuse=useRead.split("\n");

      listadmin=listuse[0].split("  ");


// qDebug()<<listadmin[0]<<" "<<orgaName;

      if(listadmin[0]!=UserName){

          ui->lbl_access->setStyleSheet("background-color:red;");

          ui->label_2->setStyleSheet("background-color:red;");

          ui->label_3->setStyleSheet("background-color:red;");

          ui->label_4->setStyleSheet("background-color:red;");

          ui->label_5->setStyleSheet("background-color:red;");

          ui->lbl_access->setText("you can't access it");

          ui->label_2->setText("you can't access it");

          ui->label_3->setText("you can't access it");

          ui->label_4->setText("you can't access it");

          ui->label_5->setText("you can't access it");

      }
      else{
          ui->lbl_access->setStyleSheet("background-color:green;");

          ui->label_2->setStyleSheet("background-color:green;");

          ui->label_3->setStyleSheet("background-color:green;");

          ui->label_4->setStyleSheet("background-color:green;");

          ui->label_5->setStyleSheet("background-color:green;");

          ui->lbl_access->setText("you can access it");

          ui->label_2->setText("you can access it");

          ui->label_3->setText("you can access it");

          ui->label_4->setText("you can access it");

          ui->label_5->setText("you can access it");
      }

}

void making_decision_for_organ::on_add_project_clicked()
{
    if(ui->lbl_access->text()=="you can't access it"){
        return;
   }
    add_project_before *apb=new add_project_before();
    apb->setOrganName(orgaName);
    apb->setUserName(UserName);
    apb->show();
}


void making_decision_for_organ::on_delete_project_clicked()
{
    if(ui->lbl_access->text()=="you can't access it"){
        return;
    }
    delete_project_before *dpb=new delete_project_before();
    dpb->setOrganName(orgaName);
    dpb->setUserName(UserName);
    dpb->show();

}


void making_decision_for_organ::on_add_team_clicked()
{
    if(ui->lbl_access->text()=="you can't access it"){
        return;
    }
    add_team_before *atb=new add_team_before();
    atb->setOrganName(orgaName);
    atb->setUserName(UserName);
    atb->show();
}


void making_decision_for_organ::on_delete_team_clicked()
{
    if(ui->lbl_access->text()=="you can't access it"){
        return;
    }
    delete_team_before *dtb=new delete_team_before();
    dtb->setOrganName(orgaName);
    dtb->setUserName(UserName);
    dtb->show();
}


void making_decision_for_organ::on_admin_clicked()
{
    admin_before *ab=new admin_before();




    ab->setUserName(UserName);

    ab->setOrganName(orgaName);

    if(ui->lbl_access->text()=="you can't access it"){
        return;
    }

    ab->show();

}


void making_decision_for_organ::on_project_clicked()
{
    key_project_before *kpb=new key_project_before();

        kpb->setOrganName(orgaName);

        kpb->setUserName(UserName);

        kpb->show();
}


void making_decision_for_organ::on_team_clicked()
{
    key_team_before *ktb=new key_team_before();
    ktb->setOrganName(orgaName);
    ktb->setUserName(UserName);
    ktb->show();
}

