#include "BasicErrorObject.h"

BasicErrorObject::BasicErrorObject(QObject * parent) : QObject(parent) {;}

void BasicErrorObject::handleError(const enumSeverity sev,
                                   const ErrorCode code,
              const ErrorString & string,
              const ErrorData & data)
{
    if (setError(sev, code, string, data))   emitError();
}

void BasicErrorObject::handleError(const enumSeverity sev,
                                   const ErrorString & string,
              const ErrorData & data)
{
    if (setError(sev, string, data))   emitError();
}

void BasicErrorObject::handleError(const enumSeverity sev,
                                   const ErrorData & data)
{
    if (setError(sev, data))   emitError();
}

void BasicErrorObject::emitError(void)
{
    if (isError())
        emit(errorCode(), errorString(), errorData());
}
