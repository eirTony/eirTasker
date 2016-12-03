#ifndef LOGFILTER_H
#define LOGFILTER_H

#include "log/LogRecord.h"

class LogFilter
{
public:
    LogFilter(void);

    void setMinSeverity(enum LogSeverity sev);

private:
    LogSeverity mSeverity = NullSeverity;
};

#endif // LOGFILTER_H
