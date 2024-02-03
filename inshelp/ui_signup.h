/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QLabel *lbluser;
    QLabel *lblphone;
    QLineEdit *ledpassword;
    QLineEdit *ledphone;
    QPushButton *pbnokup;
    QLabel *lblpas;
    QLineEdit *leduser;

    void setupUi(QWidget *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(1166, 629);
        signup->setStyleSheet(QString::fromUtf8("#signup{\n"
"\n"
"background-color:black;\n"
"}"));
        lbluser = new QLabel(signup);
        lbluser->setObjectName("lbluser");
        lbluser->setGeometry(QRect(350, 90, 141, 51));
        lbluser->setStyleSheet(QString::fromUtf8("#lbluser{\n"
"color: rgb(238, 226, 63);\n"
"font-size:30px;\n"
"}"));
        lblphone = new QLabel(signup);
        lblphone->setObjectName("lblphone");
        lblphone->setGeometry(QRect(290, 200, 201, 61));
        lblphone->setStyleSheet(QString::fromUtf8("#lblphone{\n"
"color: rgb(238, 226, 63);\n"
"font-size:30px;\n"
"}"));
        ledpassword = new QLineEdit(signup);
        ledpassword->setObjectName("ledpassword");
        ledpassword->setGeometry(QRect(500, 160, 381, 26));
        ledpassword->setStyleSheet(QString::fromUtf8("#ledpassword{\n"
"border:1px  solid   rgb(238, 226, 63);\n"
"\n"
"}"));
        ledpassword->setEchoMode(QLineEdit::Password);
        ledphone = new QLineEdit(signup);
        ledphone->setObjectName("ledphone");
        ledphone->setGeometry(QRect(500, 220, 381, 26));
        ledphone->setStyleSheet(QString::fromUtf8("#ledphone{\n"
"border:1px  solid   rgb(238, 226, 63);\n"
"\n"
"}"));
        pbnokup = new QPushButton(signup);
        pbnokup->setObjectName("pbnokup");
        pbnokup->setEnabled(true);
        pbnokup->setGeometry(QRect(560, 320, 111, 31));
        pbnokup->setStyleSheet(QString::fromUtf8("#pbnokup{\n"
"\n"
"background-color:rgb(238, 226, 63);\n"
"\n"
"border-radius:10px;\n"
"\n"
"font-size:25px;\n"
"\n"
"color:black;\n"
"\n"
"}"));
        lblpas = new QLabel(signup);
        lblpas->setObjectName("lblpas");
        lblpas->setGeometry(QRect(360, 150, 131, 41));
        lblpas->setStyleSheet(QString::fromUtf8("#lblpas{\n"
"color: rgb(238, 226, 63);\n"
"font-size:30px;\n"
"}"));
        leduser = new QLineEdit(signup);
        leduser->setObjectName("leduser");
        leduser->setGeometry(QRect(500, 100, 381, 26));
        leduser->setStyleSheet(QString::fromUtf8("#leduser{\n"
"border:1px  solid   rgb(238, 226, 63);\n"
"\n"
"}"));

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QWidget *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Form", nullptr));
        lbluser->setText(QCoreApplication::translate("signup", "username", nullptr));
        lblphone->setText(QCoreApplication::translate("signup", "<html><head/><body><p>phoneNumber</p></body></html>", nullptr));
        pbnokup->setText(QCoreApplication::translate("signup", "ok", nullptr));
        lblpas->setText(QCoreApplication::translate("signup", "password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
