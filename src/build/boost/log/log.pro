#-------------------------------------------------
#
# Project created by QtCreator 2017-01-02T12:57:39
#
#-------------------------------------------------

QT       += xml

QT       -= gui

TARGET = log
TEMPLATE = lib

DEFINES += LOG_LIBRARY

INCLUDEPATH *= ../../../../../../../lang/boost_1_63_0

SOURCES += log.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/core.cpp

HEADERS += log.h\
        log_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
