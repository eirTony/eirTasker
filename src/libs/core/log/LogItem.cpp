#include "LogItem.h"

DEFINE_DATAPROPS(LogItem, LogItemData)
void LogItem::ctor(void) {;} // for DataProperty default ctor
void LogItem::dtor(void) {;} // for DataProperty dtor

#ifdef eIR_USE_FUNCINFO_WORKAROUND

LogItem::LogItem(const Severity & sev,
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

LogItem::LogItem(const Severity & sev,
        const QString & func,
        const QString & file,
        const int line,
        const QString & msg,
        const QVariantList & vars=QVariantList())
    : data(new LogItemData)
{
    setSeverity(sev);
    setFunction(func);
    setFileName(file);
    setFileLine(line);
    setFormat(msg);
    setVariables(vars);
}

#endif // eIR_USE_FUNCINFO_WORKAROUND
