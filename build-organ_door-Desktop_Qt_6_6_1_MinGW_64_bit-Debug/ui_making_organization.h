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
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_4;

    void setupUi(QWidget *making_organization)
    {
        if (making_organization->objectName().isEmpty())
            making_organization->setObjectName("making_organization");
        making_organization->resize(400, 479);
        making_organization->setStyleSheet(QString::fromUtf8("#making_organization\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(making_organization);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 40, 381, 20));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"}"));
        label_2 = new QLabel(making_organization);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 150, 131, 20));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"color:white;\n"
"}"));
        lineEdit = new QLineEdit(making_organization);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(112, 190, 191, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit\n"
"{\n"
"background-color:white;\n"
"}"));
        pushButton = new QPushButton(making_organization);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 440, 83, 29));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"background-color:white;\n"
"color:black;\n"
"}"));
        label_4 = new QLabel(making_organization);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(150, 80, 131, 20));
        label_4->setStyleSheet(QString::fromUtf8("#label_4\n"
"{\n"
"color:white;\n"
"}"));

        retranslateUi(making_organization);

        QMetaObject::connectSlotsByName(making_organization);
    } // setupUi

    void retranslateUi(QWidget *making_organization)
    {
        making_organization->setWindowTitle(QCoreApplication::translate("making_organization", "Form", nullptr));
        label->setText(QCoreApplication::translate("making_organization", "Please define a name and password for the organization", nullptr));
        label_2->setText(QCoreApplication::translate("making_organization", "Organization name:", nullptr));
        pushButton->setText(QCoreApplication::translate("making_organization", "OK", nullptr));
        label_4->setText(QCoreApplication::translate("making_organization", "and then press OK:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class making_organization: public Ui_making_organization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKING_ORGANIZATION_H
