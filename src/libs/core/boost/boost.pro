#-------------------------------------------------
#
# Project created by QtCreator 2016-11-09T01:37:55
#
#-------------------------------------------------

QT       -= gui

TARGET = boost
TEMPLATE = lib

DEFINES += BOOST_LIBRARY

include (../coreCommon.pri)

QMAKE_CXXFLAGS *= -DBOOST_LOG_DYN_LINK
INCLUDEPATH *= /usr/include/boost
LIBS *= -L/usr/lib/i386-linux-gnu -lboost_log

SOURCES += BoostLib.cpp \
    ./log/LogSource.cpp \
    ./log/LogBase.cpp \
    ./log/Logger.cpp \
    ./log/LogSink.cpp \
    ./log/LogRecord.cpp \
    ./log/LogAttribute.cpp \
    ./log/LogFormatter.cpp \
    ./log/LogFilter.cpp

HEADERS += BoostLib.h\
        boost_global.h \
    ./log/LogSource.h \
    ./log/LogBase.h \
    ./log/Logger.h \
    ./log/LogSink.h \
    ./log/LogRecord.h \
    ./log/LogAttribute.h \
    ./log/LogFormatter.h \
    ./log/LogFilter.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
