#include "darvaazeye_saazmaan.h"
#include "ui_darvaazeye_saazmaan.h"

darvaazeye_saazmaan::darvaazeye_saazmaan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::darvaazeye_saazmaan)
{
    ui->setupUi(this);
}

darvaazeye_saazmaan::~darvaazeye_saazmaan()
{
    delete ui;
}
