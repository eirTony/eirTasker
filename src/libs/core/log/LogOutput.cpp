#include "LogOutput.h"

#include <QUrl>

#include "LogItem.h"

LogOutput::LogOutput(const QUrl & url)
    : mUrl(url)
    , mScheme(url.scheme())
    , mUrlQuery(url.query())
    , mName(mUrlQuery.queryItemValue("Name"))
    , mMinSeverity(mUrlQuery.queryItemValue("MinSeverity").toInt())
    , mMaxSeverity(mUrlQuery.queryItemValue("MaxSeverity").toInt())
{

}

void LogOutput::set(const BasicName & name)
{
    mName = name;
}

BasicName LogOutput::name(void) const
{
    return mName;
}

bool LogOutput::filter(const LogItem & li) const // virtual
{
    BasicSeverity sev(li.getSeverity());
    if (mMinSeverity && sev.isLT(mMinSeverity))
        return false;
    if (mMaxSeverity && sev.isGT(mMaxSeverity))
        return false;
    return true;
}

#if 0
bool LogOutput::write(const enumSeverity sev,
                      const QByteArray & ba) // virtual
{
    (void)sev, (void)ba;
    return false;
}
#endif

void LogOutput::flush(void) {;} // virtual
