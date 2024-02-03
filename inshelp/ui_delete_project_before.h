/********************************************************************************
** Form generated from reading UI file 'delete_project_before.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_PROJECT_BEFORE_H
#define UI_DELETE_PROJECT_BEFORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delete_project_before
{
public:
    QLabel *label;
    QLineEdit *delete_project_before_led;
    QPushButton *delete_project_before_pbn;

    void setupUi(QWidget *delete_project_before)
    {
        if (delete_project_before->objectName().isEmpty())
            delete_project_before->setObjectName("delete_project_before");
        delete_project_before->resize(1166, 629);
        delete_project_before->setStyleSheet(QString::fromUtf8("#delete_project_before\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(delete_project_before);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 60, 661, 51));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        delete_project_before_led = new QLineEdit(delete_project_before);
        delete_project_before_led->setObjectName("delete_project_before_led");
        delete_project_before_led->setGeometry(QRect(470, 240, 271, 28));
        delete_project_before_led->setStyleSheet(QString::fromUtf8("#delete_project_before_led\n"
"{\n"
"background-color:white;\n"
"}"));
        delete_project_before_pbn = new QPushButton(delete_project_before);
        delete_project_before_pbn->setObjectName("delete_project_before_pbn");
        delete_project_before_pbn->setGeometry(QRect(1050, 550, 91, 31));
        delete_project_before_pbn->setStyleSheet(QString::fromUtf8("#delete_project_before_pbn:hover\n"
"{\n"
"background-color:white;\n"
"order:1px solidgreen; \n"
"}\n"
"#delete_project_before_pbn\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));

        retranslateUi(delete_project_before);

        QMetaObject::connectSlotsByName(delete_project_before);
    } // setupUi

    void retranslateUi(QWidget *delete_project_before)
    {
        delete_project_before->setWindowTitle(QCoreApplication::translate("delete_project_before", "Form", nullptr));
        label->setText(QCoreApplication::translate("delete_project_before", "Enter the name of the project you want to delete:", nullptr));
        delete_project_before_pbn->setText(QCoreApplication::translate("delete_project_before", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete_project_before: public Ui_delete_project_before {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_PROJECT_BEFORE_H
