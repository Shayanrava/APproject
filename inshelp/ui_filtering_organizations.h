/********************************************************************************
** Form generated from reading UI file 'filtering_organizations.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERING_ORGANIZATIONS_H
#define UI_FILTERING_ORGANIZATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filtering_organizations
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *led_filter;
    QLabel *label_3;
    QPushButton *pbn_filter;

    void setupUi(QWidget *filtering_organizations)
    {
        if (filtering_organizations->objectName().isEmpty())
            filtering_organizations->setObjectName("filtering_organizations");
        filtering_organizations->resize(1166, 629);
        filtering_organizations->setStyleSheet(QString::fromUtf8("#filtering_organizations\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(filtering_organizations);
        label->setObjectName("label");
        label->setGeometry(QRect(460, 60, 321, 51));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        label_2 = new QLabel(filtering_organizations);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 130, 621, 41));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        led_filter = new QLineEdit(filtering_organizations);
        led_filter->setObjectName("led_filter");
        led_filter->setGeometry(QRect(480, 300, 281, 41));
        led_filter->setStyleSheet(QString::fromUtf8("#led_filter\n"
"{\n"
"background-color:white;\n"
"}"));
        label_3 = new QLabel(filtering_organizations);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(420, 200, 381, 31));
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        pbn_filter = new QPushButton(filtering_organizations);
        pbn_filter->setObjectName("pbn_filter");
        pbn_filter->setGeometry(QRect(1050, 550, 91, 31));
        pbn_filter->setStyleSheet(QString::fromUtf8("#pbn_filter:hover\n"
"{\n"
"background-color:white;\n"
"order:1px solidgreen; \n"
"}\n"
"#pbn_filter\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));

        retranslateUi(filtering_organizations);

        QMetaObject::connectSlotsByName(filtering_organizations);
    } // setupUi

    void retranslateUi(QWidget *filtering_organizations)
    {
        filtering_organizations->setWindowTitle(QCoreApplication::translate("filtering_organizations", "Form", nullptr));
        label->setText(QCoreApplication::translate("filtering_organizations", "Enter the desired word:", nullptr));
        label_2->setText(QCoreApplication::translate("filtering_organizations", "(For the entered word, organizations that have", nullptr));
        label_3->setText(QCoreApplication::translate("filtering_organizations", "this name will be displayed.)", nullptr));
        pbn_filter->setText(QCoreApplication::translate("filtering_organizations", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class filtering_organizations: public Ui_filtering_organizations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERING_ORGANIZATIONS_H
