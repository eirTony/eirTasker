#ifndef ABSTRACTENTITY_H
#define ABSTRACTENTITY_H

#include <QVariantMap>

class AbstractKey;
class AbstractName;
class AbstractInfo;

class AbstractEntity : public QVariantMap
{
public:
    AbstractEntity(void);
    AbstractEntity(const AbstractKey key,
                   const AbstractName & name,
                   const AbstractInfo & info);
    AbstractEntity(const AbstractEntity & other);
};

#endif // ABSTRACTENTITY_H
