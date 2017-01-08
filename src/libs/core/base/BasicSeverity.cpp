#include "BasicSeverity.h"

BasicSeverity::BasicSeverity(const enumSeverity sev)
{
    mSeverity = sev;
}

bool BasicSeverity::isLevelGE(const enumSeverity other) const
{
	BasicSeverity otherBSev(other);
    return level() >= otherBSev.level();
}

enumSeverity BasicSeverity::level(void) const
{
    enumSeverity sev = NullBasicSeverity;

    if (false)
        {;}
    else if (mSeverity >= BaseTrace && mSeverity <= MaxTrace)
        sev = Trace;
    else if (mSeverity >= BaseUser && mSeverity <= MaxUser)
        sev = User;
    else if (mSeverity >= BaseInfo && mSeverity <= MaxInfo)
        sev = Info;
    else if (mSeverity >= BaseWarning && mSeverity <= MaxWarning)
        sev = Warning;
    else if (mSeverity >= BaseCritical && mSeverity <= MaxCritical)
        sev = Critical;
    else if (mSeverity >= BaseFatal && mSeverity <= MaxFatal)
        sev = Fatal;

    return sev;
}
