#include "Logger.h"

const BL::core_ptr csmpCore = BL::core::get();

Logger::Logger(QObject * parent)
    : QObject(parent)
{

}

// static
void Logger::enable(const bool is)
{
    if (csmpCore) csmpCore->set_logging_enabled(is);
}

// static
bool Logger::isEnabled(void)
{
    return csmpCore
            ? csmpCore->get_logging_enabled()
            : false;
}
