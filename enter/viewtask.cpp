#include "viewtask.h"
#include "ui_viewtask.h"
#include"showcomment.h"

viewTask::viewTask(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::viewTask)
{
    ui->setupUi(this);
}

viewTask::~viewTask()
{
    delete ui;
}
void viewTask::setUserName(QString Name){

    UserName=Name;
}

void viewTask::on_pushButton_2_clicked()
{


}


void viewTask::on_pushButton_clicked()
{

    ui->textEdit->clear();
    ui->textEdit_2->clear();
    QFile f(UserName+".txt");

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





   for(int i=4;i<listuse2.length();i+=5){

       if(listuse2[i]=="1"){

           ui->textEdit_2->append("organ: "+listuse2[i-4]);
           ui->textEdit_2->append("project: "+listuse2[i-3]);
           ui->textEdit_2->append("task: "+listuse2[i-2]);
           ui->textEdit_2->append("time: "+listuse2[i-1]);
           ui->textEdit_2->append("\n");



       }

       if(listuse2[i]=="0"){

           ui->textEdit->append("organ: "+listuse2[i-4]);
           ui->textEdit->append("project: "+listuse2[i-3]);
           ui->textEdit->append("task: "+listuse2[i-2]);
           ui->textEdit->append("time: "+listuse2[i-1]);
            ui->textEdit->append("\n");


       }


   }
}


void viewTask::on_pushButton_3_clicked()
{
    QString organ=ui->lineEdit_2->text(),project=ui->lineEdit_3->text();

    if(organ==""||project==""){
        ui->lineEdit_2->setStyleSheet("background-color:red;");

        ui->lineEdit_2->setText("The organization name or project cannot be empty");

        QTimer::singleShot(4000,[=](){
           ui->lineEdit_2->setStyleSheet("background-color:white;");
            ui->lineEdit_2->setText("");
            ui->lineEdit_3->setText("");

        });

        return;
    }





    QFile f(UserName+".txt");


    f.open(QIODevice::ReadOnly | QIODevice::Text);

    QString useRead= f.readAll();

    f.close();


    QStringList listorg;

    listorg=useRead.split("  ");


    f.open(QIODevice::WriteOnly | QIODevice::Text);

    f.resize(0);

    QTextStream out(&f);

    for(int i=0;i<listorg.length();i++){
        if(listorg[i]==""){
            continue;
        }

       out<<listorg[i]<<"  ";

    }

    f.close();

    f.open(QIODevice::ReadOnly | QIODevice::Text);

    QString useRead2= f.readAll();

    f.close();


    QStringList listuse2;



    listuse2=useRead2.split("  ");

    for(int i=0;i<listuse2.length();i++){
        if(listuse2[i]==organ&&listuse2[i+1]==project){


            if(listuse2[i+4]=="1"){

                listuse2[i+4]="0";

                  break;
            }

            if(listuse2[i+4]=="0"){
               listuse2[i+4]="1";
                break;
            }


        }
        if(i==listuse2.length()-1){

                ui->lineEdit_2->setStyleSheet("background-color:red;");

                ui->lineEdit_2->setText("Theis task not found");

                QTimer::singleShot(4000,[=](){
                   ui->lineEdit_2->setStyleSheet("background-color:white;");
                    ui->lineEdit_2->setText("");
                    ui->lineEdit_3->setText("");

                });

                return;



    }


    }

    f.open(QIODevice::WriteOnly | QIODevice::Text);

    f.resize(0);

    QTextStream out2(&f);

    for(int i=0;i<listuse2.length();i++){

       out<<listuse2[i]<<"  ";


    }

    ui->lineEdit_2->setStyleSheet("background-color:green;");



    QTimer::singleShot(4000,[=](){
       ui->lineEdit_2->setStyleSheet("background-color:white;");
        ui->lineEdit_2->setText("");

    });



}


void viewTask::on_pushButton_4_clicked()
{

    QString organ=ui->lineEdit_5->text(),project=ui->lineEdit_4->text();

    if(organ==""||project==""){
        ui->lineEdit_5->setStyleSheet("background-color:red;");

        ui->lineEdit_5->setText("The organization name or project cannot be empty");

        QTimer::singleShot(4000,[=](){
           ui->lineEdit_5->setStyleSheet("background-color:white;");
            ui->lineEdit_5->setText("");
            ui->lineEdit_4->setText("");

        });

        return;
    }

    QFile f(UserName+".txt");


    f.open(QIODevice::ReadOnly | QIODevice::Text);

    QString useRead= f.readAll();

    f.close();


    QStringList listorg;

    listorg=useRead.split("  ");


    f.open(QIODevice::WriteOnly | QIODevice::Text);

    f.resize(0);

    QTextStream out(&f);

    for(int i=0;i<listorg.length();i++){
        if(listorg[i]==""){
            continue;
        }

       out<<listorg[i]<<"  ";

    }

    f.close();

    f.open(QIODevice::ReadOnly | QIODevice::Text);

    QString useRead2= f.readAll();

    f.close();


    QStringList listuse2;



    listuse2=useRead2.split("  ");

    for(int i=0;i<listuse2.length();i++){
        if(listuse2[i]==organ&&listuse2[i+1]==project){

            showcomment* scm=new showcomment();
            scm->setOrganName(organ);
            scm->setUserName(UserName);
            scm->setprojectName(project);
            scm->show();
            return;

        }
        if(i==listuse2.length()-1){

                ui->lineEdit_5->setStyleSheet("background-color:red;");

                ui->lineEdit_5->setText("Theis task not found");

                QTimer::singleShot(4000,[=](){
                   ui->lineEdit_5->setStyleSheet("background-color:white;");
                    ui->lineEdit_5->setText("");
                    ui->lineEdit_4->setText("");

                });

                return;



    }


    }






}

