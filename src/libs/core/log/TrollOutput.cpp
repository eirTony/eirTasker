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
    case QtDebugMsg:    qDebug(ba);     break;
    case QtInfoMsg:     qInfo(ba);      break;
    case QtWarningMsg:  qWarning(ba);   break;
    case QtCriticalMsg: qCritical(ba);  break;
    case QtFatalMsg:    qFatal(ba);     break;
    }
    return true;
}

