#include "showcomment.h"
#include "ui_showcomment.h"

showcomment::showcomment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::showcomment)
{
    ui->setupUi(this);
}

showcomment::~showcomment()
{
    delete ui;
}
void showcomment::setOrganName(QString Name){

    organName=Name;
}
void showcomment::setprojectName(QString Name){

    projectName=Name;


    QFile f2(projectName+".txt");
    f2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f2.readAll());

    f2.close();

    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask,listcomment;

    listcomment=senderProject[1].split("  ");


    for(int i=0;i<listcomment.length();i+=2){
        if(listcomment[i]==""){
            continue;
        }

        ui->textEdit->append(listcomment[i]+" : "+listcomment[i+1]);
    }



}

void showcomment::setUserName(QString Name){

    UserName=Name;
}

void showcomment::on_pushButton_clicked()
{

    QFile f2(projectName+".txt");
    f2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f2.readAll());

    f2.close();
    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask,listcomment;
    listtask=senderProject[0].split("  ");
    listcomment=senderProject[1].split("  ");
    listadmin=senderProject[2].split("  ");
    listmem=senderProject[3].split("  ");

//   ------------------------------------------------------
    if(ui->lineEdit->text()==""){

        ui->lineEdit->setStyleSheet("background-color:red;");

        QTimer::singleShot(4000,[=](){
           ui->lineEdit->setStyleSheet("background-color:white;");
            ui->lineEdit->setText("");

        });

        return;

    }

    listcomment.push_back(UserName);
    listcomment.push_back(ui->lineEdit->text());

    f2.resize(0);

    f2.open(QIODevice::WriteOnly | QIODevice::Text);

    QTextStream out(&f2);

    for(int i=0;i<listtask.length();i++){
 if(listtask[i]==""){
 continue;
 }
        out<<listtask[i]<<"  ";
    }
    out<<"\n";

    for(int i=0;i<listcomment.length();i++){
        if(listcomment[i]==""){
        continue;
        }
        out<<listcomment[i]<<"  ";
    }
     out<<"\n";

     for(int i=0;i<listadmin.length();i++){
         if(listadmin[i]==""){
         continue;
         }
         out<<listadmin[i]<<"  ";
     }
      out<<"\n";

      for(int i=0;i<listmem.length();i++){
          if(listmem[i]==""){
          continue;
          }
          out<<listmem[i]<<"  ";
      }
       out<<"\n";
       f2.close();

ui->textEdit->append(UserName+" : "+ui->lineEdit->text());
}

