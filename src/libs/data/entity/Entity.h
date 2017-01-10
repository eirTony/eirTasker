#ifndef ENTITY_H
#define ENTITY_H
#include "EntityLib.h"

#include <QList>
#include <QSettings>

#include "EncodedEntity.h"
#include "EntityKey.h"
#include "EntityType.h"
class EntityEncoding;

#if 1
typedef QSettings Entity;
typedef QList<Entity> EntityList;
#else
class ENTITYSHARED_EXPORT Entity : public QSettings
{
public:
    typedef QList<Entity> List;

public:
    Entity(void);
    Entity(const Entity & other);
    void set(const EntityType & etype);
    void setKey(const EntityKey & key);

    Boolean decode(const EntityEncoding & encoding,
                   const EncodedEntity & encoded);
    EncodedEntity encode(const EntityEncoding & encoding);

private:
    EntityType mType;
    EntityKey mKey;
};
#endif
#endif // ENTITY_H
