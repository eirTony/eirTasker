#-------------------------------------------------
#
# Project created by QtCreator 2016-11-09T01:37:55
#
#-------------------------------------------------

QT       -= gui

TARGET = boost
TEMPLATE = lib

DEFINES += BOOST_LIBRARY

SOURCES += BoostLib.cpp \
    LogSource.cpp \
    LogBase.cpp \
    Logger.cpp \
    LogSink.cpp \
    LogFilter.cpp \
    LogRecord.cpp \
    LogAttribute.cpp \
    LogFormatter.cpp

HEADERS += BoostLib.h\
        boost_global.h \
    LogSource.h \
    LogBase.h \
    Logger.h \
    LogSink.h \
    LogFilter.h \
    LogRecord.h \
    LogAttribute.h \
    LogFormatter.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
