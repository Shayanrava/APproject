#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include<QFile>
#include <QTimer>
#include<QTextStream>

namespace Ui {
class signup;
}

class signup : public QWidget
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();
public slots:
    void saveinfo();


private:
    QFile*file;

    Ui::signup *ui;
};

#endif // SIGNUP_H
