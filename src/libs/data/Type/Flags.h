#ifndef FLAGS_H
#define FLAGS_H
#include "TypeLib.h"

#include <QBitArray>

#include "Index.h"

class TYPESHARED_EXPORT Flags
{
public:
    Flags(const int size=0,
          const bool is=false);
    bool isNull(void) const;
//    bool isNull(const Index x) const;
    void set(const Index x, const bool is=true);

private:
    QBitArray mIsBits;
    QBitArray mValidBits;
};

#endif // FLAGS_H
