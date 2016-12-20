#include "BasicErrorInfo.h"

BasicErrorInfo::BasicErrorInfo(void) : mCode(0) {;}

void BasicErrorInfo::resetError(void)
{
    mCode = 0, mString.clear(), mData.clear();
}

bool BasicErrorInfo::setError(const ErrorCode code,
                              const ErrorString & string,
                              const ErrorData & data)
{
    mCode = code, mData = data;
    mString = string.isEmpty()
            ? string
            : code ? QString()
                   : QString("Error: %1 0x%2").arg(code)
                            .arg(code, 16, 16, QChar('0'));
    return isError();
}

bool BasicErrorInfo::setError(const ErrorString & string,
                              const ErrorData & data)
{
    mCode = -1, mString = string, mData = data;
    return isError();
}

bool BasicErrorInfo::setError(const ErrorData & data)
{
    mCode = data.type();
    mString = mCode ? data.typeName() : QString();
    mData = data;
    return isError();
}

bool BasicErrorInfo::isError(void) const
{
    return !! mCode;
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
