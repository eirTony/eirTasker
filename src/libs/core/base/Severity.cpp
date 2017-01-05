#include "Severity.h"

DEFINE_ENUMERATION(Severity, SEVERITY_ENUM)

bool Severity::is(const Severity sev) const
{
    return Enumeration::value() >= sev;
}

Severity Severity::level(void) const
{
    Severity sev; // null Enumeration
    int v = value();

    if (false)
        {;}
    else if (v >= BaseTrace && v <= MaxTrace)
        sev = Trace;
    else if (v >= BaseUser && v <= MaxUser)
        sev = User;
    else if (v >= BaseInfo && v <= MaxInfo)
        sev = Info;
    else if (v >= BaseWarning && v <= MaxWarning)
        sev = Warning;
    else if (v >= BaseCritical && v <= MaxCritical)
        sev = Critical;
    else if (v >= BaseFatal && v <= MaxFatal)
        sev = Fatal;

    return sev;
}
