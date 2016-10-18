#include "Index.h"

#include <QtTest>
#include <QStringList>

Index::Index(const int x) : mInt(x) {;}

TestIndex::TestIndex(void)
{
    TestCtors();
}

void TestIndex::TestCtors(void)
{
    QStringList qslNull;
    Index xNull;
    QCOMPARE(xNull.isValid(qslNull.size()), false);
}


bool Index::isValid(const int size) const
{
    return (mInt >= 0) && (mInt < size);
}

int Index::valid(const int size) const
{
    if (isUnder(size)) return 0;
    if (isOver(size)) return size-1;
    return mInt;
}

Index::operator int (void) const
{
    return mInt;
}

bool Index::isUnder(const int size) const
{
    (void)size;
    return mInt < 0;
}

bool Index::isOver(const int size) const
{
    return mInt >= size;
}
