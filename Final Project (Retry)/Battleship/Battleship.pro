#-------------------------------------------------
#
# Project created by QtCreator 2016-10-29T17:11:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Battleship
TEMPLATE = app


SOURCES += main.cpp\
        battleship.cpp \
    grid.cpp \
    ships.cpp \
    shipmanagement.cpp

HEADERS  += battleship.h \
    grid.h \
    ships.h \
    shipmanagement.h

FORMS    += battleship.ui
