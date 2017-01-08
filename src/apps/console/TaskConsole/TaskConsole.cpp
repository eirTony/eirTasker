#include "TaskConsole.h"

#include <QtDebug>

#include <QDateTime>
#include <QFileInfo>
#include <QTimer>

#include <../../../libs/core/boost/log/Logger.h>
#include <../../../libs/core/boost/log/LogSink.h>

#include "StdIO.h"

TaskConsole::TaskConsole(QObject * parent)
    : QThread(parent)
{
    setObjectName("TaskConsole");
    connect(this, SIGNAL(started()), this, SLOT(init()));
    QTimer::singleShot(100, this, SLOT(start()));
}


void TaskConsole::init(void)
{
#if 0
    E2BLog::LogSink * ls = new LogSink("LogFile", this);
    ls->set(QFileInfo("TaskConsole.log"));
    mLogger.addSink(ls);
#endif

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
