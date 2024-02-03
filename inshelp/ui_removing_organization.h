/********************************************************************************
** Form generated from reading UI file 'removing_organization.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVING_ORGANIZATION_H
#define UI_REMOVING_ORGANIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_removing_organization
{
public:
    QPushButton *pbn_remove;
    QLineEdit *led_remove;
    QLabel *labe_remove_name;
    QLabel *remov_label;

    void setupUi(QWidget *removing_organization)
    {
        if (removing_organization->objectName().isEmpty())
            removing_organization->setObjectName("removing_organization");
        removing_organization->resize(1166, 629);
        removing_organization->setStyleSheet(QString::fromUtf8("#removing_organization\n"
"{\n"
"background-color:black;\n"
"}"));
        pbn_remove = new QPushButton(removing_organization);
        pbn_remove->setObjectName("pbn_remove");
        pbn_remove->setGeometry(QRect(1042, 550, 91, 31));
        pbn_remove->setStyleSheet(QString::fromUtf8("#pbn_remove:hover\n"
"{\n"
"background-color:white;\n"
"order:1px solidgreen; \n"
"}\n"
"#pbn_remove\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));
        led_remove = new QLineEdit(removing_organization);
        led_remove->setObjectName("led_remove");
        led_remove->setGeometry(QRect(640, 277, 241, 31));
        led_remove->setStyleSheet(QString::fromUtf8("#led_remove\n"
"{\n"
"background-color:white;\n"
"}"));
        labe_remove_name = new QLabel(removing_organization);
        labe_remove_name->setObjectName("labe_remove_name");
        labe_remove_name->setGeometry(QRect(350, 260, 271, 51));
        labe_remove_name->setStyleSheet(QString::fromUtf8("#labe_remove_name\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        remov_label = new QLabel(removing_organization);
        remov_label->setObjectName("remov_label");
        remov_label->setGeometry(QRect(230, 50, 751, 91));
        remov_label->setStyleSheet(QString::fromUtf8("#remov_label\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));

        retranslateUi(removing_organization);

        QMetaObject::connectSlotsByName(removing_organization);
    } // setupUi

    void retranslateUi(QWidget *removing_organization)
    {
        removing_organization->setWindowTitle(QCoreApplication::translate("removing_organization", "Form", nullptr));
        pbn_remove->setText(QCoreApplication::translate("removing_organization", "OK", nullptr));
        labe_remove_name->setText(QCoreApplication::translate("removing_organization", "Organization name:", nullptr));
        remov_label->setText(QCoreApplication::translate("removing_organization", "Enter the name of the organization you want to delete:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class removing_organization: public Ui_removing_organization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVING_ORGANIZATION_H
