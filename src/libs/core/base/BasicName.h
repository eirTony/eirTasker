#ifndef BASICNAME_H
#define BASICNAME_H
#include "BaseLib.h"

#include <QList>
#include <QString>

class BASESHARED_EXPORT BasicName
{
public:
    typedef QList<BasicName> List;

public:
    BasicName(void);
    BasicName(const QString & s);
    BasicName(const char * chars);
    void set(const QString & s);
    void set(const char * chars);
    void clear(void);
    QString toString(void) const;
    QString toLower(void) const;
    operator QString (void) const;
    bool operator < (const BasicName & other);

    friend bool operator < (const BasicName & lhs,
                            const BasicName & rhs);
private:
    QString mName;

private: // const static
    const static QString csmNameChars;
};

typedef BasicName::List BasicNameList;

#endif // BASICNAME_H