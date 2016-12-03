#ifndef LOGRECORD_H
#define LOGRECORD_H
/*
trace) << "A trace severity message";
    BOOST_LOG_TRIVIAL(debug) << "A debug severity message";
    BOOST_LOG_TRIVIAL(info) << "An informational severity message";
    BOOST_LOG_TRIVIAL(warning) << "A warning severity message";
    BOOST_LOG_TRIVIAL(error) << "An error severity message";
    BOOST_LOG_TRIVIAL(fatal)
  */

#include <boost/log/keywords/severity.hpp>

enum LogSeverity
{
    NullSeverity = 0,
    Debug,
    Info,
    Warning,
    Error,
    Fatal,
    SizeSeverity
};

class LogRecord
{
public:
    LogRecord(void);
};

#endif // LOGRECORD_H
