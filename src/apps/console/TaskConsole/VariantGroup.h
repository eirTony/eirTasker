#ifndef VARIANTGROUP_H
#define VARIANTGROUP_H

#include <QMap>
#include "Variant.h"
#include "VariantName.h"

class VariantGroup : public QMap<VariantName, Variant>
{
public:
    VariantGroup(void);
};

#endif // VARIANTGROUP_H
