#ifndef ENTER_H
#define ENTER_H

#include <QMainWindow>
#include<QPushButton>
#include"signin.h"
#include "signup.h"
#include <QFile>


QT_BEGIN_NAMESPACE
namespace Ui { class Enter; }
QT_END_NAMESPACE

class Enter : public QMainWindow
{
    Q_OBJECT

public:
    Enter(QWidget *parent = nullptr);
    ~Enter();

public slots:

    void gotosignin();
    void gotosignup();

private:

signin*sgn;

signup*sup;

Ui::Enter *ui;


};
#endif // ENTER_H
