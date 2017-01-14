# ./src/build/srcCommon.pri

QMAKE_CXXFLAGS *= -std=c++11
#QMAKE_CXXFLAGS *= -DQT_NO_DEPRECATED
QMAKE_CXXFLAGS_DEBUG *= -Og

# local options
QMAKE_CXXFLAGS *= -DeIR_USE_FUNCINFO_WORKAROUND

# relative to ./src/apps|libs/console|core/TaskConsole|boost
INCLUDEPATH *= ../../../../libs/core
INCLUDEPATH *= ../../../../libs/data
INCLUDEPATH *= ../../../../libs/proc
EXEDIR = ../../../../exe

CONFIG += debug_and_release
CONFIG(debug, debug|release) {
        DESTDIR = $$EXEDIR/dbg32W
        LIBS += -L$$EXEDIR/dbg32W
}
else {
        DESTDIR = $$EXEDIR/bin32W
        LIBS += -L$$EXEDIR/bin32W
}

QMAKE_LFLAGS_RPATH *= EXEDIR

#message ($$PWD)
#message ($$DESTDIR)
