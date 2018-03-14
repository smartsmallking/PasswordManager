#-------------------------------------------------
#
# Project created by QtCreator 2017-02-23T11:36:32
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PasswordManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    database.cpp

HEADERS  += mainwindow.h \
    database.h

FORMS    += mainwindow.ui \
    database.ui

RESOURCES += \
    image.qrc \
    image.qrc

RESOURCES += \
    image.qrc

RC_ICONS =key.ico

RC_FILE+= adminis.rc
