#include "StdIO.h"

#include <stdio.h>

#include <QtDebug>

#include <QChar>
#include <QFile>
#include <QTextStream>
#include <QVector>

// static

StdIO::FilePtrList StdIO::smFilePtrList(StdIO::SizeStd);
//StdIO::StdStreamNamePtrMap StdIO::smStdStreamNamePtrMap;


StdIO::StdIO(QObject * parent)
    : QObject(parent)
{
}

// protected static
FILE * StdIO::fp(const StdName std)
{
    FILE * p = 0;
    switch (std)
    {
    case In:    p = stdin;      break;
    case Err:   p = stderr;     break;

    case Log:
#ifdef STDIO_HAS_LOG
                p = stdlog;     break;
#else
                ; // fall to stdinfo or stdout
#endif
    case StdInfo:
#ifdef STDIO_HAS_INFO
                p = stdinfo;    break;
#else
                ; // fall to stdout
#endif
    case Out:   p = stdout;     break;

    case NullStd:
    case SizeStd:
    default:
                /* nada */      break;
    }
    return p;
}

// protected static
QFile * StdIO::file(const StdName std)
{
    QFile * f = smFilePtrList[std];
    if (0 == f)
    {
        FILE * pf = fp(std);
        f = new QFile();        Q_CHECK_PTR(f);
        if (stdin == pf)
        {
            f->open(pf, QIODevice::Text | QIODevice::ReadOnly);
            if ( ! f->isReadable()) qCritical("stdin not readable");
        }
        else if (pf)
        {
#if 1
            f->open(pf, QIODevice::Text | QIODevice::WriteOnly
                             /*   | QIODevice::Append */);
#else
            f->setFileName("./standardout.txt");
            f->open(QIODevice::Text | QIODevice::WriteOnly
                                | QIODevice::Append);
#endif
            if ( ! f->isWritable())
            {
                qWarning() << "std output" << pf << "open error" << f->error() << f->errorString();
                qCritical("std output not writeable");
            }
        }
        else
        {
            qWarning("unhandled std file");
        }
     }
    return f;
}

// static
void StdIO::info(const QString & message,
                 const QVariant & var1,
                 const QVariant & var2,
                 const QVariant & var3,
                 const QVariant & var4)
{
    write(StdIO::StdInfo, message, var1, var2, var3, var4);
}

// protected static
QByteArray StdIO::formatted(const QString & message,
                 const QVariant & var1,
                 const QVariant & var2,
                 const QVariant & var3,
                 const QVariant & var4)
{
    QByteArray ba = message.toLocal8Bit();
    ba.replace("%1", var1.toString().toLocal8Bit());
    ba.replace("%2", var2.toString().toLocal8Bit());
    ba.replace("%3", var3.toString().toLocal8Bit());
    ba.replace("%4", var4.toString().toLocal8Bit());
    return ba;
}

// protected static
void StdIO::write(const StdIO::StdName std,
                  const QString & message,
                 const QVariant & var1,
                 const QVariant & var2,
                 const QVariant & var3,
                 const QVariant & var4)
{
    QFile * f = file(std);  Q_CHECK_PTR(f);
    QByteArray ba = formatted(message + "\r\n",
                              var1, var2, var3, var4);
    if ( ! ba.isEmpty()) f->write(ba);
    f->flush();
}
