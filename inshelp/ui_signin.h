/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signin
{
public:
    QLineEdit *ledpas;
    QPushButton *pbnok;
    QPushButton *pbnforget;
    QLabel *lbluser;
    QLabel *lblpas;
    QLineEdit *leduser;

    void setupUi(QWidget *signin)
    {
        if (signin->objectName().isEmpty())
            signin->setObjectName("signin");
        signin->resize(1166, 629);
        signin->setStyleSheet(QString::fromUtf8("#signin{\n"
"\n"
"background-color:black;\n"
"}"));
        ledpas = new QLineEdit(signin);
        ledpas->setObjectName("ledpas");
        ledpas->setGeometry(QRect(500, 140, 281, 31));
        ledpas->setStyleSheet(QString::fromUtf8("#ledpas{\n"
"\n"
"\n"
"\n"
"\n"
"border:1px solid rgb(238, 226, 63);\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"}"));
        ledpas->setEchoMode(QLineEdit::Password);
        pbnok = new QPushButton(signin);
        pbnok->setObjectName("pbnok");
        pbnok->setGeometry(QRect(450, 240, 141, 41));
        pbnok->setStyleSheet(QString::fromUtf8("#pbnok{\n"
"\n"
"background-color:rgb(238, 226, 63);\n"
"\n"
"border-radius:10px;\n"
"\n"
"font-size:25px;\n"
"}"));
        pbnforget = new QPushButton(signin);
        pbnforget->setObjectName("pbnforget");
        pbnforget->setGeometry(QRect(650, 240, 191, 41));
        pbnforget->setStyleSheet(QString::fromUtf8("#pbnforget{\n"
"\n"
"background-color:rgb(238, 226, 63);\n"
"\n"
"border-radius:10px;\n"
"\n"
"font-size:25px;\n"
"}"));
        lbluser = new QLabel(signin);
        lbluser->setObjectName("lbluser");
        lbluser->setGeometry(QRect(330, 70, 141, 41));
        lbluser->setStyleSheet(QString::fromUtf8("#lbluser{\n"
"\n"
"color:rgb(238, 226, 63);\n"
"\n"
"font-size:30px;\n"
"}"));
        lblpas = new QLabel(signin);
        lblpas->setObjectName("lblpas");
        lblpas->setGeometry(QRect(330, 130, 141, 31));
        lblpas->setStyleSheet(QString::fromUtf8("#lblpas{\n"
"\n"
"color:rgb(238, 226, 63);\n"
"\n"
"font-size:30px;\n"
"}"));
        leduser = new QLineEdit(signin);
        leduser->setObjectName("leduser");
        leduser->setGeometry(QRect(500, 70, 281, 31));
        leduser->setStyleSheet(QString::fromUtf8("#leduser{\n"
"\n"
"\n"
"border:1px solid rgb(238, 226, 63);\n"
"\n"
"\n"
"\n"
"}"));

        retranslateUi(signin);

        QMetaObject::connectSlotsByName(signin);
    } // setupUi

    void retranslateUi(QWidget *signin)
    {
        signin->setWindowTitle(QCoreApplication::translate("signin", "Form", nullptr));
        pbnok->setText(QCoreApplication::translate("signin", "ok", nullptr));
        pbnforget->setText(QCoreApplication::translate("signin", "forget password", nullptr));
        lbluser->setText(QCoreApplication::translate("signin", "<html><head/><body><p>username </p></body></html>", nullptr));
        lblpas->setText(QCoreApplication::translate("signin", "password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signin: public Ui_signin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
