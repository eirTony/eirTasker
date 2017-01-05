QT += core
QT -= gui

TARGET = TaskBox
CONFIG += console
CONFIG -= app_bundle
TEMPLATE = app

include(../consoleCommon.pri)
LIBS *= -ltype -llog

SOURCES += main.cpp

