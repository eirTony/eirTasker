#include "TaskConsole.h"

#include <QtDebug>

#include <QDateTime>
#include <QTimer>

#include <log/core.hpp>

#include "../../../libs/core/boost/BoostLib.h"

#include "StdIO.h"

BL::core_ptr TaskConsole::smpGlobalLog = BL::core::get();

TaskConsole::TaskConsole(QObject * parent)
    : QThread(parent)
//    , cmpLocalLog(new boost::log::core)
{
    setObjectName("TaskConsole");
    connect(this, SIGNAL(started()), this, SLOT(init()));
    QTimer::singleShot(100, this, SLOT(start()));
}


void TaskConsole::init(void)
{
    StdIO::info("TaskConsole initialized at %1",
                QDateTime::currentDateTime().toString());
    StdIO::info("globalBoost::log::core enabled=%1",
                globalLog()
                ? globalLog()->get_logging_enabled()
                : false);
#if 0
    StdIO::info("localBoost::log::core enabled=%1",
                 cmpLocalLog->get()
                 ? cmpLocalLog->get()->get_logging_enabled()
                 : false);
#endif
}
