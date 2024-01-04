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
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *key_pass_organ)
    {
        if (key_pass_organ->objectName().isEmpty())
            key_pass_organ->setObjectName("key_pass_organ");
        key_pass_organ->resize(400, 489);
        key_pass_organ->setStyleSheet(QString::fromUtf8("#key_pass_organ\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(key_pass_organ);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 50, 391, 20));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"}"));
        label_2 = new QLabel(key_pass_organ);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 110, 131, 20));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"color:white;\n"
"}"));
        label_3 = new QLabel(key_pass_organ);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 190, 131, 20));
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"color:white;\n"
"}"));
        lineEdit = new QLineEdit(key_pass_organ);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 220, 201, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit\n"
"{\n"
"background-color:white;\n"
"}"));
        pushButton = new QPushButton(key_pass_organ);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 450, 83, 29));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"background-color:white;\n"
"color:black;\n"
"}"));

        retranslateUi(key_pass_organ);

        QMetaObject::connectSlotsByName(key_pass_organ);
    } // setupUi

    void retranslateUi(QWidget *key_pass_organ)
    {
        key_pass_organ->setWindowTitle(QCoreApplication::translate("key_pass_organ", "Form", nullptr));
        label->setText(QCoreApplication::translate("key_pass_organ", " Enter the name and password of the desired organization", nullptr));
        label_2->setText(QCoreApplication::translate("key_pass_organ", "and then perss OK:", nullptr));
        label_3->setText(QCoreApplication::translate("key_pass_organ", "Organization name:", nullptr));
        pushButton->setText(QCoreApplication::translate("key_pass_organ", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class key_pass_organ: public Ui_key_pass_organ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEY_PASS_ORGAN_H
