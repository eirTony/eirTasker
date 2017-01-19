#include "LogFormat.h"

LogFormat::LogFormat(const LogItem & li)
{
    QVariantList qvl = li.getVariables();
    int n = qvl.size();
    QByteArray ba(li.getFormat().toLocal8Bit());
    for (int x = 1; x <= n; ++x)
    {
        QString pct = "%" + QString::number(x);
        ba.replace(pct, qvl.value(x-1)
                   .toString().toLocal8Bit());
    }
    QByteArray::append(ba);
}
