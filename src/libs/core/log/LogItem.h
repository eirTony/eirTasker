#ifndef LOGITEM_H
#define LOGITEM_H
#include "LogLib.h"

#include <QSharedData>

#include <QFileInfo>
#include <QVariantList>

#include "../base/DataProperty.h"
#include "../base/BasicSeverity.h"
typedef QString ProcessId;

#define LOGITEM_DATAPROPS(TND) \
    TND(ProcessId, PID, ProcessId()) \
    TND(quint64, TimeStamp,  0) \
    TND(BasicSeverity, BasicSeverity,  NullBasicSeverity) \
    TND(QString, Function, QString()) \
    TND(QFileInfo, FileInfo, QFileInfo()) \
    TND(int, FileLine, 0) \
    TND(QString, Format, QString()) \
    TND(QVariantList, Variables, QVariantList()) \

class LOGSHARED_EXPORT LogItemData : public QSharedData
{
    DECLARE_CHILD_DATAPROPS(LOGITEM_DATAPROPS)
public:
    LogItemData(void)
    {
        DEFINE_DATAPROPS_CTORS(LOGITEM_DATAPROPS)
    };
};

class LOGSHARED_EXPORT LogItem
{
    DECLARE_PARENT_DATAPROPS(LOGITEM_DATAPROPS)
    DECLARE_DATAPROPS(LogItem, LogItemData)
public:
    LogItem(const enumSeverity & sev,
            const char * func,
            const QFileInfo & file,
            const int line,
            const QString & msg,
            const QVariantList & vars=QVariantList());
    LogItem(const enumSeverity & sev,
            const char * func,
            const QFileInfo & file,
            const int line,
            const QString & msg,
            const QVariant & var1,
            const QVariant & var2=QVariant(),
            const QVariant & var3=QVariant(),
            const QVariant & var4=QVariant(),
            const QVariant & var5=QVariant(),
            const QVariant & var6=QVariant(),
            const QVariant & var7=QVariant(),
            const QVariant & var8=QVariant(),
            const QVariant & var9=QVariant());
};

#endif // LOGITEM_H
#if 0


class EIRLOGSHARED_EXPORT LogItem
{
    LogItem(const BasicSeverity severity,
            const QString & moduleName,
            const QString & fileName,
            const int fileLine,
            const QString & prettyFunction,
            const QString & format,
            const QVariant & v1=QVariant(),
            const QVariant & v2=QVariant(),
            const QVariant & v3=QVariant(),
            const QVariant & v4=QVariant(),
            const QVariant & v5=QVariant(),
            const QVariant & v6=QVariant(),
            const QVariant & v7=QVariant(),
            const QVariant & v8=QVariant(),
            const QVariant & v9=QVariant());
    void setPrettyFunction(const QString & prettyFunction);
    QString toString(const quint32 options);

private:
    QString severityString(const quint32 options) const;
    QString timeString(const quint32 options) const;
    QString locationString(const quint32 options) const;

private:
    QMap<quint32, QString> _opts_s_map;
};
#endif
