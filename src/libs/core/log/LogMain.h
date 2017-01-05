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

class LogOutput;
typedef QPair<LogItem, LogOutput *> LogQueueItem;

class LOGSHARED_EXPORT LogMain
{
public:
    LogMain(void);
    bool add(const QUrl & url);
    bool add(const LogItem & li);

private:
    bool addTroll(const QUrl & url);
    
private:
    QMap<BasicName, LogOutput *> mNameOutputMap;
    QQueue<LogQueueItem> mLogQueue;

#ifdef USE_BOOST_LOG
    E2BLog::Logger::CorePtr mpCore =  0;
#endif
};

#include "../base/Singleton.h"
class LOGSHARED_EXPORT Log : public StaticSingleton<LogMain> {;};
#define LOG() { Log() }

#endif // LOGMAIN_H
