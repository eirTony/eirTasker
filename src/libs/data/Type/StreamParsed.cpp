#include "StreamParsed.h"

StreamParsed::StreamParsed(const QString & s)
    : cmString(s)
    , mTextStream(cmString.toLocal8Bit(), QIODevice::ReadOnly | QIODevice::Text)
{
}

QSize StreamParsed::toSize(void)
{
    QList<int> il = toIntList();
    return (il.size() < 2) ? QSize() : QSize(int(il.at(0)), int(il.at(1)));
}

// private
QList<int> StreamParsed::toIntList(void)
{
    QList<int> il;
    while ( ! mTextStream.atEnd())
    {
        int i;
        mTextStream >> i;
        il.append(i);
    }
    return il;
}

