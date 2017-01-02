#ifndef LOG_H
#define LOG_H
#include "LogLib.h"

#define LOGADD(li)          LOGMAIN::add(li);
#define LOGITEM(sev, msg)   LOGADD(LogItem(sev, msg));

class LOGSHARED_EXPORT Log
{
public:
    Log(void);
};

#endif // LOG_H
