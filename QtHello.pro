#-------------------------------------------------
#
# Project created by QtCreator 2017-02-27T09:14:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtHello
TEMPLATE = app


SOURCES += main.cpp\
    mywebviewwidget.cpp \
    transparentmainwindow.cpp \
    mainwindow.cpp \
    logindialog.cpp

HEADERS  += \
    mywebviewwidget.h \
    transparentmainwindow.h \
    mainwindow.h \
    logindialog.h

FORMS    += \
    transparentmainwindow.ui \
    mainwindow.ui \
    logindialog.ui

RC_ICONS = icon.ico

RESOURCES += \
    res.qrc
