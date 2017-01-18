#ifndef LOGMACROS_H
#define LOGMACROS_H

#include <QtDebug>

#include "LogItem.h"
#include "LogMain.h"

#define TRACE_PFX   ">Trace: "
#define INFO_PFX    "-Info:  "
#define WARN_PFX    "+Warn:  "
#define CRIT_PFX    "*Crit:  "
#define FATAL_PFX   "#Fatal: "
#define DO_PFX      "DO-->   "
#define USE_PFX     "USE->   "


#define _FMTITEM(sev, pfx, fmt) \
        ___LOGADD(__LOGITEM(sev, pfx fmt)) \

#define _FMTARGS(sev, pfx, fmt, args) \
        ___LOGADD(__LOGITEMARGS(sev, pfx fmt, args)) \

#define __LOGITEM(sev, msg) \
         LogItem(sev, ___FUNCINFO, msg) \

#define __LOGITEMARGS(sev, msg, args) \
         LogItem(sev, ___FUNCINFO, msg ,##args) \

#define ___LOGADD(li)         { LogMain::add(li); }
#define ___LOGADDARGS(li)         { LogMain::add(li); }
//#define LOGITEM(sev, msg)   LOGADD(LogItem(sev, msg));
#define ___FUNCINFO Q_FUNC_INFO, QFileInfo(__FILE__), __LINE__

#endif // LOGMACROS_H
