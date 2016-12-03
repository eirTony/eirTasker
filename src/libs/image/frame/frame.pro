#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T01:01:20
#
#-------------------------------------------------

QT       += svg xml

TARGET = frame
TEMPLATE = lib

DEFINES += FRAME_LIBRARY

SOURCES += Frame.cpp \
    GreyFrame.cpp \
    FrameLib.cpp

HEADERS += Frame.h\
        frame_global.h \
    GreyFrame.h \
    FrameLib.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
