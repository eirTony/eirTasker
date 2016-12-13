#-------------------------------------------------
#
# Project created by QtCreator 2016-11-09T03:15:03
#
#-------------------------------------------------

QT       -= gui

TARGET = log
TEMPLATE = lib

DEFINES += LOG_LIBRARY

include (../coreCommon.pri)

LIBS *= -lboost

SOURCES += LogLib.cpp \
    LogItem.cpp \
    Log.cpp \
    LogObject.cpp \
    LogMain.cpp

HEADERS += LogLib.h\
        log_global.h \
    LogItem.h \
    Log.h \
    LogObject.h \
    LogMain.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
