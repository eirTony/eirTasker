#-------------------------------------------------
#
# Project created by QtCreator 2016-11-14T04:53:48
#
#-------------------------------------------------

QT       += xml

QT       -= gui

TARGET = Kii
TEMPLATE = lib

DEFINES += KII_LIBRARY

include(../data.pri)

SOURCES += KiiLib.cpp \
    BitKey.cpp

HEADERS += KiiLib.h\
        kii_global.h \
    BitKey.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
