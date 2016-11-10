#ifndef BASELIB_H
#define BASELIB_H
#include "base_global.h"

class BinaryBase;

class BASESHARED_EXPORT BaseLib
{

public:
    BaseLib(void);

private:
    BinaryBase * cmpBase;
};

#endif // BASELIB_H
