#-------------------------------------------------
#
# Project created by QtCreator 2016-10-18T09:47:19
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = TestDataLibs
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += TestDataLibs.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

INCLUDEPATH *= ../../../libs/thing
LIBS *= -lType
LIBS *= -L/tmp/libs/data/Type
