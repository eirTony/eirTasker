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

SOURCES += LogLib.cpp

LIBS *= -lboost

SOURCES += LogLib.cpp \
    LogItem.cpp \
    Log.cpp \
    LogObject.cpp

HEADERS += LogLib.h\
        log_global.h \
    LogItem.h \
    Log.h \
    LogObject.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
