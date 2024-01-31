#ifndef KEY_PASS_ORGAN_H
#define KEY_PASS_ORGAN_H

#include <QWidget>
#include <QFile>
#include <QTimer>

namespace Ui {
class key_pass_organ;
}

class key_pass_organ : public QWidget
{
    Q_OBJECT

public:
    explicit key_pass_organ(QWidget *parent = nullptr);
    ~key_pass_organ();


    void setUserName(QString Name);

private slots:
    void on_pbn_pass_clicked();

private:
    Ui::key_pass_organ *ui;

    QString UserName;
};

#endif // KEY_PASS_ORGAN_H
