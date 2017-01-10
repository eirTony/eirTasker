#include "MainThread.h"

#include <QtDebug>
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
    dumpObjectInfo();
    LogMain::add(QUrl("troll://"));

#if 1
    // INFO("Starting TaskBox");
    QFileInfo fi(__FILE__);
    int fln = __LINE__;
    QString qfi(Q_FUNC_INFO);
    QString infoMsg("Starting TaskBox at "
                    + QDateTime::currentDateTime().toString());

#ifndef eIR_USE_FUNCINFO_WORKAROUND
    //FuncInfo fni(fni, qfi, fln);
    FuncInfo fni;
    fni.setRawFuncInfo(qfi);
    fni.setFileInfo(fi);
    fni.setFileLine(fln);



    //Log::instance()::add(li);
    LogItem li(Severity::Info, fni, infoMsg);
#else
    LogItem li(Info, qfi, fi, fln, infoMsg);
#endif // eIR_USE_FUNCINFO_WORKAROUND

    LogMain::add(li);

#elif 0
    INFO("Starting %1 at %2",
         QCoreApplication::arguments().first(),
         QDateTime::currentDateTime().toString());
#elif 0
    INFO("Starting " % QCoreApplication::arguments().first()
         % " at" % QDateTime::currentDateTime().toString())
#elif 1
    qDebug(qPrintable("Starting "
                      % QCoreApplication::arguments().first()
                      % " at "
                      % QDateTime::currentDateTime().toString()));
#endif
}
