/********************************************************************************
** Form generated from reading UI file 'enter.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTER_H
#define UI_ENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enter
{
public:
    QWidget *centralwidget;
    QPushButton *signin;
    QLabel *wlcomelable;
    QPushButton *signup;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Enter)
    {
        if (Enter->objectName().isEmpty())
            Enter->setObjectName("Enter");
        Enter->resize(1166, 629);
        Enter->setStyleSheet(QString::fromUtf8("#Enter{\n"
"\n"
"background-image:url(\":/new/prefix1/photo9486489911.jpg\");\n"
"\n"
"}"));
        centralwidget = new QWidget(Enter);
        centralwidget->setObjectName("centralwidget");
        signin = new QPushButton(centralwidget);
        signin->setObjectName("signin");
        signin->setGeometry(QRect(540, 130, 151, 41));
        signin->setStyleSheet(QString::fromUtf8("#signin{\n"
"\n"
"color:black;\n"
"\n"
"border-radius:10%;\n"
"\n"
"font-size:25px;\n"
"\n"
"background-color:rgb(238, 226, 63);\n"
"\n"
"}\n"
"#signin:hover{\n"
"background-color:rgb(238, 226, 63);\n"
"\n"
"border:6px solid rgb(232, 195, 10);\n"
"\n"
"}"));
        wlcomelable = new QLabel(centralwidget);
        wlcomelable->setObjectName("wlcomelable");
        wlcomelable->setGeometry(QRect(450, 50, 311, 31));
        wlcomelable->setStyleSheet(QString::fromUtf8("#wlcomelable{\n"
"color:white;\n"
"\n"
"border:1px solid rgb(238, 226, 63);\n"
"\n"
"font-size:30px;\n"
"\n"
" text-align: left;\n"
"\n"
"\n"
"\n"
"}"));
        signup = new QPushButton(centralwidget);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(540, 190, 151, 41));
        signup->setStyleSheet(QString::fromUtf8("#signup{\n"
"\n"
"color:black;\n"
"\n"
"border-radius:10%;\n"
"\n"
"font-size:25px;\n"
"\n"
"background-color:rgb(238, 226, 63);\n"
"\n"
"}\n"
"\n"
"#signup:hover{\n"
"background-color:rgb(238, 226, 63);\n"
"\n"
"border:6px solid rgb(232, 195, 10);\n"
"\n"
"}"));
        Enter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Enter);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1166, 25));
        Enter->setMenuBar(menubar);
        statusbar = new QStatusBar(Enter);
        statusbar->setObjectName("statusbar");
        Enter->setStatusBar(statusbar);

        retranslateUi(Enter);

        QMetaObject::connectSlotsByName(Enter);
    } // setupUi

    void retranslateUi(QMainWindow *Enter)
    {
        Enter->setWindowTitle(QCoreApplication::translate("Enter", "Enter", nullptr));
        signin->setText(QCoreApplication::translate("Enter", "sign in", nullptr));
        wlcomelable->setText(QCoreApplication::translate("Enter", " Welcome to our App", nullptr));
        signup->setText(QCoreApplication::translate("Enter", "sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enter: public Ui_Enter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTER_H
