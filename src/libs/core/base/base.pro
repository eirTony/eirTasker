#-------------------------------------------------
#
# Project created by QtCreator 2016-11-09T02:19:25
#
#-------------------------------------------------

QT       -= gui

TARGET = base
TEMPLATE = lib

DEFINES += BASE_LIBRARY

#include(../core.pri)

SOURCES += BaseLib.cpp \
    BinaryBase.cpp \
    ErrorHandler.cpp \
    BasicErrorInfo.cpp \
    BasicErrorObject.cpp

HEADERS += BaseLib.h\
        base_global.h \
    BinaryBase.h \
    ErrorHandler.h \
    BasicErrorInfo.h \
    BasicErrorObject.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
