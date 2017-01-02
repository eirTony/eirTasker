# ./libs/boost_log.pri

QMAKE_CXXFLAGS *= -DBOOST_LOG_DYN_LINK
unix:INCLUDEPATH *= /usr/include/boost
unix:LIBS *= -L/usr/lib/i386-linux-gnu -lboost_log
win32:INCLUDEPATH *= ../../../../../../lang/boost_1_63_0/boost
#win32:LIBS *= -L
