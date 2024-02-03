/********************************************************************************
** Form generated from reading UI file 'viewtask.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWTASK_H
#define UI_VIEWTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewTask
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QTextEdit *textEdit_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *viewTask)
    {
        if (viewTask->objectName().isEmpty())
            viewTask->setObjectName("viewTask");
        viewTask->resize(1166, 627);
        viewTask->setStyleSheet(QString::fromUtf8("#viewTask{\n"
"\n"
"background-color:black;\n"
"}"));
        textEdit = new QTextEdit(viewTask);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(120, 10, 431, 191));
        pushButton = new QPushButton(viewTask);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 420, 111, 29));
        pushButton_3 = new QPushButton(viewTask);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(830, 260, 231, 29));
        textEdit_2 = new QTextEdit(viewTask);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(120, 210, 431, 191));
        lineEdit_2 = new QLineEdit(viewTask);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(830, 180, 231, 26));
        lineEdit_3 = new QLineEdit(viewTask);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(830, 220, 231, 26));
        pushButton_2 = new QPushButton(viewTask);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(-10, 620, 16, 16));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2{\n"
"\n"
"background-color:black;\n"
"}"));
        label = new QLabel(viewTask);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 100, 51, 20));
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"\n"
"color:white;\n"
"}"));
        label_2 = new QLabel(viewTask);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 310, 41, 20));
        label_2->setStyleSheet(QString::fromUtf8("#label_2{\n"
"\n"
"color:white;\n"
"}"));
        label_3 = new QLabel(viewTask);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(780, 180, 41, 20));
        label_3->setStyleSheet(QString::fromUtf8("#label_3{\n"
"\n"
"color:white;\n"
"\n"
"}"));
        label_4 = new QLabel(viewTask);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(770, 220, 51, 20));
        label_4->setStyleSheet(QString::fromUtf8("#label_4{\n"
"\n"
"color:white;\n"
"\n"
"}"));
        pushButton_4 = new QPushButton(viewTask);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(920, 560, 121, 29));
        lineEdit_4 = new QLineEdit(viewTask);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(810, 530, 231, 26));
        lineEdit_5 = new QLineEdit(viewTask);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(810, 500, 231, 26));
        label_5 = new QLabel(viewTask);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(760, 500, 41, 20));
        label_5->setStyleSheet(QString::fromUtf8("#label_5{\n"
"\n"
"color:white;\n"
"\n"
"}"));
        label_6 = new QLabel(viewTask);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(750, 530, 51, 20));
        label_6->setStyleSheet(QString::fromUtf8("#label_6{\n"
"\n"
"color:white;\n"
"\n"
"}"));

        retranslateUi(viewTask);

        QMetaObject::connectSlotsByName(viewTask);
    } // setupUi

    void retranslateUi(QWidget *viewTask)
    {
        viewTask->setWindowTitle(QCoreApplication::translate("viewTask", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("viewTask", "show tasks", nullptr));
        pushButton_3->setText(QCoreApplication::translate("viewTask", "archive", nullptr));
        pushButton_2->setText(QCoreApplication::translate("viewTask", "show archives", nullptr));
        label->setText(QCoreApplication::translate("viewTask", "archive:", nullptr));
        label_2->setText(QCoreApplication::translate("viewTask", "tasks:", nullptr));
        label_3->setText(QCoreApplication::translate("viewTask", "organ:", nullptr));
        label_4->setText(QCoreApplication::translate("viewTask", "project:", nullptr));
        pushButton_4->setText(QCoreApplication::translate("viewTask", "go to comment", nullptr));
        label_5->setText(QCoreApplication::translate("viewTask", "organ:", nullptr));
        label_6->setText(QCoreApplication::translate("viewTask", "project:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewTask: public Ui_viewTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWTASK_H
