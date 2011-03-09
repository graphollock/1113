#-------------------------------------------------
#
# Project created by QtCreator 2011-02-15T20:53:17
#
#-------------------------------------------------

QT       += core gui

TARGET = Telescope
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../Kinematics/genhexkins.c

HEADERS  += mainwindow.h \
    genhexkins.h \
    ../Kinematics/genhexkins.h

FORMS    += mainwindow.ui
