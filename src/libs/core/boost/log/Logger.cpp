#include "Logger.h"

const BL::core_ptr csmpCore = BL::core::get();

E2BLog::Logger::Logger(QObject * parent)
    : QObject(parent)
{

}

// static
void E2BLog::Logger::enable(const bool is)
{
    if (csmpCore) csmpCore->set_logging_enabled(is);
}

// static
bool E2BLog::Logger::isEnabled(void)
{
    return csmpCore
            ? csmpCore->get_logging_enabled()
            : false;
}
