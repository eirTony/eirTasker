#ifndef TINTEGER
#define TINTEGER

template <typename INT> class TInteger
{
public:
    TInteger(void) {;}
    TInteger(const INT value) : mInt(value & csmMask) {;}
    bool isNull(void) const { return !! mInt & csmNull; }
    INT & operator & (void) const { return &(mInt & csmMask); }

private:
    const static INT csmNull = 1 << sizeof(INT) * 8 - 1;
    const static INT csmMask = ~ csmNull;
    INT mInt = csmNull;
};

#endif // TINTEGER

