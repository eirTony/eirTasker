#ifndef TASK_GLOBAL_H
#define TASK_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TASK_LIBRARY)
#  define TASKSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TASKSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TASK_GLOBAL_H
