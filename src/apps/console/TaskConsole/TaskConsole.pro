QT += core
#QT -= gui

QMAKE_CXXFLAGS *= -std=c++11

TARGET = TaskConsole
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

include (../../../build/src/src.pro)

LIBS *= -lboost

SOURCES += main.cpp \
    TaskConsole.cpp \
    StdIODevice.cpp \
    VectorMathInterface.cpp \
    TaskMethodKey.cpp \
    StdIO.cpp \
    VectorMathInputEntitiy.cpp

HEADERS += \
    TaskConsole.h \
    StdIODevice.h \
    VectorMathInterface.h \
    TaskMethodKey.h \
    StdIO.h \
    VectorMathInputEntitiy.h
