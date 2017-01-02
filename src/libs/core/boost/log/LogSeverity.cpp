#include "LogSeverity.h"

#ifdef USE_BOOST_LOG
E2BLog::LogSeverity::LogSeverity(void)
    : mSeverity(E2BLog::LogSeverity::NullSeverity) {;}
E2BLog::LogSeverity::LogSeverity(const E2BLog::LogSeverity::Severity sev)
    : mSeverity(sev) {;}
#endif
