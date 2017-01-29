#include "BasicErrorInfo.h"

#include "../log/Log.h"

BasicErrorInfo::BasicErrorInfo(void) : mCode(0) {;}

void BasicErrorInfo::resetError(void)
{
    mCode = 0, mString.clear(), mData.clear();
}

bool BasicErrorInfo::setError(const enumSeverity sev)
{
    mSeverity = sev;
    mCode = -1;
    mString = QString("Severity=%1").arg((int)mSeverity);
    mData.clear();
    return isCritical();
}

bool BasicErrorInfo::setError(const enumSeverity sev,
                              const ErrorCode code,
                              const ErrorString & string,
                              const ErrorData & data)
{
    mSeverity = sev;
    mCode = code, mData = data;
    mString = string.isEmpty()
            ? string
            : code ? QString()
                   : QString("Error: %1 0x%2").arg(code)
                            .arg(code, 16, 16, QChar('0'));
    return isCritical();
}

bool BasicErrorInfo::setError(const enumSeverity sev,
                              const ErrorString & string,
                              const ErrorData & data)
{
    mSeverity = sev, mCode = -1,
    mString = string, mData = data;
    return isCritical();
}

bool BasicErrorInfo::setError(const enumSeverity sev,
                              const ErrorData & data)
{
    mSeverity = sev;
    mCode = data.type();
    mString = mCode ? data.typeName() : QString();
    mData = data;
    return isCritical();
}

bool BasicErrorInfo::isCritical(void) const
{
    BasicSeverity sev(mSeverity);
    if ( ! sev.isNull())
        _LOGITEMADD(mSeverity, mString, mCode, QString::number(mCode, 16), mData);
    return sev.isLevelGE(Critical);
}

enumSeverity BasicErrorInfo::severity(void) const
{
    return mSeverity;
}

ErrorCode BasicErrorInfo::errorCode(void) const
{
    return mCode;
}

ErrorString BasicErrorInfo::errorString(void) const
{
    return mString;
}

ErrorData BasicErrorInfo::errorData(void) const
{
    return mData;
}
