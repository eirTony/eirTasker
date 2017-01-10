#include "Region.h"

Region::Region(void) : QQPolygon(), mName(BasicName()) {;}

Region::Region(const BasicName & name, const QQPolygon & poly)
    : QQPolygon(poly), mName(name) {;}


