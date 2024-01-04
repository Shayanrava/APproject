/********************************************************************************
** Form generated from reading UI file 'organization_entrance.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORGANIZATION_ENTRANCE_H
#define UI_ORGANIZATION_ENTRANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_organization_entrance
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label;

    void setupUi(QWidget *organization_entrance)
    {
        if (organization_entrance->objectName().isEmpty())
            organization_entrance->setObjectName("organization_entrance");
        organization_entrance->resize(400, 477);
        organization_entrance->setStyleSheet(QString::fromUtf8("organization_entrance{\n"
"background-color:black;\n"
"}"));
        pushButton = new QPushButton(organization_entrance);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(32, 20, 341, 29));
        pushButton_2 = new QPushButton(organization_entrance);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 80, 341, 29));
        pushButton_3 = new QPushButton(organization_entrance);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 140, 341, 29));
        pushButton_4 = new QPushButton(organization_entrance);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 290, 341, 29));
        pushButton_5 = new QPushButton(organization_entrance);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 350, 341, 29));
        pushButton_6 = new QPushButton(organization_entrance);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(32, 410, 341, 29));
        label = new QLabel(organization_entrance);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 220, 171, 20));
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"color:white\n"
"}"));

        retranslateUi(organization_entrance);

        QMetaObject::connectSlotsByName(organization_entrance);
    } // setupUi

    void retranslateUi(QWidget *organization_entrance)
    {
        organization_entrance->setWindowTitle(QCoreApplication::translate("organization_entrance", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("organization_entrance", "Making an organization", nullptr));
        pushButton_2->setText(QCoreApplication::translate("organization_entrance", "Log in to organization", nullptr));
        pushButton_3->setText(QCoreApplication::translate("organization_entrance", "Removing an organization", nullptr));
        pushButton_4->setText(QCoreApplication::translate("organization_entrance", "View all organizations", nullptr));
        pushButton_5->setText(QCoreApplication::translate("organization_entrance", "Filtering organizations", nullptr));
        pushButton_6->setText(QCoreApplication::translate("organization_entrance", "Sorting organizations", nullptr));
        label->setText(QCoreApplication::translate("organization_entrance", "What do you want to do?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class organization_entrance: public Ui_organization_entrance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGANIZATION_ENTRANCE_H
