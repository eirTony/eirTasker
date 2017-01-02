#ifndef BOOST_LIB_GLOBAL_H
#define BOOST_LIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BOOST_LIB_LIBRARY)
#  define BOOST_LIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BOOST_LIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BOOST_LIB_GLOBAL_H
