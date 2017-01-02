#ifndef FUNCINFO_H
#define FUNCINFO_H

#include <QSharedDataPointer>

#include "../base/DataProperty.h"

class FuncInfoData;

class FuncInfo
{
public:
    FuncInfo(const QString &qPrettyFunction);
    FuncInfo(const FuncInfo & other);
    ~FuncInfo();
    FuncInfo & operator = (const FuncInfo &);

private:
    QSharedDataPointer<FuncInfoData> data;
};

#endif // FUNCINFO_H
