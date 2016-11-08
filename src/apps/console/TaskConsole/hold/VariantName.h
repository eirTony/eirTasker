#ifndef VARIANTNAME_H
#define VARIANTNAME_H

#include "AbstractName.h"

#include <QString>

class VariantName : public AbstractName
{
public:
    VariantName(void);
    VariantName(const QString & name);
};

#endif // VARIANTNAME_H
