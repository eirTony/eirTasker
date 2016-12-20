#include "BasicErrorObject.h"

BasicErrorObject::BasicErrorObject(QObject * parent) : QObject(parent) {;}

void BasicErrorObject::handleError(const ErrorCode code,
              const ErrorString & string,
              const ErrorData & data)
{
    if (setError(code, string, data))   emitError();
}

void BasicErrorObject::handleError(const ErrorString & string,
              const ErrorData & data)
{
    if (setError(string, data))   emitError();
}

void BasicErrorObject::handleError(const ErrorData & data)
{
    if (setError(data))   emitError();
}

void BasicErrorObject::emitError(void)
{
    if (isError())
        emit(errorCode(), errorString(), errorData());
}
