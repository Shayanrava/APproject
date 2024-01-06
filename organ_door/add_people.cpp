#include "add_people.h"
#include "ui_add_people.h"
#include<QMessageBox>
add_people::add_people(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::add_people)
{
    ui->setupUi(this);
}

add_people::~add_people()
{
    delete ui;
}

void add_people::on_pushButton_clicked()
{
    if(ui->lineEdit->text()=="")
    {
        QMessageBox alert;
        alert.setText("You have not entered a phrase! Try again.");
        alert.exec();
    }
    else
    {
        //
        //
        //
        //
        QMessageBox alert2;
        alert2.setText("The desired person was successfully added to the organization.");
        alert2.exec();
    }
    this->close();
}

