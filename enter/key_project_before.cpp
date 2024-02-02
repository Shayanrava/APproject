#include "key_project_before.h"
#include "ui_key_project_before.h"
#include "project_before.h"
key_project_before::key_project_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::key_project_before)
{
    ui->setupUi(this);
}

key_project_before::~key_project_before()
{
    delete ui;
}

void key_project_before::on_key_project_before_pbn_clicked()
{

    QString projectName=ui->key_project_before_led->text();



    if(projectName==""){


        ui->key_project_before_led->setStyleSheet("background-color:red;");

        ui->key_project_before_led->setText("The project name cannot be empty");

        QTimer::singleShot(2000,[=](){

            ui->key_project_before_led->setStyleSheet("background-color:white;");

            ui->key_project_before_led->setText("");
        });

        return;
    }

// --------------------------------------------------------

    QFile file(orgaName+".txt");

    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QString organRead( file.readAll());

    file.close();

    QStringList listOrgan,listProject;

    listOrgan=organRead.split("\n");

    listProject=listOrgan[1].split("  ");



    for(int i=0;i<listProject.length();i++){

        if(listProject[i]==projectName){


            project_before *pb=new project_before();

            pb->setprojectName(projectName);

            pb->setOrganName(orgaName);

            pb->setUserName(UserName);

            pb->show();

            return;

        }

        else{
            if(i==listProject.length()-1){


                ui->key_project_before_led->setStyleSheet("background-color:red;");

                ui->key_project_before_led->setText("The project not found!!!!");

                QTimer::singleShot(2000,[=](){

                    ui->key_project_before_led->setStyleSheet("background-color:white;");
                    ui->key_project_before_led->setText("");
                });
            }

        }


    }


}

void key_project_before::setUserName(QString Name){

    UserName=Name;
}
void key_project_before::setOrganName(QString Name){

    orgaName=Name;
}
