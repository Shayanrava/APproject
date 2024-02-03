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
    QLabel *label;
    QPushButton *add_project;
    QPushButton *delete_project;
    QPushButton *add_team;
    QPushButton *delete_team;
    QPushButton *project;
    QPushButton *team;
    QPushButton *admin;
    QLabel *lbl_access;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *making_decision_for_organ)
    {
        if (making_decision_for_organ->objectName().isEmpty())
            making_decision_for_organ->setObjectName("making_decision_for_organ");
        making_decision_for_organ->resize(1166, 629);
        making_decision_for_organ->setStyleSheet(QString::fromUtf8("#making_decision_for_organ\n"
"{\n"
"background-color:black;\n"
"}"));
        label = new QLabel(making_decision_for_organ);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 10, 771, 41));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"color:white;\n"
"font-size:30px;\n"
"}"));
        add_project = new QPushButton(making_decision_for_organ);
        add_project->setObjectName("add_project");
        add_project->setGeometry(QRect(440, 70, 341, 41));
        add_project->setStyleSheet(QString::fromUtf8("#add_project{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#add_project:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        delete_project = new QPushButton(making_decision_for_organ);
        delete_project->setObjectName("delete_project");
        delete_project->setGeometry(QRect(440, 140, 341, 41));
        delete_project->setStyleSheet(QString::fromUtf8("#delete_project{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#delete_project:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        add_team = new QPushButton(making_decision_for_organ);
        add_team->setObjectName("add_team");
        add_team->setGeometry(QRect(440, 210, 341, 41));
        add_team->setStyleSheet(QString::fromUtf8("#add_team{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#add_team:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        delete_team = new QPushButton(making_decision_for_organ);
        delete_team->setObjectName("delete_team");
        delete_team->setGeometry(QRect(440, 280, 341, 41));
        delete_team->setStyleSheet(QString::fromUtf8("#delete_team{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#delete_team:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        project = new QPushButton(making_decision_for_organ);
        project->setObjectName("project");
        project->setGeometry(QRect(440, 360, 341, 41));
        project->setStyleSheet(QString::fromUtf8("#project{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#project:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        team = new QPushButton(making_decision_for_organ);
        team->setObjectName("team");
        team->setGeometry(QRect(440, 440, 341, 41));
        team->setStyleSheet(QString::fromUtf8("#team{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#team:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        admin = new QPushButton(making_decision_for_organ);
        admin->setObjectName("admin");
        admin->setGeometry(QRect(440, 520, 341, 41));
        admin->setStyleSheet(QString::fromUtf8("#admin{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"font-size:25px;\n"
"}\n"
"\n"
"#admin:hover\n"
"{\n"
"background-color:yellow;\n"
"order:1px solid yellow; \n"
"}"));
        lbl_access = new QLabel(making_decision_for_organ);
        lbl_access->setObjectName("lbl_access");
        lbl_access->setGeometry(QRect(790, 520, 181, 31));
        lbl_access->setStyleSheet(QString::fromUtf8("#lbl_access{\n"
"\n"
"background-color:white;\n"
"padding:30px\n"
"\n"
"}"));
        label_2 = new QLabel(making_decision_for_organ);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(790, 290, 181, 31));
        label_3 = new QLabel(making_decision_for_organ);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(790, 220, 181, 31));
        label_4 = new QLabel(making_decision_for_organ);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(790, 140, 181, 31));
        label_5 = new QLabel(making_decision_for_organ);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(790, 80, 181, 31));

        retranslateUi(making_decision_for_organ);

        QMetaObject::connectSlotsByName(making_decision_for_organ);
    } // setupUi

    void retranslateUi(QWidget *making_decision_for_organ)
    {
        making_decision_for_organ->setWindowTitle(QCoreApplication::translate("making_decision_for_organ", "Form", nullptr));
        label->setText(QCoreApplication::translate("making_decision_for_organ", "Which part of the organization do you want to work with?", nullptr));
        add_project->setText(QCoreApplication::translate("making_decision_for_organ", "Add project", nullptr));
        delete_project->setText(QCoreApplication::translate("making_decision_for_organ", "Delete project", nullptr));
        add_team->setText(QCoreApplication::translate("making_decision_for_organ", "Add team", nullptr));
        delete_team->setText(QCoreApplication::translate("making_decision_for_organ", "Delete team", nullptr));
        project->setText(QCoreApplication::translate("making_decision_for_organ", "Project", nullptr));
        team->setText(QCoreApplication::translate("making_decision_for_organ", "Team", nullptr));
        admin->setText(QCoreApplication::translate("making_decision_for_organ", "Admin", nullptr));
        lbl_access->setText(QCoreApplication::translate("making_decision_for_organ", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("making_decision_for_organ", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("making_decision_for_organ", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("making_decision_for_organ", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("making_decision_for_organ", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class making_decision_for_organ: public Ui_making_decision_for_organ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKING_DECISION_FOR_ORGAN_H
