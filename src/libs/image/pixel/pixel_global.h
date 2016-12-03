#ifndef PIXEL_GLOBAL_H
#define PIXEL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PIXEL_LIBRARY)
#  define PIXELSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PIXELSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PIXEL_GLOBAL_H
