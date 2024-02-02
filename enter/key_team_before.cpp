#include "key_team_before.h"
#include "ui_key_team_before.h"
#include"team_before.h"
key_team_before::key_team_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::key_team_before)
{
    ui->setupUi(this);
}

key_team_before::~key_team_before()
{
    delete ui;
}

void key_team_before::on_key_team_before_pbn_clicked()
{

    QString teamName=ui->key_team_before_led->text();



    if(teamName==""){


        ui->key_team_before_led->setStyleSheet("background-color:red;");

        ui->key_team_before_led->setText("The project name cannot be empty");

        QTimer::singleShot(2000,[=](){

            ui->key_team_before_led->setStyleSheet("background-color:white;");

            ui->key_team_before_led->setText("");
        });

        return;
    }

// --------------------------------------------------------

    QFile file(orgaName+".txt");

    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QString organRead( file.readAll());

    file.close();

    QStringList listOrgan,listTeam;

    listOrgan=organRead.split("\n");

    listTeam=listOrgan[2].split("  ");



    for(int i=0;i<listTeam.length();i++){

        if(listTeam[i]==teamName){

            team_before *tb=new team_before();

            tb->setTeamtName(teamName);

            tb->setOrganName(orgaName);

            tb->setUserName(UserName);

            tb->show();

            return;

        }

        else{
            if(i==listTeam.length()-1){


                ui->key_team_before_led->setStyleSheet("background-color:red;");

                ui->key_team_before_led->setText("The team not found!!!!");

                QTimer::singleShot(2000,[=](){

                    ui->key_team_before_led->setStyleSheet("background-color:white;");
                    ui->key_team_before_led->setText("");
                });
            }

        }


    }

    team_before *tb=new team_before();
    tb->show();
}

void key_team_before::setUserName(QString Name){

    UserName=Name;
}
void key_team_before::setOrganName(QString Name){

    orgaName=Name;
}
