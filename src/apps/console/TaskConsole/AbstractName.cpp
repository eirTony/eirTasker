#include "AbstractName.h"

AbstractName::AbstractName(void) {;}

AbstractName::AbstractName(const QString & name)
#if 1
    : QString(name) {;}
#else
{
    QString::append(name);
}
#endif
