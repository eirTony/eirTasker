#ifndef LOG_H
#define LOG_H
#include "LogLib.h"

#include "../base/Singleton.h"
#include "../boost/log/Logger.h"

extern StaticSingleton<Log> gLog;

class LOGSHARED_EXPORT Log : public ErrorHandler
{
public:
    bool open(const QUrl & url);
    void add(const LogItem & item);

    const E2BLog::Logger::CorePtr pBoostCore(void) const;
    bool isBoostEnabled(void) const;

private:
    Log(void);

private:
    const E2BLog::Logger::CorePtr cmpBoostCore =  0;
};

#endif // LOG_H
