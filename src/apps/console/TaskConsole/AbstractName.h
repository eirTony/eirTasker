#ifndef ABSTRACTNAME_H
#define ABSTRACTNAME_H

#include <QString>

class AbstractName : public QString
{
public:
    AbstractName(void);
    AbstractName(const QString & name);
};

#endif // ABSTRACTNAME_H
