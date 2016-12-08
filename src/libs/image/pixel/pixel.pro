#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T01:00:20
#
#-------------------------------------------------

QT       -= gui

TARGET = pixel
TEMPLATE = lib

DEFINES += PIXEL_LIBRARY

include (../imageCommon.pri)

SOURCES += Pixel.cpp

HEADERS += Pixel.h\
        pixel_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
