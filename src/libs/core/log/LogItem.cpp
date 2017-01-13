#include "LogItem.h"

DEFINE_DATAPROPS(LogItem, LogItemData)
void LogItem::ctor(void) {;} // for DataProperty default ctor
void LogItem::dtor(void) {;} // for DataProperty dtor

LogItem::LogItem(const enumSeverity &sev,
        const char * func,
        const QFileInfo & file,
        const int line,
        const QString & msg,
        const QVariantList & vars)
    : data(new LogItemData)
{
    setBasicSeverity(sev);
    setFunction(func);
    setFileInfo(file);
    setFileLine(line);
    setFormat(msg);
    setVariables(vars);
}
