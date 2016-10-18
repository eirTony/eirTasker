#-------------------------------------------------
#
# Project created by QtCreator 2016-10-18T09:45:13
#
#-------------------------------------------------

QT       += xml
QT       += testlib
QT       -= gui

TARGET = Type
TEMPLATE = lib

DEFINES += TYPE_LIBRARY

SOURCES += Type.cpp \
    Flags.cpp \
    Index.cpp

HEADERS += Type.h\
        type_global.h \
    Flags.h \
    Index.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
