#include "AbstractName.h"

AbstractName::AbstractName(void) {;}

AbstractName::AbstractName(const QString & name)
{
    QString::append(name);
}
