#-------------------------------------------------
#
# Project created by QtCreator 2015-04-02T11:56:18
#
#-------------------------------------------------

QT       += core gui
QT       += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Furniture
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Dialog.cpp \
    Printer.cpp

HEADERS  += mainwindow.h \
    ../Dialog.h \
    Dialog.h \
    Dialog.h \
    Constants.h \
    Printer.h

FORMS    += mainwindow.ui \
    dialog.ui
