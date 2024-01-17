#include "organization_voroodi.h"
#include "ui_orfanization_voroodi.h"

orfanization_voroodi::orfanization_voroodi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::orfanization_voroodi)
{
    ui->setupUi(this);
}

orfanization_voroodi::~orfanization_voroodi()
{
    delete ui;
}
