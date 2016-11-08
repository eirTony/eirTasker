#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <QtGlobal>

class Boolean
{
private:
    typedef quint8 Type;
public:
    Boolean(void);
    Boolean(const bool is);

    void clear(void);
    void set(const bool is);

    bool is(void) const;

private:
    union
    {
        Type    value;
        Type    is : 1,
                valid : 1,
                invalid;
    } mUnion;
};

#endif // BOOLEAN_H
