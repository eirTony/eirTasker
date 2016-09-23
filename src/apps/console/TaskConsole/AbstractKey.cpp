#include "AbstractKey.h"

#include <QtGlobal>

#include <QDateTime>

// static
QMap<AbstractKey, AbstractId> AbstractKey::smKeyIdMap;
QMap<AbstractId, AbstractKey> AbstractKey::smIdKeyMap;



AbstractKey::AbstractKey(void) {;}

AbstractKey::AbstractKey(const quint64 key)
    : mKey(key) {;}

AbstractKey::AbstractKey(const AbstractKey & other)
    : mKey(other.mKey) {;}

AbstractKey::AbstractKey(const AbstractId &id)
    : mKey(muster(id)) {;}

void AbstractKey::set(const qint64 key)
{
    mKey = key;
}

void AbstractKey::set(const AbstractId & id)
{
    set(smIdKeyMap.value(id));
}

AbstractKey AbstractKey::key(void) const
{
    return mKey;
}


quint64 AbstractKey::operator () (void) const
{
    return mKey;
}

AbstractKey::operator quint64 (void) const
{
    return mKey;
}

bool AbstractKey::operator == (const AbstractKey other) const
{
    return mKey == other.mKey;
}

AbstractKey AbstractKey::operator ++(void)
{
    return ++mKey;
}

bool AbstractKey::operator < (const AbstractKey other) const
{
    return mKey < other.mKey;
}

// static
AbstractKey AbstractKey::muster(const AbstractId & id)
{
    AbstractKey key = next();
    insert(key, id);
    return key;
}

// static
void AbstractKey::insert(const AbstractKey key,
                         const AbstractId & id)
{
    smKeyIdMap.insert(key, id);
    smIdKeyMap.insert(id, key);
}



// static
AbstractKey AbstractKey::next(void)
{
    AbstractKey key = QDateTime::currentMSecsSinceEpoch();
    while (smKeyIdMap.contains(key)) ++key;
    return key;
}
