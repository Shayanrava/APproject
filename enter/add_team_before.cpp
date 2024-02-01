#include "add_team_before.h"
#include "ui_add_team_before.h"

add_team_before::add_team_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::add_team_before)
{
    ui->setupUi(this);
}

add_team_before::~add_team_before()
{
    delete ui;
}
