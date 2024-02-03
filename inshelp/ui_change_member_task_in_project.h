/********************************************************************************
** Form generated from reading UI file 'change_member_task_in_project.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_MEMBER_TASK_IN_PROJECT_H
#define UI_CHANGE_MEMBER_TASK_IN_PROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change_member_task_in_project
{
public:
    QLabel *label;
    QLineEdit *change_task_led;
    QPushButton *change_task_pbn;

    void setupUi(QWidget *change_member_task_in_project)
    {
        if (change_member_task_in_project->objectName().isEmpty())
            change_member_task_in_project->setObjectName("change_member_task_in_project");
        change_member_task_in_project->resize(1166, 629);
        change_member_task_in_project->setStyleSheet(QString::fromUtf8("#change_member_task_in_project\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(change_member_task_in_project);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 50, 461, 31));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        change_task_led = new QLineEdit(change_member_task_in_project);
        change_task_led->setObjectName("change_task_led");
        change_task_led->setGeometry(QRect(460, 180, 251, 28));
        change_task_led->setStyleSheet(QString::fromUtf8("#change_task_led\n"
"{\n"
"background-color:white;\n"
"}"));
        change_task_pbn = new QPushButton(change_member_task_in_project);
        change_task_pbn->setObjectName("change_task_pbn");
        change_task_pbn->setGeometry(QRect(1050, 550, 91, 31));
        change_task_pbn->setStyleSheet(QString::fromUtf8("#change_task_pbn:hover\n"
"{\n"
"background-color:white;\n"
"order:1px solidgreen; \n"
"}\n"
"#change_task_pbn\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));

        retranslateUi(change_member_task_in_project);

        QMetaObject::connectSlotsByName(change_member_task_in_project);
    } // setupUi

    void retranslateUi(QWidget *change_member_task_in_project)
    {
        change_member_task_in_project->setWindowTitle(QCoreApplication::translate("change_member_task_in_project", "Form", nullptr));
        label->setText(QCoreApplication::translate("change_member_task_in_project", "Enter the desired member's name:", nullptr));
        change_task_pbn->setText(QCoreApplication::translate("change_member_task_in_project", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_member_task_in_project: public Ui_change_member_task_in_project {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_MEMBER_TASK_IN_PROJECT_H
