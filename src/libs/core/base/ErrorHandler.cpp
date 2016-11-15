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

