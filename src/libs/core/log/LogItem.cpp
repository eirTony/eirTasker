#include "LogItem.h"

DEFINE_DATAPROPS(LogItem, LogItemData)
void LogItem::ctor(void) {;} // for DataProperty default ctor
void LogItem::dtor(void) {;} // for DataProperty dtor

#ifndef eIR_USE_FUNCINFO_WORKAROUND

LogItem::LogItem(const Severity::type & sev,
                 const FuncInfo & fni,
                 const QString & msg,
                 const QVariantList & vars)
    : data(new LogItemData)
{
    setSeverity(sev);
    setFuncInfo(fni);
    setFormat(msg);
    setVariables(vars);
}

#else

LogItem::LogItem(const Severity::type & sev,
        const QString & func,
        const QFileInfo & file,
        const int line,
        const QString & msg,
        const QVariantList & vars)
    : data(new LogItemData)
{
    setSeverity(sev);
    setFunction(func);
    setFileInfo(file);
    setFileLine(line);
    setFormat(msg);
    setVariables(vars);
}

#endif // eIR_USE_FUNCINFO_WORKAROUND
