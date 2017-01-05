#ifndef LOGMACROS_H
#define LOGMACROS_H

#include <QtDebug>

#include "LogItem.h"
#include "LogMain.h"

#define LOGADD(li)          LOGMAIN::add(li);
#define LOGITEM(sev, msg)   LOGADD(LogItem(sev, msg));

#define TRACE_PFX   ">Trace: "
#define INFO_PFX    "-Info:  "
#define WARN_PFX    "+Warn:  "
#define CRIT_PFX    "*Crit:  "
#define FATAL_PFX   "#Fatal: "
#define DO_PFX      "DO-->   "
#define USE_PFX     "USE->   "

#if 1
#define _FMTITEM(sev, pfx, fmt) \
        __LOGITEM(sev, pfx fmt) \

#define __LOGITEM(sev, msg) \
        { LogItem li(sev, FUNCINFO, msg); } \


#else
#define _FMTITEM(sev, pfx, fmt, args...) \
        __LOGITEM(sev, pfx fmt ,##args) \

#define __LOGITEM(sev, msg, args...) \
        { LogItem li(sev, FUNCINFO, msg ,##args); } \

#endif // 1

#endif // LOGMACROS_H
