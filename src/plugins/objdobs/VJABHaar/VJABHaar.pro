#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T01:11:28
#
#-------------------------------------------------

QT       += svg xml

TARGET = VJABHaar
TEMPLATE = lib

DEFINES += VJABHAAR_LIBRARY

include (../objdobsCommon.pri)

SOURCES += VJABHaar.cpp \
    HaarLib.cpp \
    HaarWeightedRect.cpp \
    HaarTree.cpp \
    HaarFeature.cpp \
    HaarCascade.cpp \
    HaarStage.cpp \
    HaarDetector.cpp

HEADERS += VJABHaar.h\
        vjabhaar_global.h \
    HaarLib.h \
    HaarWeightedRect.h \
    HaarTree.h \
    HaarFeature.h \
    HaarCascade.h \
    HaarStage.h \
    HaarDetector.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
