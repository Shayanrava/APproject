#include "making_decision_for_organ.h"
#include "ui_making_decision_for_organ.h"

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
