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
    project_before *pb=new project_before();
    pb->show();
}

