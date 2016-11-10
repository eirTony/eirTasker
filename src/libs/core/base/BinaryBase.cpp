#include "BinaryBase.h"

#include <QCoreApplication>

BinaryBase::BinaryBase(QObject * parent)
    : QObject(parent ? parent : qApp)
{

}
