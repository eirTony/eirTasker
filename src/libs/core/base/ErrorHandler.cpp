#include "ErrorHandler.h"

QMap<int, QString>      ErrorHandler::mErrorStringMap;
QMap<EightCC, QString>  ErrorHandler::mCodeStringMap;

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

bool ErrorHandler::isError(void) const;
void ErrorHandler::clearError(void);

bool ErrorHandler::handle(const int error,
            const QString & string,
            const QVariant & data)
{
    setError(error);
    setString(string);
    setVariant(data);
    return handle();
}

bool ErrorHandler::handle(const QString & string)
{
    setError(-1);
    setString(string);
    return handle();
}
