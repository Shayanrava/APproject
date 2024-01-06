#include "forget.h"
#include "ui_forget.h"

forget::forget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::forget)
{
    ui->setupUi(this);
}

forget::~forget()
{
    delete ui;
}
