#ifndef LOGMAIN_H
#define LOGMAIN_H
#include "LogLib.h"

#include <QMap>
#include <QPair>
#include <QQueue>
#include <QUrl>

#include "../base/BasicName.h"

#ifdef USE_BOOST_LOG
#include "../boost/log/Logger.h"
#endif

#include "LogItem.h"

class LogObject;
class LogOutput;
typedef QPair<LogItem, LogOutput *> LogQueueItem;

class LOGSHARED_EXPORT LogMain
{
public:
    LogMain(void);
    static bool add(const QUrl & url);
    static bool add(const LogItem & li);
    static bool isQueueEmpty(void);
    static LogQueueItem takeFirst(void);

private:
    static bool addTroll(const QUrl & url);
    
private:
    static LogObject * mpLogObject;
    static QMap<BasicName, LogOutput *> mNameOutputMap;
    static QQueue<LogQueueItem> mLogQueue;

#ifdef USE_BOOST_LOG
    E2BLog::Logger::CorePtr mpCore =  0;
#endif
};

#endif // LOGMAIN_H
