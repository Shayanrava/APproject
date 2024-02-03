/********************************************************************************
** Form generated from reading UI file 'add_team_before.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_TEAM_BEFORE_H
#define UI_ADD_TEAM_BEFORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_team_before
{
public:
    QLabel *label;
    QLineEdit *add_team_before_led;
    QPushButton *add_team_before_pbn;

    void setupUi(QWidget *add_team_before)
    {
        if (add_team_before->objectName().isEmpty())
            add_team_before->setObjectName("add_team_before");
        add_team_before->resize(1166, 629);
        add_team_before->setStyleSheet(QString::fromUtf8("#add_team_before\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(add_team_before);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 60, 601, 51));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        add_team_before_led = new QLineEdit(add_team_before);
        add_team_before_led->setObjectName("add_team_before_led");
        add_team_before_led->setGeometry(QRect(450, 210, 301, 28));
        add_team_before_led->setStyleSheet(QString::fromUtf8("#add_team_before_led\n"
"{\n"
"background-color:white;\n"
"}"));
        add_team_before_pbn = new QPushButton(add_team_before);
        add_team_before_pbn->setObjectName("add_team_before_pbn");
        add_team_before_pbn->setGeometry(QRect(1050, 550, 91, 31));
        add_team_before_pbn->setStyleSheet(QString::fromUtf8("#add_team_before_pbn:hover\n"
"{\n"
"background-color:white;\n"
"order:1px solidgreen; \n"
"}\n"
"#add_team_before_pbn\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));

        retranslateUi(add_team_before);

        QMetaObject::connectSlotsByName(add_team_before);
    } // setupUi

    void retranslateUi(QWidget *add_team_before)
    {
        add_team_before->setWindowTitle(QCoreApplication::translate("add_team_before", "Form", nullptr));
        label->setText(QCoreApplication::translate("add_team_before", "Enter the name of the team you want to add:", nullptr));
        add_team_before_pbn->setText(QCoreApplication::translate("add_team_before", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_team_before: public Ui_add_team_before {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_TEAM_BEFORE_H
