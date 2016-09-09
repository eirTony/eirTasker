QT += core
#QT -= gui

QMAKE_CXXFLAGS *= -std=c++11

TARGET = TaskConsole
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    TaskConsole.cpp \
    AbstractEntity.cpp \
    AbstractKey.cpp \
    AbstractName.cpp \
    AbstractInfo.cpp \
    AbstractTaskPlugin.cpp \
    AbstractTaskObject.cpp \
    AbstractTaskRunnableInterface.cpp \
    AbstractTaskContextEntity.cpp \
    AbstractTaskConfigurationEntity.cpp \
    AbstractTaskResultsEntity.cpp \
    AbstractTaskInputEntity.cpp

HEADERS += \
    TaskConsole.h \
    AbstractEntity.h \
    AbstractKey.h \
    AbstractName.h \
    AbstractInfo.h \
    AbstractTaskPlugin.h \
    AbstractTaskObject.h \
    AbstractTaskRunnableInterface.h \
    AbstractTaskContextEntity.h \
    AbstractTaskConfigurationEntity.h \
    AbstractTaskResultsEntity.h \
    AbstractTaskInputEntity.h

