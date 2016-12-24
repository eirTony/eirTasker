#ifndef LOGMAIN_H
#define LOGMAIN_H

#include <QUrl>

#include "../boost/log/Logger.h"

class LogMain
{
public:
    LogMain(void);
    bool add(const QUrl & url);

private:
    bool addTroll(const QUrl & url);
    
private:
    E2BLog::Logger::CorePtr mpCore =  0;
};

#endif // LOGMAIN_H
