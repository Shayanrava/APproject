#include "add_people.h"
#include "ui_add_people.h"

add_people::add_people(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::add_people)
{
    ui->setupUi(this);
}

add_people::~add_people()
{
    delete ui;
}
