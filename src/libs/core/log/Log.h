#ifndef LOG_H
#define LOG_H
#include "LogLib.h"

#include "../base/BasicSeverity.h"
#include "logmacros.h"

#define INFO(msg)  _FMTITEM(Info,    INFO_PFX,  msg)

#endif // LOG_H
