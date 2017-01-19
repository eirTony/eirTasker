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

#INCLUDEPATH *= /lang/boost_1_63_0
#LIBS *= -lboost
LIBS *= -lbase

SOURCES += LogLib.cpp \
    LogItem.cpp \
    Log.cpp \
    LogObject.cpp \
    LogMain.cpp \
    SeverityFilter.cpp \
    LogOutput.cpp \
    TrollOutput.cpp \
    LogFormat.cpp

HEADERS += LogLib.h\
        log_global.h \
    LogItem.h \
    Log.h \
    LogObject.h \
    LogMain.h \
    SeverityFilter.h \
    LogOutput.h \
    TrollOutput.h \
    logback.h \
    LogFormat.h \
    LogMacros.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
