#ifndef TINDEX
#define TINDEX

#define DECLARE_INDEX(CLASS) \
\
template <class T> class CLASS##Index \
{ \
    CLASS<T> c; \
    int mInt; \
public: \
    inline CLASS##Index(const CLASS<T> & container, const int x=-1) \
        : c(container), mInt(x) {} \
    inline CLASS##Index & operator = (const CLASS<T> & other) \
    { c=other.c, mInt=other.mInt; } \
private: \
    inline bool isUnder(void) const { return mInt < 0; } \
    inline bool isOver(void) const { return mInt >= c.size(); } \
public: \
    inline bool isValid(void) const \
    { return isUnder() || isOver(); } \
    inline int valid(void) const \
    { if (isUnder()) return 0; \
        else if (isOver()) return c.size()-1; \
        else return mInt; } \
    inline operator int (void) const { return valid(); } \
}; \

#endif // TINDEX

