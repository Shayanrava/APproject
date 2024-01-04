/********************************************************************************
** Form generated from reading UI file 'making_decision_for_organ.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKING_DECISION_FOR_ORGAN_H
#define UI_MAKING_DECISION_FOR_ORGAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_making_decision_for_organ
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label;

    void setupUi(QWidget *making_decision_for_organ)
    {
        if (making_decision_for_organ->objectName().isEmpty())
            making_decision_for_organ->setObjectName("making_decision_for_organ");
        making_decision_for_organ->resize(400, 528);
        making_decision_for_organ->setStyleSheet(QString::fromUtf8("making_decision_for_organ\n"
"{\n"
"background-color:black;\n"
"}"));
        pushButton = new QPushButton(making_decision_for_organ);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 20, 321, 29));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(making_decision_for_organ);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 80, 321, 29));
        pushButton_3 = new QPushButton(making_decision_for_organ);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(40, 140, 321, 29));
        pushButton_4 = new QPushButton(making_decision_for_organ);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(52, 320, 311, 29));
        pushButton_5 = new QPushButton(making_decision_for_organ);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(52, 380, 311, 29));
        pushButton_6 = new QPushButton(making_decision_for_organ);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(42, 440, 331, 29));
        label = new QLabel(making_decision_for_organ);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 230, 321, 20));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"}"));

        retranslateUi(making_decision_for_organ);

        QMetaObject::connectSlotsByName(making_decision_for_organ);
    } // setupUi

    void retranslateUi(QWidget *making_decision_for_organ)
    {
        making_decision_for_organ->setWindowTitle(QCoreApplication::translate("making_decision_for_organ", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("making_decision_for_organ", "Add people to the organization", nullptr));
        pushButton_2->setText(QCoreApplication::translate("making_decision_for_organ", "Removing people from the organization", nullptr));
        pushButton_3->setText(QCoreApplication::translate("making_decision_for_organ", "Changing the role of people in the organization", nullptr));
        pushButton_4->setText(QCoreApplication::translate("making_decision_for_organ", "Edit organization profile", nullptr));
        pushButton_5->setText(QCoreApplication::translate("making_decision_for_organ", "Creating a team in the organization", nullptr));
        pushButton_6->setText(QCoreApplication::translate("making_decision_for_organ", "Viewing the member teams in the organization", nullptr));
        label->setText(QCoreApplication::translate("making_decision_for_organ", "What do you want to do with this organization?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class making_decision_for_organ: public Ui_making_decision_for_organ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKING_DECISION_FOR_ORGAN_H
