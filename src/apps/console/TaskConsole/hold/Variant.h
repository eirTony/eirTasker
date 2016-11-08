#ifndef VARIANT_H
#define VARIANT_H

#include <QVariant>

class Variant : public QVariant
{
public:
    Variant(const QVariant & other=QVariant());
};

#endif // VARIANT_H
