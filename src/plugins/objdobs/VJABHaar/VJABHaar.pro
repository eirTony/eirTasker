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
LIBS *= -lbase -ltype

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

DISTFILES += \
    ../../../../../INDI1/incoming/JViolaJJones2/src/main/java/jviolajones/Detector.java \
    ../../../../../INDI1/incoming/JViolaJJones2/src/main/java/jviolajones/DetectorView.java \
    ../../../../../INDI1/incoming/JViolaJJones2/src/main/java/jviolajones/Feature.java \
    ../../../../../INDI1/incoming/JViolaJJones2/src/main/java/jviolajones/Rect.java \
    ../../../../../INDI1/incoming/JViolaJJones2/src/main/java/jviolajones/Stage.java \
    ../../../../../INDI1/incoming/JViolaJJones2/src/main/java/jviolajones/Tree.java \
    ../../../../../INDI1/incoming/JViolaJJones2/src/main/resources/haarcascade_frontalface_default.xml
