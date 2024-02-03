/********************************************************************************
** Form generated from reading UI file 'change_member_task_in_team.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_MEMBER_TASK_IN_TEAM_H
#define UI_CHANGE_MEMBER_TASK_IN_TEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change_member_task_in_team
{
public:
    QLabel *label;
    QLineEdit *change_member_task_led;
    QPushButton *change_member_task_pbn;

    void setupUi(QWidget *change_member_task_in_team)
    {
        if (change_member_task_in_team->objectName().isEmpty())
            change_member_task_in_team->setObjectName("change_member_task_in_team");
        change_member_task_in_team->resize(1166, 629);
        change_member_task_in_team->setStyleSheet(QString::fromUtf8("change_member_task_in_team\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(change_member_task_in_team);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 20, 421, 31));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        change_member_task_led = new QLineEdit(change_member_task_in_team);
        change_member_task_led->setObjectName("change_member_task_led");
        change_member_task_led->setGeometry(QRect(420, 150, 301, 28));
        change_member_task_led->setStyleSheet(QString::fromUtf8("#change_member_task_led\n"
"{\n"
"background-color:white;\n"
"}"));
        change_member_task_pbn = new QPushButton(change_member_task_in_team);
        change_member_task_pbn->setObjectName("change_member_task_pbn");
        change_member_task_pbn->setGeometry(QRect(1060, 550, 91, 31));
        change_member_task_pbn->setStyleSheet(QString::fromUtf8("#change_member_task_pbn:hover\n"
"{\n"
"background-color:white;\n"
"order:1px solidgreen; \n"
"}\n"
"#change_member_task_pbn\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));

        retranslateUi(change_member_task_in_team);

        QMetaObject::connectSlotsByName(change_member_task_in_team);
    } // setupUi

    void retranslateUi(QWidget *change_member_task_in_team)
    {
        change_member_task_in_team->setWindowTitle(QCoreApplication::translate("change_member_task_in_team", "Form", nullptr));
        label->setText(QCoreApplication::translate("change_member_task_in_team", "Enter the desired team's name:", nullptr));
        change_member_task_pbn->setText(QCoreApplication::translate("change_member_task_in_team", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_member_task_in_team: public Ui_change_member_task_in_team {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_MEMBER_TASK_IN_TEAM_H
