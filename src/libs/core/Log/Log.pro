#-------------------------------------------------
#
# Project created by QtCreator 2016-11-09T03:15:03
#
#-------------------------------------------------

QT       -= gui

TARGET = Log
TEMPLATE = lib

DEFINES += LOG_LIBRARY

SOURCES += LogLib.cpp

HEADERS += LogLib.h\
        log_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
