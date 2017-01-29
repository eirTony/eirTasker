#ifndef BASICERRORINFO_H
#define BASICERRORINFO_H
#include "BaseLib.h"

#include <QString>
#include <QVariant>

#include "BasicSeverity.h"

typedef qint64      ErrorCode;
typedef QString     ErrorString;
typedef QVariant    ErrorData;

class BASESHARED_EXPORT BasicErrorInfo
{
public:
    BasicErrorInfo(void);
    void resetError(void);
    bool setError(const enumSeverity sev);
    bool setError(const enumSeverity sev,
                  const ErrorCode code,
                  const ErrorString & string=ErrorString(),
                  const ErrorData & data=ErrorData());
    bool setError(const enumSeverity sev,
                  const ErrorString & string,
                  const ErrorData & data=ErrorData());
    bool setError(const enumSeverity sev,
                  const ErrorData & data);

    bool isEmpty(void) const;
    bool isCritical(void) const;
    enumSeverity severity(void) const;
    ErrorCode errorCode(void) const;
    ErrorString errorString(void) const;
    ErrorData errorData(void) const;

private:
    QObject *   mpObject;
    enumSeverity mSeverity = enumSeverity::NullBasicSeverity;
    ErrorCode   mCode;
    ErrorString mString;
    ErrorData   mData;
};

#endif // BASICERRORINFO_H
