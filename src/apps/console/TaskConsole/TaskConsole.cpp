#include "TaskConsole.h"

#include <QtDebug>

#include <QDateTime>
#include <QTimer>

#include "StdIO.h"

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
    LogSink * ls = new LogSink("LogFile", this);
    ls->set(QFileInfo("TaskConsole.log"));
    mLogger.set(ls);

    StdIO::info("TaskConsole initialized at %1",
                QDateTime::currentDateTime().toString());
    StdIO::info("mLogger enabled %1", mLogger.isEnabled());
#if 0
    StdIO::info("localBoost::log::core enabled=%1",
                 cmpLocalLog->get()
                 ? cmpLocalLog->get()->get_logging_enabled()
                 : false);
#endif
}
