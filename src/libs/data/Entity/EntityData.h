#ifndef ENTITYDATA_H
#define ENTITYDATA_H
#include "EntityLib.h"

#include <QVariant>

class ENTITYSHARED_EXPORT CodedEntity : public QVariant
{
public:
    CodedEntity(void);
};

#endif // ENTITYDATA_H
