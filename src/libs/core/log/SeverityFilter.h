#ifndef SEVERITYFILTER_H
#define SEVERITYFILTER_H
#include "LogLib.h"

#ifdef USE_BOOST_LOG
#include "../boost/log/Logger.h"
#include "../boost/log/LogFilter.h"

class LOGSHARED_EXPORT SeverityFilter : public E2BLog::LogFilter
{
public:
    SeverityFilter(void);
    SeverityFilter(const E2BLog::LogSeverity boostSev);

private:
    E2BLog::LogSeverity mBoostSeverity;
};
#endif
#endif // SEVERITYFILTER_H
