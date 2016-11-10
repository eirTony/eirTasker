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
    ./log/LogSource.cpp \
    ./log/LogBase.cpp \
    ./log/Logger.cpp \
    ./log/LogSink.cpp \
    ./log/LogFilter.cpp \
    ./log/LogRecord.cpp \
    ./log/LogAttribute.cpp \
    ./log/LogFormatter.cpp

HEADERS += BoostLib.h\
        boost_global.h \
    ./log/LogSource.h \
    ./log/LogBase.h \
    ./log/Logger.h \
    ./log/LogSink.h \
    ./log/LogFilter.h \
    ./log/LogRecord.h \
    ./log/LogAttribute.h \
    ./log/LogFormatter.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
