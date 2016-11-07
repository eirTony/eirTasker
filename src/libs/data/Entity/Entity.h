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
                   const CodedEntity & encoded);
    CodedEntity decode(const EntityEncoding encoding);
};

#endif // ENTITY_H
