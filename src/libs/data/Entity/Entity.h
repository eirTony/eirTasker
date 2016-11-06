#ifndef ENTITY_H
#define ENTITY_H
#include "EntityLib.h"

#include <QSettings>

#include "EntityData.h"
#include "EntityEncoding.h"

typedef bool Boolean; // FORNOW

class ENTITYSHARED_EXPORT Entity : public QSettings
{

public:
    Entity(void);

    Boolean encode(const EntityEncoding encoding,
                   const EntityData & encoded);
    EntityData decode(const EntityEncoding encoding);
};

#endif // ENTITY_H
