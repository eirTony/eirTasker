#ifndef ENTITYPROPERTY
#define ENTITYPROPERTY


#define ENTITYPROP_DECLARE(TYPE, NAME, DFLT) \
    private: \
        TYPE NAME##_##TYPE; \
    public: \
        void init##NAME(void)      { NAME##_##TYPE = DFLT; } \
        void set##NAME(TYPE v)     { NAME##_##TYPE = v;    } \
        TYPE get##NAME(void) const { return NAME##_##TYPE; } \

#define ENTITYPROP_CTOR(TYPE, NAME, DFLT) \
        init##NAME(); \

#define DECLARE_ENTITYPROPS(DEF) \
        DEF(ENTITYPROP_DECLARE) \

#define DEFINE_ENTITYPROPS_CTORS(DEF) \
        DEF(ENTITYPROP_CTOR) \

#endif // ENTITYPROPERTY

