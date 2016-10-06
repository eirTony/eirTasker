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
    AbstractTaskInputEntity.cpp \
    StdIODevice.cpp \
    VectorMathInterface.cpp \
    TaskMethodKey.cpp \
    AbstractId.cpp \
    StdIO.cpp \
    Boolean.cpp \
    BooleanArray.cpp \
    VariantName.cpp \
    VariantGroup.cpp \
    Variant.cpp \
    VariantMap.cpp \
    VariantId.cpp \
    VectorMathInputEntitiy.cpp

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
    AbstractTaskInputEntity.h \
    StdIODevice.h \
    VectorMathInterface.h \
    TaskMethodKey.h \
    AbstractId.h \
    StdIO.h \
    Boolean.h \
    BooleanArray.h \
    VariantName.h \
    VariantGroup.h \
    Variant.h \
    VariantMap.h \
    VariantId.h \
    VectorMathInputEntitiy.h

