/********************************************************************************
** Form generated from reading UI file 'showcomment.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWCOMMENT_H
#define UI_SHOWCOMMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showcomment
{
public:
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *showcomment)
    {
        if (showcomment->objectName().isEmpty())
            showcomment->setObjectName("showcomment");
        showcomment->resize(1067, 625);
        showcomment->setStyleSheet(QString::fromUtf8("#showcomment{\n"
"\n"
"background-color:black;\n"
"}"));
        textEdit = new QTextEdit(showcomment);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(33, 60, 961, 421));
        lineEdit = new QLineEdit(showcomment);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 490, 891, 26));
        pushButton = new QPushButton(showcomment);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(940, 490, 51, 29));

        retranslateUi(showcomment);

        QMetaObject::connectSlotsByName(showcomment);
    } // setupUi

    void retranslateUi(QWidget *showcomment)
    {
        showcomment->setWindowTitle(QCoreApplication::translate("showcomment", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("showcomment", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showcomment: public Ui_showcomment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCOMMENT_H
