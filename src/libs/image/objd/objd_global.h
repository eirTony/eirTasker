#ifndef OBJD_GLOBAL_H
#define OBJD_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(OBJD_LIBRARY)
#  define OBJDSHARED_EXPORT Q_DECL_EXPORT
#else
#  define OBJDSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // OBJD_GLOBAL_H
