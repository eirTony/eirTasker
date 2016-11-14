#ifndef ENTITYLIB_H
#define ENTITYLIB_H
#include "entity_global.h"

#include <QBitArray> // FORNOW
typedef bool Boolean; // FORNOW
//typedef quint64 EightCC; // FORNOW
class EightCC { quint64 mCC; }; //FORNOW
//typedef QBitArray BitKey; // FORNOW

class ENTITYSHARED_EXPORT EntityLib
{
public:
    EntityLib(void);
};

#endif // ENTITYLIB_H
