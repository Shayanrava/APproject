#include "add_team_before.h"
#include "ui_add_team_before.h"

add_team_before::add_team_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::add_team_before)
{
    ui->setupUi(this);
}

add_team_before::~add_team_before()
{
    delete ui;
}
void add_team_before::setUserName(QString Name){

    UserName=Name;
}

void add_team_before::setOrganName(QString Name){

    orgaName=Name;
}

void add_team_before::on_add_team_before_pbn_clicked()
{
    QString add=  ui->add_team_before_led->text();

    QFile file(orgaName+".txt");

    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QString organRead( file.readAll());

    file.close();

    QStringList listOrgan,listProject,listeam,listadmin;

    listOrgan=organRead.split("\n");

    listadmin=listOrgan[0].split("  ");

    listProject=listOrgan[1].split("  ");

     listeam=listOrgan[2].split("  ");

    for(int i=0;i<listeam.length();i++){

        if(listeam[i]==add){
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

    out<<"\n";

    for(int i=0;i<listeam.length();i++){
        if(listeam[i]==""){
            continue;
        }

        out<<listeam[i]<<"  ";

    }
        out<<add<<"  ";

    file.close();

    QFile f2(add+".txt");

    f2.open(QIODevice::WriteOnly | QIODevice::Text);

    QTextStream out2(&f2);

    out2<<orgaName<<"  "<<add<<"  "<<"null  "<<"null  "<<"\n"<<UserName<<"  "<<"\n";
        f2.close();


        ui->add_team_before_led->setStyleSheet("background-color:green;");

        QTimer::singleShot(4000,[=](){

            ui->add_team_before_led->setStyleSheet("background-color:white;");

            ui->add_team_before_led->setText("");

        });


}

