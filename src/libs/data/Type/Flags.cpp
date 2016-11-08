#include "Flags.h"

Flags::Flags(const int size, const bool is)
    : mIsBits(size, is), mValidBits(size, true) {;}

bool Flags::isNull(void) const
{
    return mIsBits.isNull() || mValidBits.isNull();
}

#if 0
bool Flags::isNull(const Index x) const
{
    return x.isValid(mIsBits.size()) && x.isValid(mValidBits.size())
            ? ( ! mValidBits.at(x))
            : true;
}
#endif
