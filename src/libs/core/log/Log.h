#ifndef LOG_H
#define LOG_H
#include "LogLib.h"

#include "logmacros.h"

#if 1
#define INFO(msg)  _FMTITEM(QtInfoMsg,    INFO_PFX,  msg)
#else
#define INFO(msg, args...)  _FMTITEM(QtInfoMsg,    INFO_PFX,  msg, args)
#endif

#endif // LOG_H
