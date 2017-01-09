#ifndef LOGOUTPUT_H
#define LOGOUTPUT_H

#include <QUrl>
#include <QUrlQuery>

#include "../base/BasicErrorInfo.h"
#include "../base/BasicName.h"
#include "../base/BasicSeverity.h"

class LogItem;

class LogOutput : public BasicErrorInfo
{
public:
    LogOutput(const QUrl & url=QUrl());
    void set(const BasicName & name);
    BasicName name(void) const;

public: // virtual
    virtual bool filter(const LogItem & li) const;
    virtual bool write(const enumSeverity sev,
                       const QByteArray & ba);
    virtual void flush(void);

private:
    QUrl mUrl;
    QString mScheme;
    QUrlQuery mUrlQuery;
    BasicName mName;
    BasicSeverity mMinSeverity;
    BasicSeverity mMaxSeverity;
};

#endif // LOGOUTPUT_H
