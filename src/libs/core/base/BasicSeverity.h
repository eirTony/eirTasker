#ifndef BASICSEVERITY_H
#define BASICSEVERITY_H
#include "BaseLib.h"


enum enumSeverity
{
    NullBasicSeverity = 0,
    BaseTrace = 100,  
    Trace,
    MaxTrace,
    BaseDebug = 200,
    Debug, 
    MaxDebug, 
    BaseUser = 300,
    User,
    MaxUser,
    BaseInfo = 400,
    Info,
    MaxInfo,
    BaseWarning = 500,
    Warning,
    MaxWarning,
    BaseCritical = 600,
    Critical,
    MaxCritical,
    BaseFatal = 700,
    Fatal, 
    MaxFatal,
    MaxBasicSeverity
};

class BASESHARED_EXPORT BasicSeverity
{
public:
    BasicSeverity(const enumSeverity sev);

    bool isLevelGE(const enumSeverity other) const;
    enumSeverity level(void) const;

private:
    enumSeverity mSeverity;
};

#endif // BASICSEVERITY_H
