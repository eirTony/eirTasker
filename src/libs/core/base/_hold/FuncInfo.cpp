#include "FuncInfo.h"

#ifndef eIR_USE_FUNCINFO_WORKAROUND

DEFINE_DATAPROPS(FuncInfo, FuncInfoData)
void FuncInfo::ctor(void) {;} // for DataProperty default c'tor
void FuncInfo::dtor(void) {;} // for DataProperty d'tor

// our specialized c'tor
FuncInfo::FuncInfo(const QString & qFuncInfo,
                   const QFileInfo & gccFileInfo,
                   const int gccFileLine)
    : data(new FuncInfoData)
{
    setRawFuncInfo(qFuncInfo);
    parseFuncInfo();
    setFileInfo(gccFileInfo);
    setFileLine(gccFileLine);
}

void FuncInfo::parseFuncInfo(void)
{
    ; // for now
}

#endif // eIR_USE_FUNCINFO_WORKAROUND
