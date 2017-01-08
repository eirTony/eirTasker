#ifndef LOGOUTPUT_H
#define LOGOUTPUT_H

#include <QUrl>
#include <QUrlQuery>

#include "../base/BasicErrorInfo.h"
#include "../base/BasicName.h"

class LogOutput : public BasicErrorInfo
{
public:
    LogOutput(const QUrl & url=QUrl());
    void set(const BasicName & name);

private:
    QUrl mUrl;
    QUrlQuery mUrlQuery;
    BasicName mName;
};

#endif // LOGOUTPUT_H
