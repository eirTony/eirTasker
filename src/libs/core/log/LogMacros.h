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

#define _LOGITEMADD(sev, msg, va...)  \
            { LogMain::add(LogItem(sev, \
            Q_FUNC_INFO, QFileInfo(__FILE__), \
            __LINE__, msg ,##va)); } \

#endif // LOGMACROS_H
