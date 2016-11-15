#ifndef INDEX_H
#define INDEX_H
#include "Type.h"


#if 1
typedef int Index;
#else
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
#endif

#endif // INDEX_H
