#-------------------------------------------------
#
# Project created by QtCreator 2017-07-11T22:33:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = horse
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    horse.cpp

HEADERS  += mainwindow.h \
    horse.h \
    struct.h

FORMS    += mainwindow.ui

DISTFILES +=

RESOURCES += \
    image.qrc
