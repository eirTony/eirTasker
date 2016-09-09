#ifndef ABSTRACTKEY_H
#define ABSTRACTKEY_H

#include <QtGlobal>

class AbstractKey
{
public:
    AbstractKey(void);
    AbstractKey(const quint64 key);
    quint64 operator ()(void) const;

private:
    quint64 mKey = 0;
};

#endif // ABSTRACTKEY_H
