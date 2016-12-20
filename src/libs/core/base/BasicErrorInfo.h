#ifndef BASICERRORINFO_H
#define BASICERRORINFO_H

#include <QString>
#include <QVariant>

typedef qint64      ErrorCode;
typedef QString     ErrorString;
typedef QVariant    ErrorData;

class BasicErrorInfo
{
public:
    BasicErrorInfo(void);
    void resetError(void);
    bool setError(const ErrorCode code,
                  const ErrorString & string=ErrorString(),
                  const ErrorData & data=ErrorData());
    bool setError(const ErrorString & string,
                  const ErrorData & data=ErrorData());
    bool setError(const ErrorData & data);

    bool isError(void) const;
    ErrorCode errorCode(void) const;
    ErrorString errorString(void) const;
    ErrorData errorData(void) const;

private:
    QObject *   mpObject;
    ErrorCode   mCode;
    ErrorString mString;
    ErrorData   mData;
};

#endif // BASICERRORINFO_H
