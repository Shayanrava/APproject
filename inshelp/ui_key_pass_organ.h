/********************************************************************************
** Form generated from reading UI file 'key_pass_organ.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEY_PASS_ORGAN_H
#define UI_KEY_PASS_ORGAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_key_pass_organ
{
public:
    QLabel *label;
    QLabel *label_pass;
    QLabel *label_2;
    QLineEdit *led_pass;
    QPushButton *pbn_pass;

    void setupUi(QWidget *key_pass_organ)
    {
        if (key_pass_organ->objectName().isEmpty())
            key_pass_organ->setObjectName("key_pass_organ");
        key_pass_organ->resize(1166, 629);
        key_pass_organ->setStyleSheet(QString::fromUtf8("#key_pass_organ\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(key_pass_organ);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 70, 591, 41));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        label_pass = new QLabel(key_pass_organ);
        label_pass->setObjectName("label_pass");
        label_pass->setGeometry(QRect(310, 290, 271, 41));
        label_pass->setStyleSheet(QString::fromUtf8("#label_pass\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        label_2 = new QLabel(key_pass_organ);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 140, 271, 31));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        led_pass = new QLineEdit(key_pass_organ);
        led_pass->setObjectName("led_pass");
        led_pass->setGeometry(QRect(620, 300, 241, 28));
        led_pass->setStyleSheet(QString::fromUtf8("#led_pass\n"
"{\n"
"background-color:white;\n"
"}"));
        pbn_pass = new QPushButton(key_pass_organ);
        pbn_pass->setObjectName("pbn_pass");
        pbn_pass->setGeometry(QRect(1052, 550, 91, 31));
        pbn_pass->setStyleSheet(QString::fromUtf8("#pbn_pass:hover\n"
"{\n"
"background-color:white;\n"
"order:1px solidgreen; \n"
"}\n"
"#pbn_pass\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));

        retranslateUi(key_pass_organ);

        QMetaObject::connectSlotsByName(key_pass_organ);
    } // setupUi

    void retranslateUi(QWidget *key_pass_organ)
    {
        key_pass_organ->setWindowTitle(QCoreApplication::translate("key_pass_organ", "Form", nullptr));
        label->setText(QCoreApplication::translate("key_pass_organ", " Enter the name of the desired organization", nullptr));
        label_pass->setText(QCoreApplication::translate("key_pass_organ", "Organization name:", nullptr));
        label_2->setText(QCoreApplication::translate("key_pass_organ", "and then perss OK:", nullptr));
        pbn_pass->setText(QCoreApplication::translate("key_pass_organ", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class key_pass_organ: public Ui_key_pass_organ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEY_PASS_ORGAN_H
