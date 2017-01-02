#ifndef BASICERRORINFO_H
#define BASICERRORINFO_H
#include "BaseLib.h"

#include <QString>
#include <QVariant>

#include "Severity.h"

typedef qint64      ErrorCode;
typedef QString     ErrorString;
typedef QVariant    ErrorData;

class BASESHARED_EXPORT BasicErrorInfo : public Severity
{
public:
    BasicErrorInfo(void);
    void resetError(void);
    bool setError(const Severity sev);
    bool setError(const Severity sev,
                  const ErrorCode code,
                  const ErrorString & string=ErrorString(),
                  const ErrorData & data=ErrorData());
    bool setError(const Severity sev,
                  const ErrorString & string,
                  const ErrorData & data=ErrorData());
    bool setError(const Severity sev,
                  const ErrorData & data);

    bool isEmpty(void) const;
    bool isError(void) const;
    Severity severity(void) const;
    ErrorCode errorCode(void) const;
    ErrorString errorString(void) const;
    ErrorData errorData(void) const;

private:
    QObject *   mpObject;
    ErrorCode   mCode;
    ErrorString mString;
    ErrorData   mData;

private:
    Severity    mErrorSeverity = Severity::BaseCritical;
};

#endif // BASICERRORINFO_H
