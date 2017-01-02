#ifndef LOGSEVERITY_H
#define LOGSEVERITY_H
#include "../BoostLib.h"

#include "Logger.h"

#ifdef USE_BOOST_LOG
/*
    BOOST_LOG_TRIVIAL(trace) << "A trace severity message";
    BOOST_LOG_TRIVIAL(debug) << "A debug severity message";
    BOOST_LOG_TRIVIAL(info) << "An informational severity message";
    BOOST_LOG_TRIVIAL(warning) << "A warning severity message";
    BOOST_LOG_TRIVIAL(error) << "An error severity message";
    BOOST_LOG_TRIVIAL(fatal) << "A fatal severity message";
*/

#include <boost/log/keywords/severity.hpp>
namespace EIRC2 { namespace BoostLib { namespace Logger {

class LogSeverity
{
public:
    enum Severity
    {
        NullSeverity = 0,
        Trace,
        Debug,
        Info,
        Warning,
        Error,
        Fatal,
        SizeSeverity
    };

public:
    LogSeverity(void);
    LogSeverity(const Severity sev);

private:
    Severity mSeverity = NullSeverity;
};

} } } // Logger, BoostLib, EIRC2
#endif

#endif // LOGSEVERITY_H
