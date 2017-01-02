#include "LogOutput.h"

#include <QUrl>

LogOutput::LogOutput(const QUrl & url)
    : mUrl(url)
    , mUrlQuery(url.query())
    , mName(mUrlQuery.queryItemValue("Name"))
{

}
