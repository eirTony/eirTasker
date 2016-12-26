#ifndef STREAMPARSED
#define STREAMPARSED
#include "TypeLib.h"

#include <QSize>
#include <QString>
#include <QTextStream>

#include "Integer.h"

class TYPESHARED_EXPORT StreamParsed
{
public:
    StreamParsed(const QString & s);
    QSize toSize(void);

private:
    QList<int> toIntList(void);

private:
    const QString cmString;
    QTextStream mTextStream;
};

#endif // STREAMPARSED


