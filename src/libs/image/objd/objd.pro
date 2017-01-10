#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T01:02:24
#
#-------------------------------------------------

QT       += svg xml

QT       -= gui

TARGET = objd
TEMPLATE = lib

DEFINES += OBJD_LIBRARY

include (../imageCommon.pri)
LIBS *= -ltype -ltask -lframe

SOURCES += Objd.cpp \
    ObjdInterface.cpp \
    ObjdInputEntity.cpp

HEADERS += Objd.h\
        objd_global.h \
    ObjdInterface.h \
    ObjdInputEntity.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
