#include "delete_project_before.h"
#include "ui_delete_project_before.h"

delete_project_before::delete_project_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::delete_project_before)
{
    ui->setupUi(this);
}

delete_project_before::~delete_project_before()
{
    delete ui;
}
void delete_project_before::setUserName(QString Name){

    UserName=Name;
}

void delete_project_before::setOrganName(QString Name){

    orgaName=Name;
}

void delete_project_before::on_delete_project_before_pbn_clicked()
{
    QString del=  ui->delete_project_before_led->text();

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

        if(listProject[i]==del){

            listProject.remove(i);
            break;

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

    out<<"\n";

    for(int i=0;i<listeam.length();i++){
        if(listeam[i]==""){
            continue;
        }

        out<<listeam[i]<<"  ";

    }


    file.close();

    QFile f2(del+".txt");

    f2.open(QIODevice::WriteOnly | QIODevice::Text);

    f2.resize(0);


        ui->delete_project_before_led->setStyleSheet("background-color:green;");

        QTimer::singleShot(4000,[=](){

            ui->delete_project_before_led->setStyleSheet("background-color:white;");

            ui->delete_project_before_led->setText("");

        });
}

