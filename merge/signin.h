#ifndef SIGNIN_H
#define SIGNIN_H

#include <QWidget>
#include<QFile>
#include<QTimer>
#include"forget.h"
#include "entrance_organ.h"

namespace Ui {
class signin;
}

class signin : public QWidget
{
    Q_OBJECT

public:

    explicit signin(QWidget *parent = nullptr);
    ~signin();
public slots:
    void readinfo();
    void closesignin();

private:
    QFile* file;
    forget* forgetpassword;

    Ui::signin *ui;

    entrance_organ*entertomain;


};

#endif // SIGNIN_H
