#include "LogSink.h"

#include <QFile>
#include <QFileInfo>
#include <QIODevice>
#include <QTextStream>

#include "Logger.h"
#include "LogFilter.h"

E2BLog::LogSink::LogSink(const QString &name,
                 QObject * parent)
    : QObject(parent)
    , cmName(name)
{

}

// static
bool E2BLog::LogSink::set(QTextStream * ts)
{
    if (mpStream) mpStream->flush();
    QTextStream * mpStream = ts;
    return !! mpStream;
}

// static
bool E2BLog::LogSink::set(QIODevice * iod)
{
    if (mpIOD)  mpIOD->close();
    QIODevice * mpIOD = qobject_cast<QIODevice*>(iod);
    return mpIOD && mpIOD->isWritable();
}

// static
bool E2BLog::LogSink::set(const QFileInfo & fi)
{
    QFile * f = new QFile(fi.absoluteFilePath(), this);
    if (f) f->open(QIODevice::WriteOnly);
    return set(f);
}
