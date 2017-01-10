#include "Entity.h"

#if 1
#else
Entity::Entity(void) {;}

Entity::Entity(const Entity & other)
    : QSettings()
{
    QSettings::clear();
    QStringList keys = other.allKeys();
    foreach (QString key, keys)
        QSettings::setValue(key, other.value(key));
}
#endif
