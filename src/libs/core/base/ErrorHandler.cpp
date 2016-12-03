#include "ErrorHandler.h"

ErrorHandler::ErrorHandler(QObject * parent)
    : QObject(parent)
{
    setObjectName("ErrorHandler");
}

ErrorHandler::ErrorHandler(const QString className,
             QObject * parent)
    : QObject(parent)
{
    setObjectName(QString("ErrorHandler:%1").arg(className));
}

void ErrorHandler::handle(const int error,
            const QString & string,
            const QVariant & data)
{
    mError = error;
    mErrorString = string;
    mErrorData = data;
}

void ErrorHandler::handle(const QString & string)
{
    handle(-1, string);
}
