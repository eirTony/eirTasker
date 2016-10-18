#-------------------------------------------------
#
# Project created by QtCreator 2016-10-18T09:45:13
#
#-------------------------------------------------

QT       += xml

QT       -= gui

TARGET = Type
TEMPLATE = lib

DEFINES += TYPE_LIBRARY

SOURCES += Type.cpp

HEADERS += Type.h\
        type_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
