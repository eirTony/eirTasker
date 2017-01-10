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

include(../dataCommon.pri)

LIBS *= -lbase

SOURCES += Type.cpp \
    Flags.cpp \
    Index.cpp \
    QQPolygon.cpp \
    TypeLib.cpp \
    Integer.cpp \
    QQRect.cpp \
    StreamParsed.cpp \
    Enumeration.cpp \
    Severity.cpp \

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
    TInteger.h \
    QQRect.h \
    StreamParsed.h \
    Enumeration.h \
    Severity.h \

unix {
    target.path = /usr/lib
    INSTALLS += target
}
