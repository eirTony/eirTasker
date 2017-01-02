#ifndef LOGFILTER_H
#define LOGFILTER_H
#include "../BoostLib.h"

#include "Logger.h"
#include "LogRecord.h"
#include "LogSeverity.h"

#ifdef USE_BOOST_LOG
namespace EIRC2 { namespace BoostLib { namespace Logger {

class BOOSTSHARED_EXPORT LogFilter
{
public:
    LogFilter(void);


private:
};

} } } // Logger, BoostLib, EIRC2
#endif
#endif // LOGFILTER_H
