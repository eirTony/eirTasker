#include "Index.h"

Index::Index(const int x) : mInt(x) {;}

bool Index::isValid(const int size) const
{
    return (mInt >= 0) && (mInt < size);
}

Index::operator int (void) const
{
    return mInt;
}
