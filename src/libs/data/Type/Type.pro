#-------------------------------------------------
#
# Project created by QtCreator 2016-10-18T09:45:13
#
#-------------------------------------------------

QT       += xml
QT       += testlib
#QT       -= gui

TARGET = Type
TEMPLATE = lib

DEFINES += TYPE_LIBRARY

#include(../data.pri)

SOURCES += Type.cpp \
    Flags.cpp \
    Index.cpp \
    QQPolygon.cpp \
    TypeLib.cpp \
    Integer.cpp

#   Matrix.cpp

HEADERS += Type.h\
        type_global.h \
    Flags.h \
    Index.h \
    TIndex.h \
    QQPolygon.h \
    TypeLib.h \
    Matrix.h \
    Integer.h \
    TInteger.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
