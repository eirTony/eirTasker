#ifndef FLAGS_H
#define FLAGS_H

#include <QBitArray>

#include "Index.h"

class Flags
{
public:
    Flags(const int size=0,
          const bool is=false);
    bool isNull(void) const;
    bool isNull(const Index x) const;

private:
    QBitArray mIsBits;
    QBitArray mValidBits;
};

#endif // FLAGS_H
