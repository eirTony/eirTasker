#ifndef SEVERITY_H
#define SEVERITY_H
#include "BaseLib.h"

#include "Enumeration.h"

#define SEVERITY_ENUM(NV) \
    NV(NullSeverity, = 0)  \
    NV(BaseTrace, = 100)   \
    NV(Trace,) \
    NV(MaxTrace,) \
    NV(BaseUser, = 200) \
    NV(User,) \
    NV(MaxUser,) \
    NV(BaseInfo, = 300) \
    NV(Info,) \
    NV(MaxInfo,) \
    NV(BaseWarning, = 400) \
    NV(Warning,) \
    NV(MaxWarning,) \
    NV(BaseCritical, = 500) \
    NV(Critical,) \
    NV(MaxCritical,) \
    NV(BaseFatal, = 600) \
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
