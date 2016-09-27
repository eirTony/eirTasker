#include "TaskConsole.h"

#include <QtDebug>

#include <QDateTime>
#include <QTimer>

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
    StdIO::info("TaskConsole initialized at %1",
                QDateTime::currentDateTime().toString());
}
