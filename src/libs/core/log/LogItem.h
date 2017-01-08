#ifndef LOGITEM_H
#define LOGITEM_H
#include "LogLib.h"

#include <QSharedData>

#include <QFileInfo>
#include <QVariantList>

#include "../base/DataProperty.h"
#include "../base/BasicSeverity.h"
typedef QString ProcessId;

#ifndef eIR_USE_FUNCINFO_WORKAROUND

#include "../base/FuncInfo.h"

#ifdef eIR_USE_FUNCINFO_WORKAROUND

#include "../base/FuncInfo.h"

#define LOGITEM_DATAPROPS(TND) \
    TND(ProcessId, PID, ProcessId()) \
    TND(quint64, TimeStamp,  0) \
    TND(Severity, Severity,  Severity::NullSeverity) \
    TND(FuncInfo, FuncInfo, FuncInfo()) \
    TND(QString, Format, QString()) \
    TND(QVariantList, Variables, QVariantList()) \

#else

#define LOGITEM_DATAPROPS(TND) \
    TND(ProcessId, PID, ProcessId()) \
    TND(quint64, TimeStamp,  0) \
    TND(enumSeverity, Severity,  NullBasicSeverity) \
    TND(QString, Function, QString()) \
    TND(QFileInfo, FileInfo, QFileInfo()) \
    TND(int, FileLine, 0) \
    TND(QString, Format, QString()) \
    TND(QVariantList, Variables, QVariantList()) \

#endif // eIR_USE_FUNCINFO_WORKAROUND

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
#ifndef eIR_USE_FUNCINFO_WORKAROUND
    LogItem(const Severity::type & sev,
            const FuncInfo & fni,
            const QString & msg,
            const QVariantList & vars=QVariantList());
#else
    LogItem(const enumSeverity & sev,
            const QString & func,
            const QFileInfo & file,
            const int line,
            const QString & msg,
            const QVariantList & vars=QVariantList());
#endif // eIR_USE_FUNCINFO_WORKAROUND
};

#endif // LOGITEM_H
#if 0


class EIRLOGSHARED_EXPORT LogItem
{
    LogItem(const Severity severity,
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
