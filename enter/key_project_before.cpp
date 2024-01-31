#include "key_project_before.h"
#include "ui_key_project_before.h"

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
