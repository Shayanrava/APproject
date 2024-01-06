#include "enter.h"
#include "ui_enter.h"

Enter::Enter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Enter)
{
    ui->setupUi(this);

sgn=new signin();
sup=new signup();

connect(ui->signin,SIGNAL(clicked()),this,SLOT(gotosignin()));
connect(ui->signup,SIGNAL(clicked()),this,SLOT(gotosignup()));


}

void Enter::gotosignin(){

  this->close();

    sgn->show();


}

void Enter::gotosignup(){

  this->close();

    sup->show();


}

Enter::~Enter()
{
    delete ui;
}
