#ifndef ABSTRACTINFO_H
#define ABSTRACTINFO_H

#include <QVariant>

class AbstractInfo : public QVariant
{
public:
    AbstractInfo(void);
    AbstractInfo(const QVariant & info);
};

#endif // ABSTRACTINFO_H
