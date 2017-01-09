#include "BasicName.h"

const QString BasicName::csmNameChars("0123456789_"
                               "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                               "abcdefghijklmnopqrstuvwxyz");

BasicName::BasicName(void) {;}

BasicName::BasicName(const QString & s) { set(s); }

BasicName::BasicName(const char * chars) { set(chars); }

void BasicName::set(const QString & s)
{
    foreach (QChar c, s) if (csmNameChars.contains(c)) mName.append(c);
}

void BasicName::set(const char * chars)
{
    set(QString(chars));
}

void BasicName::clear(void)
{
    mName.clear();
}

bool BasicName::isNull(void) const
{
    return mName.isNull();
}

QString BasicName::toString(void) const
{
    return mName.toLower();
}

QString BasicName::toLower(void) const
{
    return toString().toLower();
}

BasicName::operator QString (void) const
{
    return toString();
}

bool BasicName::is(const QString & s) const
{
    return toLower() == s.toLower();
}

bool BasicName::operator < (const BasicName & other) const
{
    return toLower() < other.toLower();
}

#if 0
bool BasicName::operator == (const BasicName & other)
{
    return is(other);
}

bool operator < (const BasicName & lhs, const BasicName & rhs)
{
    return lhs.toLower() < rhs.toLower();
}
#endif
