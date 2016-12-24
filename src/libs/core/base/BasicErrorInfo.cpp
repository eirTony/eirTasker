#include "BasicErrorInfo.h"

BasicErrorInfo::BasicErrorInfo(void) : mCode(0) {;}

void BasicErrorInfo::resetError(void)
{
    mCode = 0, mString.clear(), mData.clear();
}

bool BasicErrorInfo::setError(const Severity sev)
{
    Severity::set(sev);
    return isError();
}

bool BasicErrorInfo::setError(const Severity sev, const ErrorCode code,
                              const ErrorString & string,
                              const ErrorData & data)
{
    Severity::set(sev);
    mCode = code, mData = data;
    mString = string.isEmpty()
            ? string
            : code ? QString()
                   : QString("Error: %1 0x%2").arg(code)
                            .arg(code, 16, 16, QChar('0'));
    return isError();
}

bool BasicErrorInfo::setError(const Severity sev, const ErrorString & string,
                              const ErrorData & data)
{
    Severity::set(sev);
    mCode = -1, mString = string, mData = data;
    return isError();
}

bool BasicErrorInfo::setError(const Severity sev, const ErrorData & data)
{
    Severity::set(sev);
    mCode = data.type();
    mString = mCode ? data.typeName() : QString();
    mData = data;
    return isError();
}

bool BasicErrorInfo::isError(void) const
{
    return Severity::is(mErrorSeverity);
}

Severity BasicErrorInfo::severity(void) const
{
    return Severity::value();
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
