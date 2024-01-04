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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_removing_organization
{
public:

    void setupUi(QWidget *removing_organization)
    {
        if (removing_organization->objectName().isEmpty())
            removing_organization->setObjectName("removing_organization");
        removing_organization->resize(400, 521);

        retranslateUi(removing_organization);

        QMetaObject::connectSlotsByName(removing_organization);
    } // setupUi

    void retranslateUi(QWidget *removing_organization)
    {
        removing_organization->setWindowTitle(QCoreApplication::translate("removing_organization", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class removing_organization: public Ui_removing_organization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVING_ORGANIZATION_H
