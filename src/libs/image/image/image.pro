#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T01:04:45
#
#-------------------------------------------------

QT       += svg xml

TARGET = image
TEMPLATE = lib

DEFINES += IMAGE_LIBRARY

SOURCES += Image.cpp \
    ImageLib.cpp \
    Region.cpp

HEADERS += Image.h\
        image_global.h \
    ImageLib.h \
    Region.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
