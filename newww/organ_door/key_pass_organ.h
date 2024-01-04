#ifndef KEY_PASS_ORGAN_H
#define KEY_PASS_ORGAN_H

#include <QWidget>

namespace Ui {
class key_pass_organ;
}

class key_pass_organ : public QWidget
{
    Q_OBJECT

public:
    explicit key_pass_organ(QWidget *parent = nullptr);
    ~key_pass_organ();

private slots:
    void on_pushButton_clicked();

private:
    Ui::key_pass_organ *ui;
};

#endif // KEY_PASS_ORGAN_H
