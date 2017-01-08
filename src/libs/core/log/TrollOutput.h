#ifndef TROLLOUTPUT_H
#define TROLLOUTPUT_H
#include "LogLib.h"

#include "LogOutput.h"

class LOGSHARED_EXPORT TrollOutput : public LogOutput
{
public:
    TrollOutput(const QUrl & url=QUrl());
};

#endif // TROLLOUTPUT_H
