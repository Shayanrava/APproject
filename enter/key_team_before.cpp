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
    team_before *tb=new team_before();
    tb->show();
}

