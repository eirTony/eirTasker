#ifndef VARIANTMAP_H
#define VARIANTMAP_H

#include <QMap>
#include "VariantId.h"
#include "Variant.h"

class VariantMap : public QMap <VariantId, Variant>
{
public:
    VariantMap(void);
};

#endif // VARIANTMAP_H
