#ifndef TROLLOUTPUT_H
#define TROLLOUTPUT_H
#include "LogLib.h"

#include "LogOutput.h"

class LOGSHARED_EXPORT TrollOutput : public LogOutput
{
public:
    TrollOutput(const QUrl & url=QUrl());
    bool write(const BasicSeverity sev,
                       const QByteArray & ba);

};

#endif // TROLLOUTPUT_H
