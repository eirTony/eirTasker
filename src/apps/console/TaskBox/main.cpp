#include <QCoreApplication>

#include "MainThread.h"

int main(int argc, char ** argv)
{
    QCoreApplication a(argc, argv);
#if 1
    // INFO("Starting TaskBox");
    QFileInfo fi(__FILE__);
    int fln = __LINE__;
    QString qfi(Q_FUNC_INFO);
    QString infoMsg("Starting TaskBox at "
                    + QDateTime::currentDateTime().toString());

#ifdef eIR_USE_FUNCINFO_WORKAROUND
    //FuncInfo fni(fni, qfi, fln);
    FuncInfo fni;
    fni.setRawFuncInfo(qfi);
    fni.setFileInfo(fi);
    fni.setFileLine(fln);



    //Log::instance()::add(li);
    LogItem li(QtInfoMsg, fni, infoMsg);
#else
    LogItem li(QtInfoMsg, qfi, fi, fln, infoMsg);
#endif // eIR_USE_FUNCINFO_WORKAROUND

    LogMain lm;
    lm.add(li);
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
    return a.exec();
}

