/********************************************************************************
** Form generated from reading UI file 'add_people.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_PEOPLE_H
#define UI_ADD_PEOPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_people
{
public:
    QLabel *label_2;
    QLineEdit *led_addPepole;
    QPushButton *pbn_addPepole;
    QLabel *label;

    void setupUi(QWidget *add_people)
    {
        if (add_people->objectName().isEmpty())
            add_people->setObjectName("add_people");
        add_people->resize(672, 323);
        add_people->setStyleSheet(QString::fromUtf8("#add_people\n"
"{\n"
"background-color:black;\n"
"}"));
        label_2 = new QLabel(add_people);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 100, 191, 20));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"color:white;\n"
"}"));
        led_addPepole = new QLineEdit(add_people);
        led_addPepole->setObjectName("led_addPepole");
        led_addPepole->setGeometry(QRect(240, 160, 231, 28));
        led_addPepole->setStyleSheet(QString::fromUtf8("#led_addPepole\n"
"{\n"
"background-color:white;\n"
"}"));
        pbn_addPepole = new QPushButton(add_people);
        pbn_addPepole->setObjectName("pbn_addPepole");
        pbn_addPepole->setGeometry(QRect(560, 280, 83, 29));
        pbn_addPepole->setStyleSheet(QString::fromUtf8("#pbn_addPepole:hover\n"
"{\n"
"background-color:white;\n"
"order:1px solidgreen; \n"
"}\n"
"#pbn_addPepole\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"}"));
        label = new QLabel(add_people);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 70, 271, 20));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"}"));

        retranslateUi(add_people);

        QMetaObject::connectSlotsByName(add_people);
    } // setupUi

    void retranslateUi(QWidget *add_people)
    {
        add_people->setWindowTitle(QCoreApplication::translate("add_people", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("add_people", "to add to the organization:", nullptr));
        pbn_addPepole->setText(QCoreApplication::translate("add_people", "OK", nullptr));
        label->setText(QCoreApplication::translate("add_people", "Enter the name of the person you want", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_people: public Ui_add_people {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_PEOPLE_H
