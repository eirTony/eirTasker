#include "FuncInfo.h"

class FuncInfoData : public QSharedData
{
public:

};

FuncInfo::FuncInfo(const QString & qPrettyFunction) : data(new FuncInfoData)
{

}

FuncInfo::FuncInfo(const FuncInfo &rhs) : data(rhs.data)
{

}

FuncInfo &FuncInfo::operator=(const FuncInfo &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

FuncInfo::~FuncInfo()
{

}
