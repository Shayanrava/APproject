#include "key_pass_organ.h"
#include "ui_key_pass_organ.h"
#include"making_decision_for_organ.h"
key_pass_organ::key_pass_organ(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::key_pass_organ)
{
    ui->setupUi(this);
}

key_pass_organ::~key_pass_organ()
{
    delete ui;
}













void key_pass_organ::on_pbn_pass_clicked()
{

     QString nameOrgan=ui->led_pass->text(),organ2=nameOrgan+".txt";

    if(nameOrgan==""){

        ui->led_pass->setStyleSheet("background-color:red;");

        ui->led_pass->setText("The organization name cannot be empty");

        QTimer::singleShot(2000,[=](){
            ui->led_pass->setStyleSheet("background-color:white;");
            ui->led_pass->setText("");

        });

        return;
    }

    // ------------------------------------------------------------------------

    QFile file2("org.txt");


    file2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString organRead( file2.readAll());

    file2.close();

    QStringList listOrgan;

    listOrgan=organRead.split("  ");

    for(int i=0;i<listOrgan.length();i++){

        if(listOrgan[i]==nameOrgan){

            listOrgan.remove(i);

            break;

        }

        else{
            if(i==listOrgan.length()-1){
                ui->led_pass->setStyleSheet("background-color:red;");

                ui->led_pass->setText("The organization not found");

                QTimer::singleShot(4000,[=](){
                    ui->led_pass->setStyleSheet("background-color:white;");
                    ui->led_pass->setText("");


                });
                return;

            }


        }


    }

    // ------------------------------------------------------------------------

    QFile file(organ2);



    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QString useRead= file.readAll();

    file.close();

    QStringList listuse,listadmin;

    listuse=useRead.split("\n");

    listadmin=listuse[0].split("  ");

    for(int i=0;i<listadmin.length();i++){

        if(listadmin[i]==UserName){

            making_decision_for_organ *mdo=new making_decision_for_organ();
            mdo->setUserName(UserName);

            mdo->setOrganName(ui->led_pass->text());

            mdo->show();
            this->close();
            return;
        }


        else{
            if(i==listadmin.length()-1){
                ui->led_pass->setStyleSheet("background-color:red;");

                ui->led_pass->setText("you dont have access to it");

                QTimer::singleShot(4000,[=](){
                    ui->led_pass->setStyleSheet("background-color:white;");
                    ui->led_pass->setText("");
                });

                return;

            }
        }

    }


//    making_decision_for_organ *mdo=new making_decision_for_organ();
//    mdo->setUserName(UserName);
//    mdo->show();
//    this->close();
}

void key_pass_organ::setUserName(QString Name){

    UserName=Name;
}

