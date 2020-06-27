#-------------------------------------------------
#
# Project created by QtCreator 2020-06-25T17:46:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GdufsMap
TEMPLATE = app

CONFIG += resources_big   //资源文件过大

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    allinfosubw.cpp \
    onequerysubw.cpp \
    singlepointsubw.cpp \
    matrixsubw.cpp \
    dijsubw.cpp \
    pathsubw.cpp \
    map.cpp \
    floydsubw.cpp \
    checkpathsubw.cpp \
    modifysubw.cpp \
    allpathsubw.cpp \
    cangosubw.cpp

HEADERS += \
        mainwindow.h \
    allinfosubw.h \
    onequerysubw.h \
    singlepointsubw.h \
    matrixsubw.h \
    dijsubw.h \
    pathsubw.h \
    map.h \
    floydsubw.h \
    checkpathsubw.h \
    modifysubw.h \
    allpathsubw.h \
    cangosubw.h

FORMS += \
        mainwindow.ui

RESOURCES += \
    images.qrc
