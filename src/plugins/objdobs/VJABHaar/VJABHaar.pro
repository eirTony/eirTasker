#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T01:11:28
#
#-------------------------------------------------

QT       += svg xml

TARGET = VJABHaar
TEMPLATE = lib

DEFINES += VJABHAAR_LIBRARY

SOURCES += VJABHaar.cpp \
    HaarLib.cpp \
    HaarRect.cpp \
    HaarTree.cpp \
    HaarFeature.cpp \
    HaarCascade.cpp

HEADERS += VJABHaar.h\
        vjabhaar_global.h \
    HaarLib.h \
    HaarRect.h \
    HaarTree.h \
    HaarFeature.h \
    HaarCascade.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
