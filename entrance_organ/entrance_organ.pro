QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_people.cpp \
    filtering_organizations.cpp \
    key_pass_organ.cpp \
    main.cpp \
    entrance_organ.cpp \
    making_decision_for_organ.cpp \
    making_organization.cpp \
    organization_entrance.cpp \
    removing_organization.cpp

HEADERS += \
    add_people.h \
    entrance_organ.h \
    filtering_organizations.h \
    key_pass_organ.h \
    making_decision_for_organ.h \
    making_organization.h \
    organization_entrance.h \
    removing_organization.h

FORMS += \
    add_people.ui \
    entrance_organ.ui \
    filtering_organizations.ui \
    key_pass_organ.ui \
    making_decision_for_organ.ui \
    making_organization.ui \
    organization_entrance.ui \
    removing_organization.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
