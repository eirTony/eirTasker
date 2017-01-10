#ifndef ENTITYKEY_H
#define ENTITYKEY_H
#include "EntityLib.h"

#include <QList>

#include "../Kii/BitKey.h"

class ENTITYSHARED_EXPORT EntityKey // : public BitKey
{
public:
    typedef QList<EntityKey> List;

public:
    EntityKey(void);
};

#endif // ENTITYKEY_H
