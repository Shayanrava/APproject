#include "team_before.h"
#include "ui_team_before.h"

team_before::team_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::team_before)
{
    ui->setupUi(this);
}

team_before::~team_before()
{
    delete ui;
}
