#include "Region.h"

Region::Region(void) {;}

Region::Region(const QString & name, const QQPolygon & poly)
    : QQPolygon(poly), mName(name) {;}


