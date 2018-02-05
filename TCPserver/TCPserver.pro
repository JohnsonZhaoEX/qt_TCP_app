#-------------------------------------------------
#
# Project created by QtCreator 2018-02-05T23:47:13
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TCPserver
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \


HEADERS  += mainwindow.h \

FORMS    += mainwindow.ui \

CONFIG += mobility
MOBILITY = 

