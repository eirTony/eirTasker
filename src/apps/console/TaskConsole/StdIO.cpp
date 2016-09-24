#include "StdIO.h"

#include <stdio.h>

#include <QFile>
#include <QTextStream>

// static
//QFile * StdIO::spOutFile = 0;
QTextStream * StdIO::out = 0;


StdIO::StdIO(QObject * parent)
    : QObject(parent)
{
    //if (spOutFile) delete spOutFile;
    //spOutFile = new QFile(std::cout);
    //spOutFile->open(QIODevice::Append | QIODevice::WriteOnly);
    if ( ! out)
        out = new QTextStream(stdout, QIODevice::Append | QIODevice::WriteOnly);
}

