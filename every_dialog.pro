#-------------------------------------------------
#
# Project created by QtCreator 2016-05-27T10:41:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = every_dialog
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    inputdialog.cpp \
    messagedialog.cpp

HEADERS  += dialog.h \
    inputdialog.h \
    messagedialog.h

FORMS    += dialog.ui \
    inputdialog.ui \
    messagedialog.ui

RESOURCES += \
    source.qrc
