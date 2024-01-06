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

void key_pass_organ::on_pushButton_clicked()
{
    making_decision_for_organ *mdd=new making_decision_for_organ();
    mdd->show();
    this->close();
}

