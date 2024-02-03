/********************************************************************************
** Form generated from reading UI file 'key_team_before.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEY_TEAM_BEFORE_H
#define UI_KEY_TEAM_BEFORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_key_team_before
{
public:
    QLabel *label;
    QLineEdit *key_team_before_led;
    QPushButton *key_team_before_pbn;

    void setupUi(QWidget *key_team_before)
    {
        if (key_team_before->objectName().isEmpty())
            key_team_before->setObjectName("key_team_before");
        key_team_before->resize(1166, 629);
        key_team_before->setStyleSheet(QString::fromUtf8("#key_team_before\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(key_team_before);
        label->setObjectName("label");
        label->setGeometry(QRect(380, 50, 401, 41));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        key_team_before_led = new QLineEdit(key_team_before);
        key_team_before_led->setObjectName("key_team_before_led");
        key_team_before_led->setGeometry(QRect(440, 150, 291, 28));
        key_team_before_led->setStyleSheet(QString::fromUtf8("#key_team_before_led\n"
"{\n"
"background-color:white;\n"
"}"));
        key_team_before_pbn = new QPushButton(key_team_before);
        key_team_before_pbn->setObjectName("key_team_before_pbn");
        key_team_before_pbn->setGeometry(QRect(1050, 550, 91, 31));
        key_team_before_pbn->setStyleSheet(QString::fromUtf8("#key_team_before_pbn:hover\n"
"{\n"
"background-color:white;\n"
"order:1px solidgreen; \n"
"}\n"
"#key_team_before_pbn\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));

        retranslateUi(key_team_before);

        QMetaObject::connectSlotsByName(key_team_before);
    } // setupUi

    void retranslateUi(QWidget *key_team_before)
    {
        key_team_before->setWindowTitle(QCoreApplication::translate("key_team_before", "Form", nullptr));
        label->setText(QCoreApplication::translate("key_team_before", "Enter the desired team name:", nullptr));
        key_team_before_pbn->setText(QCoreApplication::translate("key_team_before", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class key_team_before: public Ui_key_team_before {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEY_TEAM_BEFORE_H
