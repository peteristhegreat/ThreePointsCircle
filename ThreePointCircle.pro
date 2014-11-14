#-------------------------------------------------
#
# Project created by QtCreator 2014-11-12T22:32:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

macx {
    !host_build:QMAKE_MAC_SDK = macosx10.9
}

TARGET = ThreePointCircle
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    graphicsscene.cpp \
    arcgraphicsitem.cpp

HEADERS  += mainwindow.h \
    graphicsscene.h \
    arcgraphicsitem.h
