#include "forget.h"
#include "ui_forget.h"


forget::forget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::forget)
{
    ui->setupUi(this);
    connect(ui->pushButtonOk,SIGNAL(clicked()),this,SLOT(  readinfo()));

}

forget::~forget()
{
    delete ui;
}

void forget:: readinfo(){

   QFile file("userinformation.txt");

   if(ui->lineEdit_Phone->text()!=""){
       ui->lineEdit_Phone->setStyleSheet("background-color:white;");
   }
   if(ui->lineEdit_Phone->text()==""){
       ui->lineEdit_Phone->setStyleSheet("background-color:red;");

       ui->lineEdit_Phone->setText("The phone number cannot be empty");
       QTimer::singleShot(3000,[=](){
           ui->lineEdit_Phone->setText("");
       });
       return;
   }

   file.open(QIODevice::ReadOnly | QIODevice::Text);
QString readuser( file.readAll());
file.close();

QStringList arruser;
arruser=readuser.split(" ");



for(int i=2;i<arruser.length();i+=3){

    ui->lineEdit_Pass->setText(arruser[i]);

if(ui->lineEdit_Phone->text()==arruser[i]){

    ui->lineEdit_Pass->setText(arruser[i-1]);

    ui->lineEdit_User->setText(arruser[i-2]);
    break;

}
else{
   if(i==arruser.length()-1){
   ui->lineEdit_Phone->setStyleSheet("background-color:red;");

    ui->lineEdit_Phone->setText("The phone number is wrong");
   }

}

}


}
