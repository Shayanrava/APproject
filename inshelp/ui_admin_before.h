/********************************************************************************
** Form generated from reading UI file 'admin_before.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_BEFORE_H
#define UI_ADMIN_BEFORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_before
{
public:
    QLabel *label;
    QPushButton *add_admin_pbn;
    QPushButton *delete_admin_pbn;
    QPushButton *view_admins_pbn;
    QLineEdit *led_add;
    QLineEdit *led_remove;
    QTextEdit *ted_show;

    void setupUi(QWidget *admin_before)
    {
        if (admin_before->objectName().isEmpty())
            admin_before->setObjectName("admin_before");
        admin_before->resize(1166, 629);
        admin_before->setStyleSheet(QString::fromUtf8("#admin_before\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(admin_before);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 30, 571, 31));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        add_admin_pbn = new QPushButton(admin_before);
        add_admin_pbn->setObjectName("add_admin_pbn");
        add_admin_pbn->setGeometry(QRect(450, 160, 311, 29));
        add_admin_pbn->setStyleSheet(QString::fromUtf8("#add_admin_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}\n"
"#add_admin_pbn\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));
        delete_admin_pbn = new QPushButton(admin_before);
        delete_admin_pbn->setObjectName("delete_admin_pbn");
        delete_admin_pbn->setGeometry(QRect(450, 280, 311, 29));
        delete_admin_pbn->setStyleSheet(QString::fromUtf8("#delete_admin_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}\n"
"#delete_admin_pbn\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));
        view_admins_pbn = new QPushButton(admin_before);
        view_admins_pbn->setObjectName("view_admins_pbn");
        view_admins_pbn->setGeometry(QRect(450, 530, 311, 29));
        view_admins_pbn->setStyleSheet(QString::fromUtf8("#view_admins_pbn:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}\n"
"#view_admins_pbn\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));
        led_add = new QLineEdit(admin_before);
        led_add->setObjectName("led_add");
        led_add->setGeometry(QRect(450, 120, 311, 26));
        led_remove = new QLineEdit(admin_before);
        led_remove->setObjectName("led_remove");
        led_remove->setGeometry(QRect(450, 240, 311, 26));
        ted_show = new QTextEdit(admin_before);
        ted_show->setObjectName("ted_show");
        ted_show->setGeometry(QRect(460, 370, 301, 141));

        retranslateUi(admin_before);

        QMetaObject::connectSlotsByName(admin_before);
    } // setupUi

    void retranslateUi(QWidget *admin_before)
    {
        admin_before->setWindowTitle(QCoreApplication::translate("admin_before", "Form", nullptr));
        label->setText(QCoreApplication::translate("admin_before", "What do you want to do with the admins?", nullptr));
        add_admin_pbn->setText(QCoreApplication::translate("admin_before", "Add admin", nullptr));
        delete_admin_pbn->setText(QCoreApplication::translate("admin_before", "Delete admin", nullptr));
        view_admins_pbn->setText(QCoreApplication::translate("admin_before", "View admins", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_before: public Ui_admin_before {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_BEFORE_H
