#include "Boolean.h"

Boolean::Boolean(void) : mValue(false), mValid(false) {;}
Boolean::Boolean(const bool is) : mValue(is), mValid(true) {;}

void Boolean::set(const bool is)
{
    mValue = is, mValid = true;
}

bool Boolean::is(void) const
{
    return mValue && mValid;
}

bool Boolean::operator () (void) const
{
    return is();
}
