#include "LogFuncInfo.h"

class LogFuncInfoData : public QSharedData
{
public:

};

LogFuncInfo::LogFuncInfo(void) : data(new LogFuncInfoData) {;}

LogFuncInfo::LogFuncInfo(const LogFuncInfo &other) : data(other.data) {;}

LogFuncInfo &LogFuncInfo::operator=(const LogFuncInfo & rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

LogFuncInfo::~LogFuncInfo()
{

}
