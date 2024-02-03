/********************************************************************************
** Form generated from reading UI file 'entrance_organ.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRANCE_ORGAN_H
#define UI_ENTRANCE_ORGAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_entrance_organ
{
public:
    QLabel *label_do;
    QPushButton *pbn_login;
    QPushButton *pbn_removing;
    QPushButton *pbn_sort;
    QPushButton *pbn_filter;
    QPushButton *pbn_making;
    QPushButton *pbn_view;
    QLabel *label;
    QPushButton *pbn_viewOrgan;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QLineEdit *lineEdit;

    void setupUi(QWidget *entrance_organ)
    {
        if (entrance_organ->objectName().isEmpty())
            entrance_organ->setObjectName("entrance_organ");
        entrance_organ->resize(1166, 629);
        entrance_organ->setStyleSheet(QString::fromUtf8("#entrance_organ\n"
"{\n"
"background-color:black;\n"
"}"));
        label_do = new QLabel(entrance_organ);
        label_do->setObjectName("label_do");
        label_do->setGeometry(QRect(420, 300, 351, 41));
        label_do->setStyleSheet(QString::fromUtf8("#label_do\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        pbn_login = new QPushButton(entrance_organ);
        pbn_login->setObjectName("pbn_login");
        pbn_login->setGeometry(QRect(10, 250, 371, 41));
        pbn_login->setStyleSheet(QString::fromUtf8("#pbn_login:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}\n"
"#pbn_login\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));
        pbn_removing = new QPushButton(entrance_organ);
        pbn_removing->setObjectName("pbn_removing");
        pbn_removing->setGeometry(QRect(10, 200, 371, 41));
        pbn_removing->setStyleSheet(QString::fromUtf8("#pbn_removing:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}\n"
"#pbn_removing\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));
        pbn_sort = new QPushButton(entrance_organ);
        pbn_sort->setObjectName("pbn_sort");
        pbn_sort->setGeometry(QRect(790, 570, 361, 41));
        pbn_sort->setStyleSheet(QString::fromUtf8("#pbn_sort:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}\n"
"#pbn_sort\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));
        pbn_filter = new QPushButton(entrance_organ);
        pbn_filter->setObjectName("pbn_filter");
        pbn_filter->setGeometry(QRect(10, 570, 361, 41));
        pbn_filter->setStyleSheet(QString::fromUtf8("#pbn_filter:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}\n"
"#pbn_filter\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));
        pbn_making = new QPushButton(entrance_organ);
        pbn_making->setObjectName("pbn_making");
        pbn_making->setGeometry(QRect(10, 100, 371, 41));
        pbn_making->setStyleSheet(QString::fromUtf8("#pbn_making:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"\n"
"}\n"
"#pbn_making\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));
        pbn_view = new QPushButton(entrance_organ);
        pbn_view->setObjectName("pbn_view");
        pbn_view->setGeometry(QRect(790, 250, 361, 41));
        pbn_view->setStyleSheet(QString::fromUtf8("#pbn_view:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}\n"
"#pbn_view\n"
"{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}"));
        label = new QLabel(entrance_organ);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 151, 21));
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"\n"
"background-color:white;\n"
"border-radius:10px;\n"
"color:black;\n"
"padding:20px;\n"
"font-size:25px;\n"
"}"));
        pbn_viewOrgan = new QPushButton(entrance_organ);
        pbn_viewOrgan->setObjectName("pbn_viewOrgan");
        pbn_viewOrgan->setGeometry(QRect(10, 150, 371, 41));
        pbn_viewOrgan->setStyleSheet(QString::fromUtf8("#pbn_viewOrgan{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#pbn_viewOrgan:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        textEdit = new QTextEdit(entrance_organ);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(790, 60, 361, 181));
        textEdit_2 = new QTextEdit(entrance_organ);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(10, 360, 361, 141));
        textEdit_3 = new QTextEdit(entrance_organ);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(790, 370, 361, 191));
        lineEdit = new QLineEdit(entrance_organ);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 520, 361, 41));

        retranslateUi(entrance_organ);

        QMetaObject::connectSlotsByName(entrance_organ);
    } // setupUi

    void retranslateUi(QWidget *entrance_organ)
    {
        entrance_organ->setWindowTitle(QCoreApplication::translate("entrance_organ", "Form", nullptr));
        label_do->setText(QCoreApplication::translate("entrance_organ", "What do tou want to do?", nullptr));
        pbn_login->setText(QCoreApplication::translate("entrance_organ", "Login to organization", nullptr));
        pbn_removing->setText(QCoreApplication::translate("entrance_organ", "Removing an organization", nullptr));
        pbn_sort->setText(QCoreApplication::translate("entrance_organ", "Sorting organizations", nullptr));
        pbn_filter->setText(QCoreApplication::translate("entrance_organ", "Filtering organizations", nullptr));
        pbn_making->setText(QCoreApplication::translate("entrance_organ", "Making an organization", nullptr));
        pbn_view->setText(QCoreApplication::translate("entrance_organ", "View all organizations", nullptr));
        label->setText(QCoreApplication::translate("entrance_organ", "mm", nullptr));
        pbn_viewOrgan->setText(QCoreApplication::translate("entrance_organ", "Viewing task", nullptr));
    } // retranslateUi

};

namespace Ui {
    class entrance_organ: public Ui_entrance_organ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRANCE_ORGAN_H
