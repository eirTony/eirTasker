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

include (../procCommon.pri)

SOURCES += TaskLib.cpp \
    AbstractTask.cpp \
    AtomicTask.cpp \
    CompositeTask.cpp \
    TaskVector.cpp \
    TaskInterface.cpp \
    TaskObject.cpp

HEADERS += TaskLib.h\
        task_global.h \
    AbstractTask.h \
    AtomicTask.h \
    CompositeTask.h \
    TaskVector.h \
    TaskInterface.h \
    TaskObject.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
