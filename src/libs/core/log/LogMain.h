#ifndef LOGMAIN_H
#define LOGMAIN_H
#include "LogLib.h"

#include <QMap>
#include <QUrl>

#include "../base/BasicName.h"

#ifdef USE_BOOST_LOG
#include "../boost/log/Logger.h"
#endif
class LogMain
{
public:
    LogMain(void);
    bool add(const QUrl & url);

private:
    bool addTroll(const QUrl & url);
    
private:
    QMap<BasicName, LogOutput *> mNameOutputMap;

#ifdef USE_BOOST_LOG
    E2BLog::Logger::CorePtr mpCore =  0;
#endif
};

#endif // LOGMAIN_H
