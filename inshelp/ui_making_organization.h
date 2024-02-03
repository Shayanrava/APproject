/********************************************************************************
** Form generated from reading UI file 'making_organization.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKING_ORGANIZATION_H
#define UI_MAKING_ORGANIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_making_organization
{
public:
    QLabel *label_;
    QLabel *label_2;
    QPushButton *pbn_making;
    QLabel *label_organName;
    QLineEdit *led_making;

    void setupUi(QWidget *making_organization)
    {
        if (making_organization->objectName().isEmpty())
            making_organization->setObjectName("making_organization");
        making_organization->resize(1166, 629);
        making_organization->setStyleSheet(QString::fromUtf8("#making_organization\n"
"{\n"
"background-color:black;\n"
"}"));
        label_ = new QLabel(making_organization);
        label_->setObjectName("label_");
        label_->setGeometry(QRect(340, 90, 561, 41));
        label_->setStyleSheet(QString::fromUtf8("#label_\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        label_2 = new QLabel(making_organization);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(510, 160, 271, 41));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        pbn_making = new QPushButton(making_organization);
        pbn_making->setObjectName("pbn_making");
        pbn_making->setGeometry(QRect(1040, 550, 101, 31));
        pbn_making->setStyleSheet(QString::fromUtf8("#pbn_making:hover\n"
"{\n"
"background-color:white;\n"
"order:1px solidgreen; \n"
"}\n"
"#pbn_making\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));
        label_organName = new QLabel(making_organization);
        label_organName->setObjectName("label_organName");
        label_organName->setGeometry(QRect(300, 280, 271, 51));
        label_organName->setStyleSheet(QString::fromUtf8("#label_organName\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        led_making = new QLineEdit(making_organization);
        led_making->setObjectName("led_making");
        led_making->setGeometry(QRect(610, 290, 241, 31));
        led_making->setStyleSheet(QString::fromUtf8("#led_making\n"
"{\n"
"background-color:white;\n"
"}"));

        retranslateUi(making_organization);

        QMetaObject::connectSlotsByName(making_organization);
    } // setupUi

    void retranslateUi(QWidget *making_organization)
    {
        making_organization->setWindowTitle(QCoreApplication::translate("making_organization", "Form", nullptr));
        label_->setText(QCoreApplication::translate("making_organization", "Please define a name for the organization", nullptr));
        label_2->setText(QCoreApplication::translate("making_organization", "and then press OK:", nullptr));
        pbn_making->setText(QCoreApplication::translate("making_organization", "OK", nullptr));
        label_organName->setText(QCoreApplication::translate("making_organization", "Organization name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class making_organization: public Ui_making_organization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKING_ORGANIZATION_H
