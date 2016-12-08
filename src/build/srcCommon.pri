# ./src/build/srcCommon.pri

QMAKE_CXXFLAGS *= -std=c++11
QMAKE_CXXFLAGS_DEBUG *= -Og

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
message ($$PWD)
message ($$DESTDIR)
