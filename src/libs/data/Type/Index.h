#ifndef INDEX_H
#define INDEX_H
#include "Type.h"

#include <QList>

#include "TIndex.h"

DECLARE_INDEX(QList)

class TestListIndex
{
public:
    TestListIndex(void);

private:
    void TestListCtors(void);
};

#endif // INDEX_H
