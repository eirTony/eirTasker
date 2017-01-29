#ifndef SUCCESS_H
#define SUCCESS_H
#include "TypeLib.h"

#include "Boolean.h"

class TYPESHARED_EXPORT Success : public Boolean
{
public:
    Success(void);

    void success(const bool is=true);
    void fail(void);
};

#endif // SUCCESS_H
