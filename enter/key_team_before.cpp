#include "key_team_before.h"
#include "ui_key_team_before.h"

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
