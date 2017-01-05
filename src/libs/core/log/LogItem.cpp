#include "LogItem.h"

DEFINE_DATAPROPS(LogItem, LogItemData)
void LogItem::ctor(void) {;} // for DataProperty default ctor
void LogItem::dtor(void) {;} // for DataProperty dtor

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


