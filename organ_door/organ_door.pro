QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    key_pass_organ.cpp \
    main.cpp \
    mainwindow.cpp \
    making_decision_for_organ.cpp \
    organization_entrance.cpp

HEADERS += \
    key_pass_organ.h \
    mainwindow.h \
    making_decision_for_organ.h \
    organization_entrance.h

FORMS += \
    key_pass_organ.ui \
    mainwindow.ui \
    making_decision_for_organ.ui \
    organization_entrance.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
