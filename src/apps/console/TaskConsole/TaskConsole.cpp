#include "TaskConsole.h"

#include <QtDebug>

#include <QDateTime>
#include <QTimer>

StdIO * TaskConsole::smpStdIO = 0;

TaskConsole::TaskConsole(QObject * parent)
    : QThread(parent)
//    , mpStdIO(new StdIODevice(QIODevice::WriteOnly, parent))
//    , smpStdIO(new StdIO(parent));
{
    setObjectName("TaskConsole");
  //  Q_ASSERT(mpStdIO->isWritable());
    if ( ! smpStdIO) smpStdIO = new StdIO(parent);
    connect(this, SIGNAL(started()), this, SLOT(init()));
    QTimer::singleShot(100, this, SLOT(start()));
}


void TaskConsole::init(void)
{
//    mpStdIO->writeLine("TaskConsole initialized " +
  //                  QDateTime::currentDateTime().toString());
  *StdIO::out << "TaskConsole init()" << endl;
}
