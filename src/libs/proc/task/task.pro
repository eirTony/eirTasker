#-------------------------------------------------
#
# Project created by QtCreator 2016-11-14T04:33:55
#
#-------------------------------------------------

QT       += xml

QT       -= gui

TARGET = task
TEMPLATE = lib

DEFINES += TASK_LIBRARY

include(../proc.pri)

SOURCES += TaskLib.cpp \
    AbstractTask.cpp \
    AtomicTask.cpp \
    CompositeTask.cpp \
    TaskVector.cpp

HEADERS += TaskLib.h\
        task_global.h \
    AbstractTask.h \
    AtomicTask.h \
    CompositeTask.h \
    TaskVector.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
