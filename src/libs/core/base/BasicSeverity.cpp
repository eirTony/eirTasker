#include "BasicSeverity.h"

BasicSeverity::BasicSeverity(const enumSeverity sev)
    : mSeverity(sev) {;}

BasicSeverity::BasicSeverity(const int i)
{
    if (i > NullBasicSeverity && i < MaxBasicSeverity)
        mSeverity = enumSeverity(i);
    else
        mSeverity = NullBasicSeverity;
};

bool BasicSeverity::isNull(void) const
{
    return NullBasicSeverity == mSeverity;
}

bool BasicSeverity::isValid(void) const
{
    return mSeverity > NullBasicSeverity
            && mSeverity < MaxBasicSeverity;
}

BasicSeverity::operator bool (void) const
{
    return isValid();
}

BasicSeverity::operator int (void) const
{
    return (int)mSeverity;
}


bool BasicSeverity::isLevelGE(const enumSeverity other) const
{
	BasicSeverity otherBSev(other);
    return level() >= otherBSev.level();
}

bool BasicSeverity::isLT(const BasicSeverity sev) const
{
    return sev.mSeverity < mSeverity;
}

bool BasicSeverity::isGT(const BasicSeverity sev) const
{
    return sev.mSeverity > mSeverity;
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
    else if (mSeverity >= BaseSystem && mSeverity <= MaxSystem)
        sev = System;
    else if (mSeverity >= BaseFatal && mSeverity <= MaxFatal)
        sev = Fatal;

    return sev;
}

void BasicSeverity::set(const BasicSeverity sev)
{
    *this = (int)sev;
}

enumSeverity BasicSeverity::setMax(const BasicSeverity sev)
{
    if (isGT(sev)) set(sev);
    return mSeverity;
}


QtMsgType BasicSeverity::trollType(void) const
{
    QtMsgType qmt = QtInfoMsg;
    switch (level())
    {
    case Trace:     qmt = QtDebugMsg;       break;
    case User:
    case Info:      qmt = QtInfoMsg;        break;
    case Warning:   qmt = QtWarningMsg;     break;
    case Critical:
    case System:    qmt = QtCriticalMsg;    break;
    case Fatal:     qmt = QtFatalMsg;       break;
    default:        break;
    }
    return qmt;
}
