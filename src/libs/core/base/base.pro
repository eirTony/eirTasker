#-------------------------------------------------
#
# Project created by QtCreator 2016-11-09T02:19:25
#
#-------------------------------------------------

QT       -= gui

TARGET = base
TEMPLATE = lib

DEFINES += BASE_LIBRARY

include (../coreCommon.pri)

SOURCES += BaseLib.cpp \
    BinaryBase.cpp \
    ErrorHandler.cpp \
    Severity.cpp \
    BasicName.cpp \
    BasicId.cpp \
    Enumeration.cpp

HEADERS += BaseLib.h\
        base_global.h \
    BinaryBase.h \
    ErrorHandler.h \
    Severity.h \
    BasicName.h \
    BasicId.h \
    Enumeration.h \
    Named.h \
    DataProperty.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
