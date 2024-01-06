#ifndef MAKING_DECISION_FOR_ORGAN_H
#define MAKING_DECISION_FOR_ORGAN_H

#include <QWidget>

namespace Ui {
class making_decision_for_organ;
}

class making_decision_for_organ : public QWidget
{
    Q_OBJECT

public:
    explicit making_decision_for_organ(QWidget *parent = nullptr);
    ~making_decision_for_organ();

private slots:
    void on_pushButton_clicked();

private:
    Ui::making_decision_for_organ *ui;
};

#endif // MAKING_DECISION_FOR_ORGAN_H
