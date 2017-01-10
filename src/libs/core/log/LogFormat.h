#ifndef LOGFORMAT_H
#define LOGFORMAT_H

#include <QByteArray>

#include "LogItem.h"

class LogFormat : public QByteArray
{
public:
    LogFormat(const LogItem & li);
};

#endif // LOGFORMAT_H
