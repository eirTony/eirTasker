#ifndef REGION_H
#define REGION_H
#include "ImageLib.h"

#include <QList>

#include <../../core/base/BasicName.h>
#include <../../data/Type/QQPolygon.h>

class IMAGESHARED_EXPORT Region : public QQPolygon
{
public:
    typedef QList<Region> List;

public:
    Region(void);
    Region(const BasicName & name,
           const QQPolygon & poly);

private:
    QString mName;
};

typedef Region::List RegionList;

#endif // REGION_H
