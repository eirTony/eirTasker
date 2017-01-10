#include "LogSeverity.h"

E2BLog::LogSeverity::LogSeverity(void)
    : mSeverity(E2BLog::LogSeverity::NullSeverity) {;}
E2BLog::LogSeverity::LogSeverity(const E2BLog::LogSeverity::Severity sev)
    : mSeverity(sev) {;}

