#ifndef LOG_H
#define LOG_H
#include "LogLib.h"

#include "../boost/log/Logger.h"

class LOGSHARED_EXPORT Log
{
public:
    Log(void);
#if 0
private:
    E2BLog::Logger::CorePtr mpCore =  0;
#endif
};

#endif // LOG_H
