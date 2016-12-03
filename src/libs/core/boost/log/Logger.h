#ifndef LOGGER_H
#define LOGGER_H

#include <QObject>

#include <boost/log/core/core.hpp>

namespace EIRC2
{
    namespace BoostLib
        {
        namespace Logger
        {
        }
    }
}

namespace BL = boost::log;
namespace E2 = EIRC2;
namespace E2Boost = E2::BoostLib;
namespace E2BLog = E2Boost::Logger;

namespace EIRC2 { namespace BoostLib { namespace Logger {

class LogSink;

class Logger : public QObject
{
    Q_OBJECT
public:
    typedef BL::core_ptr CorePtr;

public:
    Logger(QObject * parent=0);

public: // static
    static CorePtr pCore(void);
    static void enable(const bool is=true);
    static bool isEnabled(void);
    static void addSink(LogSink * sink);

private:
    const static BL::core_ptr csmpCore;
};
} } } // Logger, BoostLib, EIRC2


#endif // LOGGER_H
