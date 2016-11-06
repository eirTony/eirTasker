#-------------------------------------------------
#
# Project created by QtCreator 2016-11-06T02:17:47
#
#-------------------------------------------------

QT       += network sql xml

QT       -= gui

TARGET = Entity
TEMPLATE = lib

DEFINES += ENTITY_LIBRARY

SOURCES += Entity.cpp \
    EntityLib.cpp \
    EntityEncoding.cpp \
    EntityData.cpp \
    EntityType.cpp \
    EntityKey.cpp

HEADERS += Entity.h\
        entity_global.h \
    EntityLib.h \
    EntityEncoding.h \
    EntityData.h \
    EntityType.h \
    EntityKey.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
