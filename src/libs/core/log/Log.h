#ifndef LOG_H
#define LOG_H
#include "LogLib.h"

#include "../base/BasicSeverity.h"
#include "logmacros.h"

#define INFOMSG(msg)  _FMTITEM(Info,    INFO_PFX,  msg)
#define INFO(msg, args...)  _FMTARGS(Info,    INFO_PFX,  msg, args)

//#define TRACE(msg, args...) _FMTITEM(QtDebugMsg,   TRACE_PFX, msg, args)
#endif // LOG_H
