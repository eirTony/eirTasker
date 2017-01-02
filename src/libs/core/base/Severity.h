#ifndef SEVERITY_H
#define SEVERITY_H
#include "BaseLib.h"

#include "Enumeration.h"

#define SEVERITY_ENUM(NV) \
    NV(NullSeverity, = 0)  \
    NV(BaseTrace, = 100)   \
    NV(Trace,) \
    NV(MaxTrace,) \
    NV(BaseDebug, = 200) \
    NV(Debug, ) \
    NV(MaxDebug, ) \
    NV(BaseUser, = 300) \
    NV(User,) \
    NV(MaxUser,) \
    NV(BaseInfo, = 400) \
    NV(Info,) \
    NV(MaxInfo,) \
    NV(BaseWarning, = 500) \
    NV(Warning,) \
    NV(MaxWarning,) \
    NV(BaseCritical, = 600) \
    NV(Critical,) \
    NV(MaxCritical,) \
    NV(BaseFatal, = 700) \
    NV(Fatal, ) \
    NV(MaxFatal,) \
    NV(MaxSeverity,) \

class BASESHARED_EXPORT Severity : public Enumeration
{
    DECLARE_ENUMERATION(Severity, SEVERITY_ENUM)

public:
    bool is(const Severity sev) const;
    Severity level(void) const;
};
#endif // SEVERITY_H
