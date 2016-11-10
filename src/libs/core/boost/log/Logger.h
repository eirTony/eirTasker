#ifndef LOGGER_H
#define LOGGER_H

#include <QObject>

#include <boost/log/core/core.hpp>
namespace BL = boost::log;

class Logger : public QObject
{
    Q_OBJECT
public:
    Logger(QObject * parent=0);

public: // static
    static void enable(const bool is=true);
    static bool isEnabled(void);

private:
//  const static boost::log::core::core_ptr csmpCore;
    const static BL::core_ptr csmpCore;
};

#endif // LOGGER_H
