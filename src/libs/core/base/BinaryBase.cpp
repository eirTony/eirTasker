#include "BinaryBase.h"

#include <QApplication>

BinaryBase::BinaryBase(QObject * parent)
    : QObject(parent ? parent : qApp)
{

}
