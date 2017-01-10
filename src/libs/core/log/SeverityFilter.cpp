#include "SeverityFilter.h"

#ifdef USE_BOOST_LOG

SeverityFilter::SeverityFilter(void)
    : mBoostSeverity(E2BLog::LogSeverity::NullSeverity) {;}
SeverityFilter::SeverityFilter(const E2BLog::LogSeverity boostSev)
    : mBoostSeverity(boostSev) {;}

#endif



