/********************************************************************************
** Form generated from reading UI file 'project_before.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_BEFORE_H
#define UI_PROJECT_BEFORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_project_before
{
public:
    QLabel *label;
    QPushButton *change_task_person_pbn;
    QPushButton *view_task_person_pbn;
    QPushButton *add_admin_pbn;
    QPushButton *delete_admin_pbn;
    QPushButton *view_admin_pbn;
    QPushButton *add_member_pbn;
    QPushButton *delete_member_pbn;
    QPushButton *view_member_pbn;
    QPushButton *set_project_task_pbn;
    QPushButton *view_project_task_pbn;
    QPushButton *change_project_status_pbn;
    QPushButton *view_project_status_pbn;
    QLineEdit *led_add_adm;
    QLineEdit *led_del_adm;
    QLineEdit *led_add_mem;
    QLineEdit *led_del_mem;
    QLineEdit *led_set_taskpro;
    QLineEdit *led_view_taskpro;
    QLineEdit *led_chang_status;
    QLineEdit *led_view_status;
    QLineEdit *led_chan_taskmem;
    QLineEdit *led_view_taskmem;
    QTextEdit *ted_view_adm;
    QTextEdit *ted_view_mem;
    QLabel *lbldel;
    QLabel *lbladd;
    QLineEdit *led_set_tasktimepro;
    QLineEdit *led_chan_tasktimemem;
    QLineEdit *led_namechange;
    QLineEdit *led_nameforview;

    void setupUi(QWidget *project_before)
    {
        if (project_before->objectName().isEmpty())
            project_before->setObjectName("project_before");
        project_before->resize(1166, 629);
        project_before->setStyleSheet(QString::fromUtf8("#project_before\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(project_before);
        label->setObjectName("label");
        label->setGeometry(QRect(390, 270, 321, 20));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"}"));
        change_task_person_pbn = new QPushButton(project_before);
        change_task_person_pbn->setObjectName("change_task_person_pbn");
        change_task_person_pbn->setGeometry(QRect(30, 110, 301, 29));
        change_task_person_pbn->setStyleSheet(QString::fromUtf8("#change_task_person_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:20px;\n"
"}\n"
"\n"
"#change_task_person_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        view_task_person_pbn = new QPushButton(project_before);
        view_task_person_pbn->setObjectName("view_task_person_pbn");
        view_task_person_pbn->setGeometry(QRect(770, 110, 291, 29));
        view_task_person_pbn->setStyleSheet(QString::fromUtf8("#view_task_person_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:20px;\n"
"}\n"
"\n"
"#view_task_person_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        add_admin_pbn = new QPushButton(project_before);
        add_admin_pbn->setObjectName("add_admin_pbn");
        add_admin_pbn->setGeometry(QRect(30, 530, 251, 29));
        add_admin_pbn->setStyleSheet(QString::fromUtf8("#add_admin_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"\n"
"}\n"
"\n"
"#add_admin_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        delete_admin_pbn = new QPushButton(project_before);
        delete_admin_pbn->setObjectName("delete_admin_pbn");
        delete_admin_pbn->setGeometry(QRect(30, 420, 251, 29));
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
        view_admin_pbn = new QPushButton(project_before);
        view_admin_pbn->setObjectName("view_admin_pbn");
        view_admin_pbn->setGeometry(QRect(420, 530, 251, 29));
        view_admin_pbn->setStyleSheet(QString::fromUtf8("#view_admin_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#view_admin_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        add_member_pbn = new QPushButton(project_before);
        add_member_pbn->setObjectName("add_member_pbn");
        add_member_pbn->setGeometry(QRect(30, 310, 251, 29));
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
        delete_member_pbn = new QPushButton(project_before);
        delete_member_pbn->setObjectName("delete_member_pbn");
        delete_member_pbn->setGeometry(QRect(30, 210, 251, 29));
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
        view_member_pbn = new QPushButton(project_before);
        view_member_pbn->setObjectName("view_member_pbn");
        view_member_pbn->setGeometry(QRect(420, 180, 251, 29));
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
        set_project_task_pbn = new QPushButton(project_before);
        set_project_task_pbn->setObjectName("set_project_task_pbn");
        set_project_task_pbn->setGeometry(QRect(810, 550, 251, 29));
        set_project_task_pbn->setStyleSheet(QString::fromUtf8("#set_project_task_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:24px;\n"
"}\n"
"\n"
"#set_project_task_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        view_project_task_pbn = new QPushButton(project_before);
        view_project_task_pbn->setObjectName("view_project_task_pbn");
        view_project_task_pbn->setGeometry(QRect(810, 420, 251, 29));
        view_project_task_pbn->setStyleSheet(QString::fromUtf8("#view_project_task_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:24px;\n"
"}\n"
"\n"
"#view_project_task_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        change_project_status_pbn = new QPushButton(project_before);
        change_project_status_pbn->setObjectName("change_project_status_pbn");
        change_project_status_pbn->setGeometry(QRect(810, 310, 251, 29));
        change_project_status_pbn->setStyleSheet(QString::fromUtf8("#change_project_status_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:20px;\n"
"}\n"
"\n"
"#change_project_status_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        view_project_status_pbn = new QPushButton(project_before);
        view_project_status_pbn->setObjectName("view_project_status_pbn");
        view_project_status_pbn->setGeometry(QRect(810, 210, 251, 29));
        view_project_status_pbn->setStyleSheet(QString::fromUtf8("#view_project_status_pbn{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:22px;\n"
"}\n"
"\n"
"#view_project_status_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        led_add_adm = new QLineEdit(project_before);
        led_add_adm->setObjectName("led_add_adm");
        led_add_adm->setGeometry(QRect(30, 500, 251, 26));
        led_del_adm = new QLineEdit(project_before);
        led_del_adm->setObjectName("led_del_adm");
        led_del_adm->setGeometry(QRect(30, 390, 251, 26));
        led_add_mem = new QLineEdit(project_before);
        led_add_mem->setObjectName("led_add_mem");
        led_add_mem->setGeometry(QRect(30, 280, 251, 26));
        led_del_mem = new QLineEdit(project_before);
        led_del_mem->setObjectName("led_del_mem");
        led_del_mem->setGeometry(QRect(30, 180, 251, 26));
        led_set_taskpro = new QLineEdit(project_before);
        led_set_taskpro->setObjectName("led_set_taskpro");
        led_set_taskpro->setGeometry(QRect(810, 520, 251, 26));
        led_view_taskpro = new QLineEdit(project_before);
        led_view_taskpro->setObjectName("led_view_taskpro");
        led_view_taskpro->setGeometry(QRect(810, 390, 251, 26));
        led_chang_status = new QLineEdit(project_before);
        led_chang_status->setObjectName("led_chang_status");
        led_chang_status->setGeometry(QRect(810, 280, 251, 26));
        led_view_status = new QLineEdit(project_before);
        led_view_status->setObjectName("led_view_status");
        led_view_status->setGeometry(QRect(810, 180, 251, 26));
        led_chan_taskmem = new QLineEdit(project_before);
        led_chan_taskmem->setObjectName("led_chan_taskmem");
        led_chan_taskmem->setGeometry(QRect(30, 80, 301, 26));
        led_view_taskmem = new QLineEdit(project_before);
        led_view_taskmem->setObjectName("led_view_taskmem");
        led_view_taskmem->setGeometry(QRect(770, 50, 291, 26));
        ted_view_adm = new QTextEdit(project_before);
        ted_view_adm->setObjectName("ted_view_adm");
        ted_view_adm->setGeometry(QRect(420, 390, 251, 131));
        ted_view_mem = new QTextEdit(project_before);
        ted_view_mem->setObjectName("ted_view_mem");
        ted_view_mem->setGeometry(QRect(420, 40, 251, 131));
        lbldel = new QLabel(project_before);
        lbldel->setObjectName("lbldel");
        lbldel->setGeometry(QRect(290, 420, 63, 20));
        lbldel->setStyleSheet(QString::fromUtf8("#lbldel{\n"
"background-color:white;\n"
"}"));
        lbladd = new QLabel(project_before);
        lbladd->setObjectName("lbladd");
        lbladd->setGeometry(QRect(290, 530, 63, 20));
        lbladd->setStyleSheet(QString::fromUtf8("#lbladd{\n"
"background-color:white;\n"
"}"));
        led_set_tasktimepro = new QLineEdit(project_before);
        led_set_tasktimepro->setObjectName("led_set_tasktimepro");
        led_set_tasktimepro->setGeometry(QRect(810, 490, 251, 26));
        led_chan_tasktimemem = new QLineEdit(project_before);
        led_chan_tasktimemem->setObjectName("led_chan_tasktimemem");
        led_chan_tasktimemem->setGeometry(QRect(30, 50, 301, 26));
        led_namechange = new QLineEdit(project_before);
        led_namechange->setObjectName("led_namechange");
        led_namechange->setGeometry(QRect(30, 20, 301, 26));
        led_nameforview = new QLineEdit(project_before);
        led_nameforview->setObjectName("led_nameforview");
        led_nameforview->setGeometry(QRect(770, 80, 291, 26));

        retranslateUi(project_before);

        QMetaObject::connectSlotsByName(project_before);
    } // setupUi

    void retranslateUi(QWidget *project_before)
    {
        project_before->setWindowTitle(QCoreApplication::translate("project_before", "Form", nullptr));
        label->setText(QCoreApplication::translate("project_before", "What do you want to do related to the project?", nullptr));
        change_task_person_pbn->setText(QCoreApplication::translate("project_before", "Changing the task of the member", nullptr));
        view_task_person_pbn->setText(QCoreApplication::translate("project_before", "Viewing task of member", nullptr));
        add_admin_pbn->setText(QCoreApplication::translate("project_before", "Adding admin", nullptr));
        delete_admin_pbn->setText(QCoreApplication::translate("project_before", "Deleting admin", nullptr));
        view_admin_pbn->setText(QCoreApplication::translate("project_before", "Viewing admins", nullptr));
        add_member_pbn->setText(QCoreApplication::translate("project_before", "Adding member", nullptr));
        delete_member_pbn->setText(QCoreApplication::translate("project_before", "Deleting member", nullptr));
        view_member_pbn->setText(QCoreApplication::translate("project_before", "Viewing member", nullptr));
        set_project_task_pbn->setText(QCoreApplication::translate("project_before", "Setting task for project", nullptr));
        view_project_task_pbn->setText(QCoreApplication::translate("project_before", "Viewing task of project", nullptr));
        change_project_status_pbn->setText(QCoreApplication::translate("project_before", "Changing status of project", nullptr));
        view_project_status_pbn->setText(QCoreApplication::translate("project_before", "Viewing status of project", nullptr));
        led_set_taskpro->setText(QCoreApplication::translate("project_before", "Enter task", nullptr));
        led_chan_taskmem->setText(QCoreApplication::translate("project_before", "Enter task", nullptr));
        lbldel->setText(QCoreApplication::translate("project_before", "TextLabel", nullptr));
        lbladd->setText(QCoreApplication::translate("project_before", "TextLabel", nullptr));
        led_set_tasktimepro->setText(QCoreApplication::translate("project_before", "Enter time", nullptr));
        led_chan_tasktimemem->setText(QCoreApplication::translate("project_before", "Enter time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class project_before: public Ui_project_before {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_BEFORE_H
