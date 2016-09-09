#include "AbstractEntity.h"

#include "AbstractKey.h"
#include "AbstractName.h"
#include "AbstractInfo.h"

AbstractEntity::AbstractEntity(void) {;}

AbstractEntity::AbstractEntity(const AbstractKey key,
               const AbstractName & name,
               const AbstractInfo & info)
{
    QVariantMap::insert("{Entity}/Key", key());
    QVariantMap::insert("{Entity}/Name", name);
    QVariantMap::insert("{Entity}/Info", info);
}

AbstractEntity::AbstractEntity(const AbstractEntity & other)
    : QVariantMap(other) {;}

