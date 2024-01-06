#include "enter.h"
#include "ui_enter.h"

Enter::Enter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Enter)
{
    ui->setupUi(this);
}

Enter::~Enter()
{
    delete ui;
}

