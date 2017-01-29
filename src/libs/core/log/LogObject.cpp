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
        if (false)
            {;}
#ifdef QT_FATAL_WARNINGS
        else if (mMaxSeverity.isLevelGE(Warning))
            qWarning("Warning-level Exit");
#endif
        else if (mMaxSeverity.isLevelGE(Critical))
            qCritical("Critical-level Exit");
        else if (mMaxSeverity.isLevelGE(Fatal))
            qFatal("Fatal-level Exit");
    }
    else
    {
        LogQueueItem lqi = LogMain::takeFirst();
        LogItem li = lqi.first;
        BasicSeverity sev = li.getBasicSeverity();
        mMaxSeverity.setMax(sev);
        LogOutput * plo = lqi.second;
        QByteArray ba = LogFormat(li);
        plo->write(sev, ba);
        QTimer::singleShot(100, this, SLOT(processQueue()));
    }
}
