#include "admin_before.h"
#include "ui_admin_before.h"

admin_before::admin_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin_before)
{
    ui->setupUi(this);
}

admin_before::~admin_before()
{
    delete ui;
}
