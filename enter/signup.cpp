#include "signup.h"
#include "ui_signup.h"



signup::signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);

    file=new QFile("userinformation.txt");

    connect(ui->pbnokup,SIGNAL(clicked()),this,SLOT(saveinfo()));
}

signup::~signup()
{
    delete ui;
}
void signup::saveinfo(){




      file->open(QIODevice::WriteOnly | QIODevice::Text|QIODevice::Append);
      file->close();



    if(ui->leduser->text()!=""){
        ui->leduser->setStyleSheet("background-color:white;");
    }

    if(ui->ledpassword->text()!=""){
        ui->ledpassword->setStyleSheet("background-color:white;");

    }

    if(ui->ledphone->text()!=""){
        ui->ledphone->setStyleSheet("background-color:white;");
    }


    if(ui->leduser->text()==""){
        ui->leduser->setStyleSheet("background-color:red;");

        ui->leduser->setText("The username cannot be empty");
        QTimer::singleShot(2000,[=](){
            ui->leduser->setText("");
        });
        return;
    }

    if(ui->ledpassword->text()==""){
        ui->ledpassword->setStyleSheet("background-color:red;");

        ui->ledpassword->setEchoMode(QLineEdit::Normal);

        ui->ledpassword->setText("The passwordname cannot be empty");

       QTimer::singleShot(2000,[=](){
           ui->ledpassword->setEchoMode(QLineEdit::Password);
           ui->ledpassword->setText("");
       });

        return;
    }

    if(ui->ledpassword->text().length()<8){
        ui->ledpassword->setStyleSheet("background-color:red;");

        ui->ledpassword->setEchoMode(QLineEdit::Normal);

        ui->ledpassword->setText("The number of password characters must be at least 8");

       QTimer::singleShot(2000,[=](){
           ui->ledpassword->setEchoMode(QLineEdit::Password);
           ui->ledpassword->setText("");
       });

        return;
    }


    if(ui->ledphone->text()==""){
        ui->ledphone->setStyleSheet("background-color:red;");

        ui->ledphone->setText("The first and Phone Number cannot be empty");

        QTimer::singleShot(2000,[=](){
            ui->ledphone->setText("");
        });
        return;
    }


     file->open(QIODevice::ReadOnly | QIODevice::Text);
 QString readuser( file->readAll());
 file->close();

 QStringList arruser;
 arruser=readuser.split(" ");




 for(int i=0;i<arruser.length();i+=3){
if(ui->leduser->text()==arruser[i]){

    ui->leduser->setStyleSheet("background-color:red;");
ui->leduser->setText("This username is already selected, please choose another username");
    QTimer::singleShot(2000,[=](){
        ui->leduser->setText("");

    });


    return;
}
}

 for(int i=2;i<arruser.length();i+=3){

if(ui->ledphone->text()==arruser[i]){

    ui->ledphone->setStyleSheet("background-color:red;");
ui->ledphone->setText("An account has already been created with this account number");
    QTimer::singleShot(3000,[=](){
        ui->ledphone->setText("");

    });


    return;
}
}

 ui->leduser->setStyleSheet("background-color:green;");

 ui->ledpassword->setStyleSheet("background-color:green;");

 ui->ledphone->setStyleSheet("background-color:green;");

 QTimer::singleShot(3000,[=](){
     ui->leduser->setText("");
      ui->ledpassword->setText("");
        ui->ledphone->setText("");
        ui->leduser->setStyleSheet("background-color:white;");

        ui->ledpassword->setStyleSheet("background-color:white;");

        ui->ledphone->setStyleSheet("background-color:white;");

 });


    file->open(QIODevice::WriteOnly | QIODevice::Text|QIODevice::Append);


    QTextStream outStream(file);

     QString User=ui->leduser->text();

outStream<<User<<" ";

           QString Password=ui->ledpassword->text();

           outStream<<Password<<" ";


                QString PhoneNumber=ui->ledphone->text();

                outStream<<PhoneNumber<<" ";


                file->close();


                QTimer::singleShot(2000,[=](){
                    this->close();

                });


}
