/********************************************************************************
** Form generated from reading UI file 'view_member_task_in_team.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_MEMBER_TASK_IN_TEAM_H
#define UI_VIEW_MEMBER_TASK_IN_TEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_view_member_task_in_team
{
public:
    QLabel *label;
    QLineEdit *view_mamber_task_led;
    QPushButton *view_task_member_pbn;

    void setupUi(QWidget *view_member_task_in_team)
    {
        if (view_member_task_in_team->objectName().isEmpty())
            view_member_task_in_team->setObjectName("view_member_task_in_team");
        view_member_task_in_team->resize(1166, 629);
        view_member_task_in_team->setStyleSheet(QString::fromUtf8("#view_member_task_in_team\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(view_member_task_in_team);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 60, 461, 51));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        view_mamber_task_led = new QLineEdit(view_member_task_in_team);
        view_mamber_task_led->setObjectName("view_mamber_task_led");
        view_mamber_task_led->setGeometry(QRect(450, 200, 281, 28));
        view_mamber_task_led->setStyleSheet(QString::fromUtf8("#view_member_task_led\n"
"{\n"
"background-color:white;\n"
"}"));
        view_task_member_pbn = new QPushButton(view_member_task_in_team);
        view_task_member_pbn->setObjectName("view_task_member_pbn");
        view_task_member_pbn->setGeometry(QRect(1050, 550, 91, 31));
        view_task_member_pbn->setStyleSheet(QString::fromUtf8("#view_task_member_pbn:hover\n"
"{\n"
"background-color:white;\n"
"order:1px solidgreen; \n"
"}\n"
"#view_task_member_pbn\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));

        retranslateUi(view_member_task_in_team);

        QMetaObject::connectSlotsByName(view_member_task_in_team);
    } // setupUi

    void retranslateUi(QWidget *view_member_task_in_team)
    {
        view_member_task_in_team->setWindowTitle(QCoreApplication::translate("view_member_task_in_team", "Form", nullptr));
        label->setText(QCoreApplication::translate("view_member_task_in_team", "Enter the desired member's name:", nullptr));
        view_task_member_pbn->setText(QCoreApplication::translate("view_member_task_in_team", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view_member_task_in_team: public Ui_view_member_task_in_team {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_MEMBER_TASK_IN_TEAM_H
