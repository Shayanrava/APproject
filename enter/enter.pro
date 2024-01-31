QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_people.cpp \
    add_project_before.cpp \
    add_team_before.cpp \
    admin_before.cpp \
    admins.cpp \
    comment.cpp \
    delete_project_before.cpp \
    delete_team_before.cpp \
    entrance_organ.cpp \
    filtering_organizations.cpp \
    forget.cpp \
    key_pass_organ.cpp \
    key_project_before.cpp \
    key_team_before.cpp \
    main.cpp \
    enter.cpp \
    making_decision_for_organ.cpp \
    making_organization.cpp \
    organ_task.cpp \
    organization.cpp \
    person.cpp \
    project.cpp \
    project_before.cpp \
    removing_organization.cpp \
    signin.cpp \
    signup.cpp \
    task.cpp \
    team.cpp \
    team_before.cpp

HEADERS += \
    add_people.h \
    add_project_before.h \
    add_team_before.h \
    admin_before.h \
    admins.h \
    comment.h \
    delete_project_before.h \
    delete_team_before.h \
    enter.h \
    entrance_organ.h \
    filtering_organizations.h \
    forget.h \
    key_pass_organ.h \
    key_project_before.h \
    key_team_before.h \
    making_decision_for_organ.h \
    making_organization.h \
    organ_task.h \
    organization.h \
    person.h \
    project.h \
    project_before.h \
    removing_organization.h \
    signin.h \
    signup.h \
    task.h \
    team.h \
    team_before.h

FORMS += \
    add_people.ui \
    add_project_before.ui \
    add_team_before.ui \
    admin_before.ui \
    delete_project_before.ui \
    delete_team_before.ui \
    enter.ui \
    entrance_organ.ui \
    filtering_organizations.ui \
    forget.ui \
    key_pass_organ.ui \
    key_project_before.ui \
    key_team_before.ui \
    making_decision_for_organ.ui \
    making_organization.ui \
    project_before.ui \
    removing_organization.ui \
    signin.ui \
    signup.ui \
    team_before.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
