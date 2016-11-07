#ifndef INDEX_H
#define INDEX_H
#include "Type.h"

class TYPESHARED_EXPORT Index
{
public:
    Index(const int x=-1);
    bool isValid(const int size) const;
    int valid(const int size) const;
    operator int (void) const;

private:
    bool isUnder(const int size) const;
    bool isOver(const int size) const;

private:
    int mInt;
};

class TestIndex
{
public:
    TestIndex(void);

private:
    void TestCtors(void);
};

#endif // INDEX_H
