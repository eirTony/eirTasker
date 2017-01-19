#ifndef LOG_H
#define LOG_H
#include "LogLib.h"

#include "../base/BasicSeverity.h"
#include "LogMacros.h"

#define INFO(msg, va...) {_LOGITEMADD(Info, INFO_PFX msg ,##va);}
#define INFOIF(exp, msg, va...)  {if (exp) _LOGITEMADD(Info, INFO_PFX msg ,##va);}
#define INFONOT(exp, msg, va...) {if(!exp) _LOGITEMADD(Info, INFO_PFX msg ,##va);}



//#define TRACE(msg, args...) _FMTITEM(QtDebugMsg,   TRACE_PFX, msg, args)
#endif // LOG_H
