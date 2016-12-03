#ifndef FRAME_GLOBAL_H
#define FRAME_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(FRAME_LIBRARY)
#  define FRAMESHARED_EXPORT Q_DECL_EXPORT
#else
#  define FRAMESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // FRAME_GLOBAL_H
