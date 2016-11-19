#ifndef TASKCONSOLE_H
#define TASKCONSOLE_H

#include <QThread>

#include <../../../libs/core/boost/log/Logger.h>
#include <../../../libs/core/boost/log/LogSink.h>

class TaskConsole : public QThread
{
    Q_OBJECT
public:
    explicit TaskConsole(QObject * parent=0);

signals:

public slots:

private slots:
    void init(void);

private:
    E2BLog::Logger mLogger;
};

#endif // TASKCONSOLE_H
