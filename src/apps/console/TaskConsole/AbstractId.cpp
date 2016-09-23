#include "AbstractId.h"

// static
const QString AbstractId::scSeparator("/");

AbstractId::AbstractId(void) {;}

AbstractId::AbstractId(const char * chars)
{
    set(QString(chars));
}

AbstractId::AbstractId(const QString & s)
{
    set(s);
}

void AbstractId::set(const QString & s)
{
    QStringList::clear();
    QString in(s.simplified());
    QStringList qsl(s.split(scSeparator, QString::SplitBehavior::SkipEmptyParts));
    QStringList::append(qsl);
}

QString AbstractId::sortable(void) const
{
    return QStringList::join(scSeparator).toUpper();
}

bool AbstractId::operator == (const AbstractId & other)
{
    return sortable() == other.sortable();
}

bool AbstractId::operator <  (const AbstractId & other)
{
    return sortable() < other.sortable();
}

bool operator < (const AbstractId & left, const AbstractId & right)
{
    return left.sortable() < right.sortable();
}
