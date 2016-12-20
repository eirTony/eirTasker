#include "Log.h"

#include <QtDebug>

#if 0
Log::Log(void)
    : cmpBoostCore(E2BLog::Logger::pCore())
{
    qDebug("BoostLog enabled=%i", isBoostEnabled());
}

const E2BLog::Logger::CorePtr Log::pBoostCore(void) const
{
    return cmpBoostCore;
}

bool Log::isBoostEnabled(void) const
{
    return pBoostCore()
            ? pBoostCore()->get_logging_enabled()
            : false;
}
#endif
