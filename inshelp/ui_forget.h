/********************************************************************************
** Form generated from reading UI file 'forget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGET_H
#define UI_FORGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_forget
{
public:
    QLineEdit *lineEdit_Pass;
    QLabel *labelPhone;
    QLineEdit *lineEdit_User;
    QLabel *labelpassword;
    QPushButton *pushButtonOk;
    QLineEdit *lineEdit_Phone;
    QLabel *labelusername;

    void setupUi(QWidget *forget)
    {
        if (forget->objectName().isEmpty())
            forget->setObjectName("forget");
        forget->resize(1166, 629);
        forget->setStyleSheet(QString::fromUtf8("#forget{\n"
"\n"
"background-color:black;\n"
"}"));
        lineEdit_Pass = new QLineEdit(forget);
        lineEdit_Pass->setObjectName("lineEdit_Pass");
        lineEdit_Pass->setGeometry(QRect(550, 130, 341, 26));
        labelPhone = new QLabel(forget);
        labelPhone->setObjectName("labelPhone");
        labelPhone->setGeometry(QRect(430, 60, 91, 31));
        labelPhone->setStyleSheet(QString::fromUtf8("#labelPhone{\n"
"color:rgb(238, 226, 63);\n"
"font-size:30px;\n"
"\n"
"}"));
        lineEdit_User = new QLineEdit(forget);
        lineEdit_User->setObjectName("lineEdit_User");
        lineEdit_User->setGeometry(QRect(550, 200, 341, 26));
        labelpassword = new QLabel(forget);
        labelpassword->setObjectName("labelpassword");
        labelpassword->setGeometry(QRect(330, 120, 201, 41));
        labelpassword->setStyleSheet(QString::fromUtf8("#labelpassword{\n"
"color:rgb(238, 226, 63);\n"
"font-size:30px;\n"
"\n"
"}"));
        pushButtonOk = new QPushButton(forget);
        pushButtonOk->setObjectName("pushButtonOk");
        pushButtonOk->setGeometry(QRect(550, 310, 101, 31));
        pushButtonOk->setStyleSheet(QString::fromUtf8("#pushButtonOk{\n"
"background-color:rgb(238, 226, 63);\n"
"border-radius:10px;\n"
"color:black;\n"
"font-size:25px;\n"
"}"));
        lineEdit_Phone = new QLineEdit(forget);
        lineEdit_Phone->setObjectName("lineEdit_Phone");
        lineEdit_Phone->setGeometry(QRect(550, 60, 341, 26));
        labelusername = new QLabel(forget);
        labelusername->setObjectName("labelusername");
        labelusername->setGeometry(QRect(330, 180, 201, 61));
        labelusername->setStyleSheet(QString::fromUtf8("#labelusername{\n"
"color:rgb(238, 226, 63);\n"
"font-size:30px;\n"
"\n"
"}"));

        retranslateUi(forget);

        QMetaObject::connectSlotsByName(forget);
    } // setupUi

    void retranslateUi(QWidget *forget)
    {
        forget->setWindowTitle(QCoreApplication::translate("forget", "Form", nullptr));
        labelPhone->setText(QCoreApplication::translate("forget", "Phone", nullptr));
        labelpassword->setText(QCoreApplication::translate("forget", "your password", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("forget", "Ok", nullptr));
        labelusername->setText(QCoreApplication::translate("forget", "your username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forget: public Ui_forget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGET_H
