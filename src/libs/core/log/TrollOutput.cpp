#include "TrollOutput.h"

TrollOutput::TrollOutput(const QUrl & url)
    : LogOutput(url)
{
    if (name().isNull()) set(BasicName("troll"));
}

bool TrollOutput::write(const BasicSeverity sev,
                   const QByteArray & ba)
{
    QtMsgType qmt = sev.trollType();
    switch (qmt)
    {
    case QtInfoMsg:     qInfo(ba);      break;
#ifndef QT_FATAL_WARNINGS
    case QtDebugMsg:    qDebug(ba);     break;
    case QtWarningMsg:
    case QtCriticalMsg:
    case QtFatalMsg:    qWarning(ba);   break;
#else
    case QtDebugMsg:
    case QtWarningMsg:
    case QtCriticalMsg:
    case QtFatalMsg:    qDebug(ba);     break;
#endif
    }
    return true;
}

