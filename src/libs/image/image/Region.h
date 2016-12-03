#ifndef REGION_H
#define REGION_H

#include <QList>

#include <../../data/Type/QQPolygon.h>

class Region : public QQPolygon
{
public:
    typedef QList<Region> List;

public:
    Region(void);
    Region(const QString & name,
           const QQPolygon & poly);

private:
    QString mName;
};

typedef Region::List RegionList;

#endif // REGION_H
