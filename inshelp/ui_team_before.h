/********************************************************************************
** Form generated from reading UI file 'team_before.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAM_BEFORE_H
#define UI_TEAM_BEFORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_team_before
{
public:
    QLabel *label;
    QPushButton *add_admin_to_team_pbn;
    QPushButton *delete_admin_pbn;
    QPushButton *view_admins_pbn;
    QPushButton *change_team_task_pbn;
    QPushButton *view_task_pbn;
    QPushButton *add_member_pbn;
    QPushButton *delete_member_pbn;
    QPushButton *view_member_pbn;
    QPushButton *change_member_task_pbn;
    QPushButton *view_member_task_pbn;
    QLineEdit *led_add_mem;
    QLineEdit *led_del_mem;
    QLineEdit *led_del_adm;
    QLineEdit *led_add_adm;
    QLineEdit *led_view_taskteam;
    QTextEdit *ted_view_mem;
    QTextEdit *ted_view_adm;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *led_chan_tasktime;
    QLineEdit *led_chan_taskteam;
    QLineEdit *led_chan_tasktimemem;
    QLineEdit *led_chan_taskmem;
    QLineEdit *led_namechange;
    QLineEdit *led_view_taskmem;
    QLineEdit *led_nameforview;

    void setupUi(QWidget *team_before)
    {
        if (team_before->objectName().isEmpty())
            team_before->setObjectName("team_before");
        team_before->resize(1166, 629);
        team_before->setStyleSheet(QString::fromUtf8("#team_before\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(team_before);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 30, 271, 20));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"}"));
        add_admin_to_team_pbn = new QPushButton(team_before);
        add_admin_to_team_pbn->setObjectName("add_admin_to_team_pbn");
        add_admin_to_team_pbn->setGeometry(QRect(780, 130, 211, 29));
        add_admin_to_team_pbn->setStyleSheet(QString::fromUtf8("#add_admin_to_team_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:20px;\n"
"}\n"
"\n"
"#add_admin_to_team_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        delete_admin_pbn = new QPushButton(team_before);
        delete_admin_pbn->setObjectName("delete_admin_pbn");
        delete_admin_pbn->setGeometry(QRect(780, 260, 211, 29));
        delete_admin_pbn->setStyleSheet(QString::fromUtf8("#delete_admin_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#delete_admin_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        view_admins_pbn = new QPushButton(team_before);
        view_admins_pbn->setObjectName("view_admins_pbn");
        view_admins_pbn->setGeometry(QRect(400, 230, 211, 29));
        view_admins_pbn->setStyleSheet(QString::fromUtf8("#view_admins_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#view_admins_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        change_team_task_pbn = new QPushButton(team_before);
        change_team_task_pbn->setObjectName("change_team_task_pbn");
        change_team_task_pbn->setGeometry(QRect(40, 400, 211, 29));
        change_team_task_pbn->setStyleSheet(QString::fromUtf8("#change_team_task_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:20px;\n"
"}\n"
"\n"
"#change_team_task_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        view_task_pbn = new QPushButton(team_before);
        view_task_pbn->setObjectName("view_task_pbn");
        view_task_pbn->setGeometry(QRect(40, 540, 211, 29));
        view_task_pbn->setStyleSheet(QString::fromUtf8("#view_task_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#view_task_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        add_member_pbn = new QPushButton(team_before);
        add_member_pbn->setObjectName("add_member_pbn");
        add_member_pbn->setGeometry(QRect(780, 540, 211, 29));
        add_member_pbn->setStyleSheet(QString::fromUtf8("#add_member_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#add_member_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        delete_member_pbn = new QPushButton(team_before);
        delete_member_pbn->setObjectName("delete_member_pbn");
        delete_member_pbn->setGeometry(QRect(780, 400, 211, 29));
        delete_member_pbn->setStyleSheet(QString::fromUtf8("#delete_member_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#delete_member_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        view_member_pbn = new QPushButton(team_before);
        view_member_pbn->setObjectName("view_member_pbn");
        view_member_pbn->setGeometry(QRect(400, 460, 211, 29));
        view_member_pbn->setStyleSheet(QString::fromUtf8("#view_member_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#view_member_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        change_member_task_pbn = new QPushButton(team_before);
        change_member_task_pbn->setObjectName("change_member_task_pbn");
        change_member_task_pbn->setGeometry(QRect(30, 110, 211, 29));
        change_member_task_pbn->setStyleSheet(QString::fromUtf8("#change_member_task_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:18px;\n"
"}\n"
"\n"
"#change_member_task_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        view_member_task_pbn = new QPushButton(team_before);
        view_member_task_pbn->setObjectName("view_member_task_pbn");
        view_member_task_pbn->setGeometry(QRect(40, 280, 211, 29));
        view_member_task_pbn->setStyleSheet(QString::fromUtf8("#view_member_task_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:19px;\n"
"}\n"
"\n"
"#view_member_task_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        led_add_mem = new QLineEdit(team_before);
        led_add_mem->setObjectName("led_add_mem");
        led_add_mem->setGeometry(QRect(780, 510, 211, 26));
        led_del_mem = new QLineEdit(team_before);
        led_del_mem->setObjectName("led_del_mem");
        led_del_mem->setGeometry(QRect(780, 370, 211, 26));
        led_del_adm = new QLineEdit(team_before);
        led_del_adm->setObjectName("led_del_adm");
        led_del_adm->setGeometry(QRect(780, 230, 211, 26));
        led_add_adm = new QLineEdit(team_before);
        led_add_adm->setObjectName("led_add_adm");
        led_add_adm->setGeometry(QRect(780, 100, 211, 26));
        led_view_taskteam = new QLineEdit(team_before);
        led_view_taskteam->setObjectName("led_view_taskteam");
        led_view_taskteam->setGeometry(QRect(40, 510, 211, 26));
        ted_view_mem = new QTextEdit(team_before);
        ted_view_mem->setObjectName("ted_view_mem");
        ted_view_mem->setGeometry(QRect(400, 346, 211, 101));
        ted_view_adm = new QTextEdit(team_before);
        ted_view_adm->setObjectName("ted_view_adm");
        ted_view_adm->setGeometry(QRect(400, 120, 211, 101));
        label_2 = new QLabel(team_before);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(1000, 120, 63, 20));
        label_3 = new QLabel(team_before);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(1000, 250, 63, 20));
        led_chan_tasktime = new QLineEdit(team_before);
        led_chan_tasktime->setObjectName("led_chan_tasktime");
        led_chan_tasktime->setGeometry(QRect(40, 340, 211, 26));
        led_chan_taskteam = new QLineEdit(team_before);
        led_chan_taskteam->setObjectName("led_chan_taskteam");
        led_chan_taskteam->setGeometry(QRect(40, 370, 211, 26));
        led_chan_tasktimemem = new QLineEdit(team_before);
        led_chan_tasktimemem->setObjectName("led_chan_tasktimemem");
        led_chan_tasktimemem->setGeometry(QRect(30, 50, 211, 26));
        led_chan_taskmem = new QLineEdit(team_before);
        led_chan_taskmem->setObjectName("led_chan_taskmem");
        led_chan_taskmem->setGeometry(QRect(30, 80, 211, 26));
        led_namechange = new QLineEdit(team_before);
        led_namechange->setObjectName("led_namechange");
        led_namechange->setGeometry(QRect(30, 20, 211, 26));
        led_view_taskmem = new QLineEdit(team_before);
        led_view_taskmem->setObjectName("led_view_taskmem");
        led_view_taskmem->setGeometry(QRect(40, 220, 211, 26));
        led_nameforview = new QLineEdit(team_before);
        led_nameforview->setObjectName("led_nameforview");
        led_nameforview->setGeometry(QRect(40, 250, 211, 26));

        retranslateUi(team_before);

        QMetaObject::connectSlotsByName(team_before);
    } // setupUi

    void retranslateUi(QWidget *team_before)
    {
        team_before->setWindowTitle(QCoreApplication::translate("team_before", "Form", nullptr));
        label->setText(QCoreApplication::translate("team_before", "What do you want to do with the team?", nullptr));
        add_admin_to_team_pbn->setText(QCoreApplication::translate("team_before", "Adding admin to team", nullptr));
        delete_admin_pbn->setText(QCoreApplication::translate("team_before", "Deleting admin", nullptr));
        view_admins_pbn->setText(QCoreApplication::translate("team_before", "Viewing admins", nullptr));
        change_team_task_pbn->setText(QCoreApplication::translate("team_before", "Changing task of team", nullptr));
        view_task_pbn->setText(QCoreApplication::translate("team_before", "Viewing tasks", nullptr));
        add_member_pbn->setText(QCoreApplication::translate("team_before", "Adding member", nullptr));
        delete_member_pbn->setText(QCoreApplication::translate("team_before", "Deleting member", nullptr));
        view_member_pbn->setText(QCoreApplication::translate("team_before", "Viewing members", nullptr));
        change_member_task_pbn->setText(QCoreApplication::translate("team_before", "Changing task of member", nullptr));
        view_member_task_pbn->setText(QCoreApplication::translate("team_before", "Viewing task of member", nullptr));
        label_2->setText(QCoreApplication::translate("team_before", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("team_before", "TextLabel", nullptr));
        led_chan_tasktime->setText(QCoreApplication::translate("team_before", "Enter task", nullptr));
        led_chan_taskteam->setText(QCoreApplication::translate("team_before", "Enter time", nullptr));
        led_chan_tasktimemem->setText(QCoreApplication::translate("team_before", "Enter time", nullptr));
        led_chan_taskmem->setText(QCoreApplication::translate("team_before", "Enter task", nullptr));
    } // retranslateUi

};

namespace Ui {
    class team_before: public Ui_team_before {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAM_BEFORE_H
