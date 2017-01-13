#ifndef LOGMACROS_H
#define LOGMACROS_H

#include <QtDebug>

#include "LogItem.h"
#include "LogMain.h"

#define LOGADD(li)          LogMain::add(li);
//#define LOGITEM(sev, msg)   LOGADD(LogItem(sev, msg));

#define TRACE_PFX   ">Trace: "
#define INFO_PFX    "-Info:  "
#define WARN_PFX    "+Warn:  "
#define CRIT_PFX    "*Crit:  "
#define FATAL_PFX   "#Fatal: "
#define DO_PFX      "DO-->   "
#define USE_PFX     "USE->   "

#define FUNCINFO Q_FUNC_INFO, QFileInfo(__FILE__), __LINE__

#define _FMTITEM(sev, pfx, fmt) \
        LOGADD(__LOGITEM(sev, pfx fmt)) \

#define __LOGITEM(sev, msg) \
         LogItem(sev, FUNCINFO, msg) \

#endif // LOGMACROS_H
