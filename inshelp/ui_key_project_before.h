/********************************************************************************
** Form generated from reading UI file 'key_project_before.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEY_PROJECT_BEFORE_H
#define UI_KEY_PROJECT_BEFORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_key_project_before
{
public:
    QLabel *label;
    QLineEdit *key_project_before_led;
    QPushButton *key_project_before_pbn;

    void setupUi(QWidget *key_project_before)
    {
        if (key_project_before->objectName().isEmpty())
            key_project_before->setObjectName("key_project_before");
        key_project_before->resize(1166, 629);
        key_project_before->setStyleSheet(QString::fromUtf8("#key_project_before\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(key_project_before);
        label->setObjectName("label");
        label->setGeometry(QRect(370, 40, 421, 31));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        key_project_before_led = new QLineEdit(key_project_before);
        key_project_before_led->setObjectName("key_project_before_led");
        key_project_before_led->setGeometry(QRect(430, 180, 291, 28));
        key_project_before_led->setStyleSheet(QString::fromUtf8("#key_project_before_led\n"
"{\n"
"background-color:white;\n"
"}"));
        key_project_before_pbn = new QPushButton(key_project_before);
        key_project_before_pbn->setObjectName("key_project_before_pbn");
        key_project_before_pbn->setGeometry(QRect(1050, 550, 91, 31));
        key_project_before_pbn->setStyleSheet(QString::fromUtf8("#key_project_before_pbn:hover\n"
"{\n"
"background-color:white;\n"
"order:1px solidgreen; \n"
"}\n"
"#key_project_before_pbn\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));

        retranslateUi(key_project_before);

        QMetaObject::connectSlotsByName(key_project_before);
    } // setupUi

    void retranslateUi(QWidget *key_project_before)
    {
        key_project_before->setWindowTitle(QCoreApplication::translate("key_project_before", "Form", nullptr));
        label->setText(QCoreApplication::translate("key_project_before", "Enter the desired project name:", nullptr));
        key_project_before_pbn->setText(QCoreApplication::translate("key_project_before", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class key_project_before: public Ui_key_project_before {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEY_PROJECT_BEFORE_H
