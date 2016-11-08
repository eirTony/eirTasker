#ifndef ABSTRACTKEY_H
#define ABSTRACTKEY_H

#include <QtGlobal>

#include <QList>
#include <QMap>

#include "AbstractId.h"

class AbstractKey
{
public:
    typedef QList<AbstractKey> List;

public:
    AbstractKey(void);
    AbstractKey(const quint64 key);
    AbstractKey(const AbstractKey & other);
    AbstractKey(const AbstractId &id);

public:
    quint64 operator () (void) const;
    void set(const qint64 key);
    void set(const AbstractId & id);
    AbstractKey key(void) const;
    AbstractId id(void) const;
    operator quint64 (void) const;
    bool operator == (const AbstractKey other) const;
    AbstractKey operator ++(void);
    bool operator < (const AbstractKey other) const;

private:
    quint64 mKey = 0;

public: // static
    static AbstractKey muster(const AbstractId & id);
    static AbstractKey next(void);
    static void insert(const AbstractKey key,
                    const AbstractId & id);
    static AbstractKey key(const AbstractId & id);
    static AbstractId id(const AbstractKey & key);

private: // static
    static QMap<AbstractKey, AbstractId> smKeyIdMap;
    static QMap<AbstractId, AbstractKey> smIdKeyMap;
};

#endif // ABSTRACTKEY_H
