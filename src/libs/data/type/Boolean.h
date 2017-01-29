#ifndef BOOLEAN_H
#define BOOLEAN_H
#include "TypeLib.h"

class TYPESHARED_EXPORT Boolean
{
public:
    Boolean(void);
    Boolean(const bool is);
    bool is(void) const;
    void set(const bool is=true);
    bool operator () (void) const;


private:
    bool mValue = false;
    bool mValid = false;
};

#endif // BOOLEAN_H
