#ifndef BASICSEVERITY_H
#define BASICSEVERITY_H
#include "BaseLib.h"


enum enumSeverity
{
    NullBasicSeverity = 0,
    BaseTrace = 100,  
    Trace,
    MaxTrace = 199,
    BaseDebug = 200,
    Debug, 
    MaxDebug = 299,
    BaseUser = 300,
    User,
    MaxUser = 399,
    BaseInfo = 400,
    Info,
    MaxInfo = 499,
    BaseWarning = 500,
    Warning,
    MaxWarning = 599,
    BaseCritical = 600,
    Critical,
    MaxCritical = 699,
    BaseSystem = 700,
    System,
    MaxSystem = 799,
    BaseFatal = 800,
    Fatal,
    MaxFatal = 899,
    MaxBasicSeverity
};

class BASESHARED_EXPORT BasicSeverity
{
public:
    BasicSeverity(const enumSeverity
                        sev=NullBasicSeverity);
    BasicSeverity(const int i);

    bool isNull(void) const;
    bool isValid(void) const;
    operator bool (void) const;
    bool isLevelGE(const enumSeverity other) const;
    enumSeverity level(void) const;
    QtMsgType trollType(void) const;
    bool isLT(const BasicSeverity sev) const;
    bool isGT(const BasicSeverity sev) const;

private:
    enumSeverity mSeverity = NullBasicSeverity;
};

#endif // BASICSEVERITY_H
