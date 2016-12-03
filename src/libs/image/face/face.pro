#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T01:06:30
#
#-------------------------------------------------

QT       += svg xml

TARGET = face
TEMPLATE = lib

DEFINES += FACE_LIBRARY

SOURCES += Face.cpp \
    ObjdLib.cpp

HEADERS += Face.h\
        face_global.h \
    ObjdLib.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
