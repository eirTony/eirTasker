#include "LogObject.h"

LogObject::LogObject(QObject * parent)
    : QObject(parent)
{
    setObjectName("LogObject");
}

