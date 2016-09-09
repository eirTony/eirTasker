#include "AbstractKey.h"

AbstractKey::AbstractKey(void) {;}

AbstractKey::AbstractKey(const quint64 key)
    : mKey(key) {;}

quint64 AbstractKey::operator () (void) const
{
    return mKey;
}
