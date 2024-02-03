#include "add_project_before.h"
#include "ui_add_project_before.h"

add_project_before::add_project_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::add_project_before)
{
    ui->setupUi(this);
}

add_project_before::~add_project_before()
{
    delete ui;
}



void add_project_before::setUserName(QString Name){

    UserName=Name;
}

void add_project_before::setOrganName(QString Name){

    orgaName=Name;
}

void add_project_before::on_add_project_pbn_clicked()
{
 QString add=  ui->add_project_led->text();

 QFile file(orgaName+".txt");

 file.open(QIODevice::ReadOnly | QIODevice::Text);

 QString organRead( file.readAll());

 file.close();

 QStringList listOrgan,listProject,listeam,listadmin;

 listOrgan=organRead.split("\n");

 listadmin=listOrgan[0].split("  ");

 listProject=listOrgan[1].split("  ");

  listeam=listOrgan[2].split("  ");

 for(int i=0;i<listProject.length();i++){

     if(listProject[i]==add){
         return;
     }

 }

 file.resize(0);

 file.open(QIODevice::WriteOnly | QIODevice::Text);

 QTextStream out(&file);

 for(int i=0;i<listadmin.length();i++){
     if(listadmin[i]==""){
         continue;
     }

     out<<listadmin[i]<<"  ";

 }
 out<<"\n";

 for(int i=0;i<listProject.length();i++){
     if(listProject[i]==""){
         continue;
     }


     out<<listProject[i]<<"  ";

 }
 out<<add<<"  ";
 out<<"\n";

 for(int i=0;i<listeam.length();i++){
     if(listeam[i]==""){
         continue;
     }

     out<<listeam[i]<<"  ";

 }
 file.close();

 QFile f2(add+".txt");

 f2.open(QIODevice::WriteOnly | QIODevice::Text);

 QTextStream out2(&f2);

 out2<<orgaName<<"  "<<add<<"  "<<"null  "<<"null  "<<"0%  "<<"\n\n"<<UserName<<"  "<<"\n";

 f2.close();




 ui->add_project_led->setStyleSheet("background-color:green;");

 QTimer::singleShot(4000,[=](){

     ui->add_project_led->setStyleSheet("background-color:white;");

     ui->add_project_led->setText("");

 });




}

