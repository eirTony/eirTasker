QT += core
QT -= gui
QT += xml

TARGET = TaskBox
CONFIG += console
CONFIG -= app_bundle
TEMPLATE = app

include(../consoleCommon.pri)
LIBS *= -ltype -llog
LIBS *= -lVJABHaar

SOURCES += main.cpp \
    ConsoleObject.cpp

HEADERS += \
    ConsoleObject.h

