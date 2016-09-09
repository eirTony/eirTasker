#include "AbstractInfo.h"

AbstractInfo::AbstractInfo(void) {;}

AbstractInfo::AbstractInfo(const QVariant & info)
{
    QVariant::setValue(info);
}
