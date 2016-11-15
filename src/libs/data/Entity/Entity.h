#ifndef ENTITY_H
#define ENTITY_H
#include "EntityLib.h"

#include <QList>
#include <QSettings>

#include "EncodedEntity.h"
//#include "EntityEncoding.h"
class EntityEncoding;

class ENTITYSHARED_EXPORT Entity : public QSettings
{
public:
    typedef QList<Entity> List;

public:
    Entity(void);

    Boolean encode(const EntityEncoding & encoding,
                   const EncodedEntity & encoded);
    EncodedEntity decode(const EntityEncoding & encoding);
};

#endif // ENTITY_H
