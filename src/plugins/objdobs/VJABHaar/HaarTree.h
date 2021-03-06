#ifndef HAARTREE_H
#define HAARTREE_H
#include "VJABHaar.h"

#include <QList>
class QDomElement;

#include "HaarFeature.h"

class HaarTree
{
public:
    HaarTree(void);
    HaarTree(const QDomElement & de);
    void add(const HaarFeature & feature);
    int featureSize(void) const;
    HaarFeatureValue getValue(const HaarGreyFrame & grey,
                              const HaarFeatureSquares & squares,
                              const HaarFramePoint pt,
                              const HaarFeatureScale scale);

private:
    QList<HaarFeature> mFeatureList;
};

#endif // HAARTREE_H
