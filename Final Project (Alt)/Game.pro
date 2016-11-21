#-------------------------------------------------
#
# Project created by QtCreator 2016-11-09T13:38:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Game
TEMPLATE = app


SOURCES += main.cpp \
    game.cpp \
    player.cpp \
    projectile.cpp

HEADERS  += \
    game.h \
    player.h \
    projectile.h

FORMS    +=

RESOURCES += \
    resources.qrc
