TEMPLATE = subdirs

INCLUDEPATH *= ../../core
INCLUDEPATH *= ../../data
INCLUDEPATH *= ../../proc

QMAKE_CXXFLAGS *= -std=c++11

EXEDIR = ../../../../exe

CONFIG += debug_and_release
CONFIG(debug, debug|release) {
        QMAKE_CXXFLAGS_DEBUG *= -Og
        DESTDIR = $$EXEDIR/dbg32W
        LIBS += -L$$EXEDIR/dbg32W
}
else {
        DESTDIR = $$EXEDIR/bin32W
        LIBS += -L$$EXEDIR/bin32W
}
message ($$DESTDIR)
message ($$LIBS)

SUBDIRS += \
    ../../libs \
    ../../apps \
    ../../plugins \
#    ../../Notes \
#    ../../tests \
