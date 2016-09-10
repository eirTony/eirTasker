#include "StdIODevice.h"

#include <QFile>
#include <QTextStream>

StdIODevice::StdIODevice(QIODevice::OpenMode mode,
                         QObject * parent)
    : QObject(parent)
{
    setObjectName("StdIODevice");
    Q_ASSERT(open(mode));
}

// slot
bool StdIODevice::open(const QIODevice::OpenMode mode)
{
    if (mode & QIODevice::WriteOnly)
    {
        mpOutFile = new QFile(parent());
        Q_ASSERT(mpOutFile);
        Q_ASSERT(mpOutFile->open(stdout, QIODevice::WriteOnly));
        Q_ASSERT(mpOutFile->isWritable());
        mpOutStream = new QTextStream(mpOutFile);
        Q_ASSERT(mpOutStream);
        Q_ASSERT(mpOutStream->device()->isWritable());
    }

    return true;
}

bool StdIODevice::isWritable(void) const
{
    return mpOutFile && mpOutStream
            && mpOutFile->isWritable()
            && mpOutStream->device()
            && mpOutStream->device()->isWritable();
}

bool StdIODevice::writeLine(const QString & line)
{

    QByteArray chars((line+"\r\n").toLocal8Bit());
    bool success = isWritable()
            && (chars.length()
                == mpOutFile->write(chars.data(), chars.length()));
    mpOutFile->flush();
    return success;
}
