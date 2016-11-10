#ifndef BASELIB_H
#define BASELIB_H
#include "base_global.h"

class BinaryBase;

class BASESHARED_EXPORT BaseLib
{

public:
    BaseLib(void);

private:
    BinaryBase * cmpBase = 0;
};

#endif // BASELIB_H
