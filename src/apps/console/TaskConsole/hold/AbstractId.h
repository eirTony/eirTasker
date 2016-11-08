#ifndef ABSTRACTID_H
#define ABSTRACTID_H

#include <QStringList>

class AbstractId : public QStringList
{
public:
    AbstractId(void);
    AbstractId(const char * chars);
    AbstractId(const QString & s);
    void set(const QString & s);
    QString sortable(void) const;
    bool operator == (const AbstractId & other);
    bool operator <  (const AbstractId & other);

private: // static
    static const QString scSeparator;
};

bool operator < (const AbstractId & left, const AbstractId & right);

#endif // ABSTRACTID_H
