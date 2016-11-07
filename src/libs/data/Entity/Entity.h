#ifndef ENTITY_H
#define ENTITY_H
#include "EntityLib.h"

#include <QSettings>

#include "CodedEntity.h"
//#include "EntityEncoding.h"
class EntityEncoding;

class ENTITYSHARED_EXPORT Entity : public QSettings
{

public:
    Entity(void);

    Boolean encode(const EntityEncoding & encoding,
                   const CodedEntity & encoded);
    CodedEntity decode(const EntityEncoding & encoding);
};

#endif // ENTITY_H
