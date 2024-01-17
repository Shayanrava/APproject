#include "making_decision_for_organ.h"
#include "ui_making_decision_for_organ.h"
#include "add_people.h"
making_decision_for_organ::making_decision_for_organ(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::making_decision_for_organ)
{
    ui->setupUi(this);
}

making_decision_for_organ::~making_decision_for_organ()
{
    delete ui;
}

void making_decision_for_organ::on_pbn_pepoleTooRGAN_clicked()
{
    add_people *ap=new add_people();
    ap->show();
    this->close();
}

