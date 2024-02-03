/********************************************************************************
** Form generated from reading UI file 'add_project_before.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_PROJECT_BEFORE_H
#define UI_ADD_PROJECT_BEFORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_project_before
{
public:
    QLabel *label;
    QLineEdit *add_project_led;
    QPushButton *add_project_pbn;

    void setupUi(QWidget *add_project_before)
    {
        if (add_project_before->objectName().isEmpty())
            add_project_before->setObjectName("add_project_before");
        add_project_before->resize(1166, 629);
        add_project_before->setStyleSheet(QString::fromUtf8("#add_project_before\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(add_project_before);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 100, 761, 71));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        add_project_led = new QLineEdit(add_project_before);
        add_project_led->setObjectName("add_project_led");
        add_project_led->setGeometry(QRect(430, 270, 311, 31));
        add_project_led->setStyleSheet(QString::fromUtf8("#add_project_led\n"
"{\n"
"background-color:white;\n"
"}"));
        add_project_pbn = new QPushButton(add_project_before);
        add_project_pbn->setObjectName("add_project_pbn");
        add_project_pbn->setGeometry(QRect(1050, 550, 91, 31));
        add_project_pbn->setStyleSheet(QString::fromUtf8("#add_project_pbn:hover\n"
"{\n"
"background-color:white;\n"
"order:1px solidgreen; \n"
"}\n"
"#add_project_pbn\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));

        retranslateUi(add_project_before);

        QMetaObject::connectSlotsByName(add_project_before);
    } // setupUi

    void retranslateUi(QWidget *add_project_before)
    {
        add_project_before->setWindowTitle(QCoreApplication::translate("add_project_before", "Form", nullptr));
        label->setText(QCoreApplication::translate("add_project_before", "Please enter the name of the project you want to define:", nullptr));
        add_project_pbn->setText(QCoreApplication::translate("add_project_before", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_project_before: public Ui_add_project_before {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_PROJECT_BEFORE_H
