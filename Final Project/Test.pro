#-------------------------------------------------
#
# Project created by QtCreator 2016-10-20T21:42:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Test
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    ship.cpp \
    ship_manager.cpp

HEADERS  += widget.h \
    ship.h \
    ship_manager.h

FORMS    += widget.ui
