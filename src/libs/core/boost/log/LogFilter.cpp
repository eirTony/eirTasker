#include "LogFilter.h"

LogFilter::LogFilter(void)
{

}

void LogFilter::setMinSeverity(enum LogSeverity sev)
{
    mSeverity = sev;
}
