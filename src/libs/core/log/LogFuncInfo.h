#ifndef LOGFUNCINFO_H
#define LOGFUNCINFO_H
#include "LogLib.h"

#include <QFileInfo>
#include <QSharedDataPointer>

#include "../base/FuncInfo.h"

class LOGSHARED_EXPORT LogFuncInfoData;

#define LOGFUNCINFO_DATAPROPS(TND) \
    TND(QFileInfo, FileInfo, QFileInfo()) \
    TND(FuncInfo, FuncInfo, FuncInfo()) \
    TND(int, FuncLine, 0)    \
    TND(int, FileLine,  0) \

#define LOGFUNCINFO { LogFuncInfo(QFileInfo(__FILE__), __LINE__, FUNCINFO) }


class LOGSHARED_EXPORT LogFuncInfo
{
public:
    DECLARE_CHILD_DATAPROPS(LOGFUNCINFO_DATAPROPS)
public:
    LogFuncInfo(void);
    LogFuncInfo(const QFileInfo fi,
                const int line,
                const FuncInfo & fni);
    LogFuncInfo(const LogFuncInfo & other);
    LogFuncInfo &operator=(const LogFuncInfo &);
    ~LogFuncInfo();

private:
    QSharedDataPointer<LogFuncInfoData> data;
};

#endif // LOGFUNCINFO_H
