/********************************************************************************
** Form generated from reading UI file 'delete_team_before.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_TEAM_BEFORE_H
#define UI_DELETE_TEAM_BEFORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delete_team_before
{
public:
    QLabel *label;
    QLineEdit *delete_team_before_led;
    QPushButton *delete_team_before_pbn;

    void setupUi(QWidget *delete_team_before)
    {
        if (delete_team_before->objectName().isEmpty())
            delete_team_before->setObjectName("delete_team_before");
        delete_team_before->resize(1166, 629);
        delete_team_before->setStyleSheet(QString::fromUtf8("#delete_team_before\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(delete_team_before);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 50, 641, 51));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        delete_team_before_led = new QLineEdit(delete_team_before);
        delete_team_before_led->setObjectName("delete_team_before_led");
        delete_team_before_led->setGeometry(QRect(460, 200, 311, 28));
        delete_team_before_led->setStyleSheet(QString::fromUtf8("#delete_team_before_led\n"
"{\n"
"background-color:white;\n"
"}"));
        delete_team_before_pbn = new QPushButton(delete_team_before);
        delete_team_before_pbn->setObjectName("delete_team_before_pbn");
        delete_team_before_pbn->setGeometry(QRect(1050, 550, 91, 31));
        delete_team_before_pbn->setStyleSheet(QString::fromUtf8("#delete_team_before_pbn:hover\n"
"{\n"
"background-color:white;\n"
"order:1px solidgreen; \n"
"}\n"
"#delete_team_before_pbn\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));

        retranslateUi(delete_team_before);

        QMetaObject::connectSlotsByName(delete_team_before);
    } // setupUi

    void retranslateUi(QWidget *delete_team_before)
    {
        delete_team_before->setWindowTitle(QCoreApplication::translate("delete_team_before", "Form", nullptr));
        label->setText(QCoreApplication::translate("delete_team_before", "Enter the name of the team you want to delete:", nullptr));
        delete_team_before_pbn->setText(QCoreApplication::translate("delete_team_before", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete_team_before: public Ui_delete_team_before {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_TEAM_BEFORE_H
