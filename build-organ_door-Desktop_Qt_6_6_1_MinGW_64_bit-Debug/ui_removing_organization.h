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
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *removing_organization)
    {
        if (removing_organization->objectName().isEmpty())
            removing_organization->setObjectName("removing_organization");
        removing_organization->resize(400, 521);
        removing_organization->setStyleSheet(QString::fromUtf8("#removing_organization\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(removing_organization);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 90, 361, 20));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"}"));
        lineEdit = new QLineEdit(removing_organization);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 200, 221, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit\n"
"{\n"
"background-color:white;\n"
"}"));
        pushButton = new QPushButton(removing_organization);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 450, 83, 29));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"color:black;\n"
"background-color:white;\n"
"}"));

        retranslateUi(removing_organization);

        QMetaObject::connectSlotsByName(removing_organization);
    } // setupUi

    void retranslateUi(QWidget *removing_organization)
    {
        removing_organization->setWindowTitle(QCoreApplication::translate("removing_organization", "Form", nullptr));
        label->setText(QCoreApplication::translate("removing_organization", "Enter the name of the organization you want to delete:", nullptr));
        pushButton->setText(QCoreApplication::translate("removing_organization", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class removing_organization: public Ui_removing_organization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVING_ORGANIZATION_H
