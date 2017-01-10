#ifndef KII_GLOBAL_H
#define KII_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(KII_LIBRARY)
#  define KIISHARED_EXPORT Q_DECL_EXPORT
#else
#  define KIISHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // KII_GLOBAL_H
