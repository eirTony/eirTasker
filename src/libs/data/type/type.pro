#-------------------------------------------------
#
# Project created by QtCreator 2016-10-18T09:45:13
#
#-------------------------------------------------

QT       += xml
QT       += testlib
QT       += gui

TARGET = type
TEMPLATE = lib

DEFINES += TYPE_LIBRARY

include(../dataCommon.pri)

LIBS *= -lbase -llog

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
    QQPoint.cpp \
    Boolean.cpp \
    Success.cpp \
    Readable.cpp

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
    QQPoint.h \
    Boolean.h \
    Success.h \
    Readable.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
