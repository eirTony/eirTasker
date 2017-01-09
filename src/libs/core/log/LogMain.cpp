#include "LogMain.h"

#include <QCoreApplication>
#include <QTimer>

#include "../base/BasicName.h"

#include "LogObject.h"
#include "TrollOutput.h"

LogObject * LogMain::mpLogObject = new LogObject(qApp);
QMap<BasicName, LogOutput *> LogMain::mNameOutputMap;
QQueue<LogQueueItem> LogMain::mLogQueue;

bool LogMain::add(const QUrl & url)
{
    BasicName scheme = url.scheme();
    if (scheme.is("troll"))
        return addTroll(url);
    else
        return false;
}

bool LogMain::add(const LogItem & li)
{
    foreach (LogOutput * plo, mNameOutputMap)
    {
        if (plo && plo->filter(li))
            mLogQueue.append(LogQueueItem(li, plo));
    }
    QTimer::singleShot(100, mpLogObject, SLOT(processQueue()));
    return true;
}

bool LogMain::isQueueEmpty(void)
{
    return mLogQueue.isEmpty();
}

LogQueueItem LogMain::takeFirst(void)
{
    return mLogQueue.takeFirst();
}


// private
bool LogMain::addTroll(const QUrl & url)
{
#if 0
    LogOutput * plo = new TrollOutput(url);
    if (plo->isError())    return false;
    mNameOutputMap.insert(plo->name(), plo);
#else
    mNameOutputMap.insert(BasicName("troll"),
                          new TrollOutput(url));
#endif
    return true;
}

