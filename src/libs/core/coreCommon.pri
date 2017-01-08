# ./src/libs/core/coreCommon.pri

include (../libsCommon.pri)

### No Boost.Log
DEFINES -= USE_BOOST_LOG
LIBS -= -lboost
### else
###

