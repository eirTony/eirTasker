#-------------------------------------------------
#
# Project created by QtCreator 2016-11-09T02:19:25
#
#-------------------------------------------------

QT       -= gui

TARGET = base
TEMPLATE = lib

DEFINES += BASE_LIBRARY

SOURCES += BaseLib.cpp \
    BinaryBase.cpp

HEADERS += BaseLib.h\
        base_global.h \
    BinaryBase.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
