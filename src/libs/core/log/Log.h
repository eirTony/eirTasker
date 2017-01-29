#ifndef LOG_H
#define LOG_H
#include "LogLib.h"

#include "../base/BasicSeverity.h"
#include "LogMacros.h"

#define TODO(msg) {_LOGITEMADD(Trace, DO_PFX msg);}
#define USE(exp) {(void)(exp);_LOGITEMADD(Trace, USE_PFX #exp);}

#define INFO(msg, va...) {_LOGITEMADD(Info, INFO_PFX msg ,##va);}
#define INFOIF(exp, msg, va...)  {if (exp) _LOGITEMADD(Info, INFO_PFX msg ,##va);}
#define INFONOT(exp, msg, va...) {if(!exp) _LOGITEMADD(Info, INFO_PFX msg ,##va);}

#define TRACE(msg, va...) {_LOGITEMADD(Trace, TRACE_PFX msg ,##va);}

#define EXPECT(exp) {if (!exp) \
            _LOGITEMADD(Critical, CRIT_PFX "Expected: " #exp);}
#define EXPECTNOT(exp) {if (exp) \
            _LOGITEMADD(Critical, CRIT_PFX "Expected NOT: " #exp);}

#endif // LOG_H
