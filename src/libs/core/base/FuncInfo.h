#ifndef FUNCINFO_H
#define FUNCINFO_H
#include "BaseLib.h"

#ifdef eIR_USE_FUNCINFO_WORKAROUND

#include <QSharedData>

#include <QFileInfo>
#include <QString>
#include "BaseLib.h"

#include "../base/DataProperty.h"

class FuncInfoData;

#define FUNCINFO_DATAPROPS(TND) \
    TND(QString, RawFuncInfo, QString()) \
    TND(int, FileLine,  0) \
    TND(int, FuncLine, 0)    \
    TND(QFileInfo, FileInfo, QFileInfo()) \

class BASESHARED_EXPORT FuncInfoData : public QSharedData
{
    DECLARE_CHILD_DATAPROPS(FUNCINFO_DATAPROPS)
public:
    FuncInfoData(void)
    {
        DEFINE_DATAPROPS_CTORS(FUNCINFO_DATAPROPS)
    };
};

class BASESHARED_EXPORT FuncInfo
{
    DECLARE_PARENT_DATAPROPS(FUNCINFO_DATAPROPS)
    DECLARE_DATAPROPS(FuncInfo, FuncInfoData)

public:
    FuncInfo(const QString & qFuncInfo, // Alternate c'tor
             const QFileInfo & gccFileInfo,
             const int gccFileLine);
private:
    void parseFuncInfo(void);
};

#define FUNCINFO FuncInfo(Q_FUNC_INFO, QFileInfo(__FILE__), __LINE__)

#endif // eIR_USE_FUNCINFO_WORKAROUND

#endif // FUNCINFO_H
