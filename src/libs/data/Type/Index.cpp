#include "Index.h"

#include <QtTest>
#include <QStringList>

//Index::Index(const int x) : mInt(x) {;}

TestListIndex::TestListIndex(void)
{
    TestListCtors();
}

void TestListIndex::TestListCtors(void)
{
    QList<int> qliNull;
    QListIndex<int> xNull(qliNull);
    QCOMPARE(xNull.isValid(), false);
}

#if 0
bool Index::isValid(void) const
{
    return (mInt >= 0) && (mInt < size);
}

int Index::valid(void) const
{
    if (isUnder(size)) return 0;
    if (isOver(size)) return size-1;
    return mInt;
}

Index::operator int (void) const
{
    return mInt;
}

bool Index::isUnder(void) const
{
    (void)size;
    return mInt < 0;
}

bool Index::isOver(void) const
{
    return mInt >= size;
}
#endif
