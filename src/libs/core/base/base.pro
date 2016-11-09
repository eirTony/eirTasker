#-------------------------------------------------
#
# Project created by QtCreator 2016-11-09T02:19:25
#
#-------------------------------------------------

QT       -= gui

TARGET = base
TEMPLATE = lib

DEFINES += BASE_LIBRARY

SOURCES += BaseLib.cpp

HEADERS += BaseLib.h\
        base_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
