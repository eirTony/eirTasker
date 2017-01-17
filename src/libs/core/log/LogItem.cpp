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

LogItem::LogItem(const enumSeverity & sev,
        const char * func,
        const QFileInfo & file,
        const int line,
        const QString & msg,
        const QVariant & var1,
        const QVariant & var2,
        const QVariant & var3,
        const QVariant & var4,
        const QVariant & var5,
        const QVariant & var6,
        const QVariant & var7,
        const QVariant & var8,
        const QVariant & var9)
    : data(new LogItemData)
{
    setBasicSeverity(sev);
    setFunction(func);
    setFileInfo(file);
    setFileLine(line);
    setFormat(msg);
    setVariables(QVariantList()
                    << var1 << var2 << var3
                    << var4 << var5 << var6
                    << var7 << var8 << var9);
}

