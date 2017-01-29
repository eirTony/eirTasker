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

LIBS *= -llog

SOURCES += BaseLib.cpp \
    BinaryBase.cpp \
    BasicErrorInfo.cpp \
    BasicErrorObject.cpp \
    BasicId.cpp \
    BasicName.cpp \
    BasicSeverity.cpp \

HEADERS += BaseLib.h\
        base_global.h \
    BinaryBase.h \
    BasicErrorInfo.h \
    BasicErrorObject.h \
    DataProperty.h \
    Named.h \
    BasicSeverity.h \
    Singleton.h \
    BasicName.h \
    BasicId.h \
    Named.h \
    DataProperty.h \

unix {
    target.path = /usr/lib
    INSTALLS += target
}
