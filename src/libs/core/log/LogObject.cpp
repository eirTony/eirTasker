#include "LogObject.h"

#include <QTimer>

#include "LogFormat.h"
#include "LogMain.h"
#include "LogOutput.h"

LogObject::LogObject(QObject * parent)
    : QObject(parent)
{
    setObjectName("LogObject");
}

void LogObject::processQueue(void)
{
    if (LogMain::isQueueEmpty())
    {
        emit queueProcessed();
    }
    else
    {
        LogQueueItem lqi = LogMain::takeFirst();
        LogItem li = lqi.first;
        LogOutput * plo = lqi.second;
        QByteArray ba = LogFormat(li);
        plo->write(li.getBasicSeverity(), ba);
        QTimer::singleShot(100, this, SLOT(processQueue()));
    }
}
