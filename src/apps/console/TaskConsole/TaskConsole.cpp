#include "TaskConsole.h"

#include <QtDebug>

#include <QDateTime>
#include <QTimer>

TaskConsole::TaskConsole(QObject * parent)
    : QThread(parent)
    , mpStdIO(new StdIODevice(QIODevice::WriteOnly, parent))
{
    setObjectName("TaskConsole");
    Q_ASSERT(mpStdIO->isWritable());
    connect(this, SIGNAL(started()), this, SLOT(init()));
    QTimer::singleShot(100, this, SLOT(start()));
}

void TaskConsole::init(void)
{
    mpStdIO->writeLine("TaskConsole initialized " +
                    QDateTime::currentDateTime().toString());
}
