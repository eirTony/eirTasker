#include "LogFormat.h"

LogFormat::LogFormat(const LogItem & li)
{
    QByteArray::append(li.getFormat());
}
