#include "MainThread.h"

#include <QtDebug>
#include <QCoreApplication>
#include <QDateTime>
#include <QFileInfo>
#include <QStringBuilder>
#include <QTimer>
#include <QUrl>

#include <../../../libs/core/log/Log.h>
#include <../../../libs/core/log/LogItem.h>
#include <../../../libs/core/log/LogMain.h>

MainThread::MainThread(QObject * parent)
    : QObject(parent)
{
    setObjectName("MainThread");
}

void MainThread::init(void) // slot
{
    LogMain::add(QUrl("troll://"));

#if 0
    INFO("Starting %1 at %2",
         QCoreApplication::arguments().first(),
         QDateTime::currentDateTime().toString());
#elif 1
    INFO("Starting " + QCoreApplication::arguments().first()
            + " at " + QDateTime::currentDateTime().toString());
#endif
}
