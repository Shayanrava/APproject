#include "signin.h"
#include "ui_signin.h"

signin::signin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signin)
{
    ui->setupUi(this);
    file=new QFile("userinformation.txt");

    forgetpassword=new forget();
  connect(ui->pbnok,SIGNAL(clicked()),this,SLOT(readinfo()));
  connect(ui->pbnforget,SIGNAL(clicked()),this,SLOT(closesignin()));
  entertomenue=new entrance_organ();
}

signin::~signin()
{
    delete ui;
}
void signin::readinfo(){

    if(ui->leduser->text()!=""){
        ui->leduser->setStyleSheet("background-color:white;");
    }

    if(ui->ledpas->text()!=""){
        ui->ledpas->setStyleSheet("background-color:white;");

    }

    if(ui->leduser->text()==""){
        ui->leduser->setStyleSheet("background-color:red;");

        ui->leduser->setText("The username cannot be empty");
        QTimer::singleShot(4000,[=](){
            ui->leduser->setText("");
        });
        return;
    }

    if(ui->ledpas->text()==""){
        ui->ledpas->setStyleSheet("background-color:red;");

        ui->ledpas->setEchoMode(QLineEdit::Normal);

        ui->ledpas->setText("The passwordname cannot be empty");

       QTimer::singleShot(4000,[=](){
           ui->ledpas->setEchoMode(QLineEdit::Password);
           ui->ledpas->setText("");
       });

        return;
    }

    file->open(QIODevice::ReadOnly | QIODevice::Text);
 QString useread( file->readAll());
 file->close();

 QStringList listuser;
 listuser=useread.split(" ");

 // سه تا ورودی تو ساین آپ گرفتیم دیگه
 for(int i=0;i<listuser.length();i+=3){
if(ui->leduser->text()==listuser[i]&&ui->ledpas->text()==listuser[i+1]){

    ui->leduser->setStyleSheet("background-color:green;");
     ui->ledpas->setStyleSheet("background-color:green;");
     ui->ledpas->setText("Login successful");

     nameEnter=ui->leduser->text();
     QFile f2("enter.txt");

     f2.open(QIODevice::WriteOnly | QIODevice::Text);

      QTextStream Qout(&f2);

      Qout<<nameEnter;
      f2.close();

     QTimer::singleShot(2000,[=](){

         entertomenue->show(); this->close();
     });


     break;
}
else{
    if(i==listuser.length()-3){
    ui->leduser->setStyleSheet("background-color:red;");
     ui->ledpas->setStyleSheet("background-color:red;");
     ui->leduser->setText("The username or password is wrong");
    }

}

}

}

void signin::closesignin(){


    forgetpassword->show();

}

