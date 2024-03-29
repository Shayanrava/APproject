QT       += core gui
QT       +=network

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
    change_member_task_in_project.cpp \
    change_member_task_in_team.cpp \
    client.cpp \
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
    showcomment.cpp \
    signin.cpp \
    signup.cpp \
    task.cpp \
    team.cpp \
    team_before.cpp \
    view_member_task_in_project.cpp \
    view_member_task_in_team.cpp \
    viewtask.cpp

HEADERS += \
    add_people.h \
    add_project_before.h \
    add_team_before.h \
    admin_before.h \
    admins.h \
    change_member_task_in_project.h \
    change_member_task_in_team.h \
    client.h \
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
    showcomment.h \
    signin.h \
    signup.h \
    task.h \
    team.h \
    team_before.h \
    view_member_task_in_project.h \
    view_member_task_in_team.h \
    viewtask.h

FORMS += \
    add_people.ui \
    add_project_before.ui \
    add_team_before.ui \
    admin_before.ui \
    change_member_task_in_project.ui \
    change_member_task_in_team.ui \
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
    showcomment.ui \
    signin.ui \
    signup.ui \
    team_before.ui \
    view_member_task_in_project.ui \
    view_member_task_in_team.ui \
    viewtask.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    backgroundim.qrc
