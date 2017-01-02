#ifndef OBJDINPUTENTITY_H
#define OBJDINPUTENTITY_H
#include "Objd.h"

#include <QList>
#include <QSize>

#include <../../data/Entity/Entity.h>
#include <../../data/Entity/EntityProperty.h>
//#include <../../image/frame/GreyFrame.h>
#include <../../image/image/Region.h>

typedef QList<QSize> QSizeList;

#define OBJDINPUT_PROPERTIES(TND) \
    TND(QSizeList,  InputSizes,     QSizeList()) \

//    TND(GreyFrame,  InputGrey,      GreyFrame())
//    TND(RegionList, InputRegions,   RegionList())


class OBJDSHARED_EXPORT ObjdInputEntity : public Entity
{
    DECLARE_ENTITYPROPS(OBJDINPUT_PROPERTIES)
    ObjdInputEntity(void);
};

#endif // OBJDINPUTENTITY_H
