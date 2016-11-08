#ifndef VARIANTID_H
#define VARIANTID_H

#include "AbstractId.h"

class VariantId : public AbstractId
{
public:
    VariantId(const AbstractId & id=AbstractId());
};

#endif // VARIANTID_H
