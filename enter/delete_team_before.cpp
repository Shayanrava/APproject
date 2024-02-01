#include "delete_team_before.h"
#include "ui_delete_team_before.h"

delete_team_before::delete_team_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::delete_team_before)
{
    ui->setupUi(this);
}

delete_team_before::~delete_team_before()
{
    delete ui;
}
