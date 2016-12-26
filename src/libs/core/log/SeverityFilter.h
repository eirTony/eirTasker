#ifndef SEVERITYFILTER_H
#define SEVERITYFILTER_H

#include "../boost/log/Logger.h"
#include "../boost/log/LogFilter.h"

class SeverityFilter : public E2BLog::LogFilter
{
public:
    SeverityFilter(void);
    SeverityFilter(const E2BLog::LogSeverity boostSev);

private:
    E2BLog::LogSeverity mBoostSeverity;
};

#endif // SEVERITYFILTER_H
