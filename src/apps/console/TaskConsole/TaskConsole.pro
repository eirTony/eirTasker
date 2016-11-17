QT += core
#QT -= gui

QMAKE_CXXFLAGS *= -std=c++11

INCLUDEPATH *= /usr/include/boost
LIBS *= -L/usr/lib/i386-linux-gnu
#LIBS *= -lboost_system
LIBS *= -lboost_log
QMAKE_CXXFLAGS *= -DBOOST_LOG_DYN_LINK


TARGET = TaskConsole
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

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
