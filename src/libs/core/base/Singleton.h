#ifndef SINGLETON
#define SINGLETON

template <class CLASS> class StaticSingleton
{
public:
    CLASS & operator() (void) { return  instance(); }
    CLASS * operator*  (void) { return &instance(); }
private:
    CLASS & instance(void) { static CLASS one; return & one; }
};

#endif // SINGLETON

