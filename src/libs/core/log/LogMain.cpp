#include "LogMain.h"

#include "../base/BasicName.h"

LogMain::LogMain(void) {;}

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
    foreach (LogOutput * pLO, mNameOutputMap)
        mLogQueue.append(LogQueueItem(li, pLO));
    return true;
}


// private
bool LogMain::addTroll(const QUrl & url)
{
    (void)url;
    return false;
}

