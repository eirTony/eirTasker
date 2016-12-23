#ifndef HAARTREE_H
#define HAARTREE_H
#include "VJABHaar.h"

#include <QList>

#include "HaarFeature.h"

class HaarTree
{
public:
    HaarTree(void);
    void add(const HaarFeature & feature);
    HaarFeatureValue getValue(const HaarGreyFrame & grey,
                              const HaarFeatureSquares & squares,
                              const HaarFramePoint pt,
                              const HaarFeatureScale scale);

private:
    QList<HaarFeature> mFeatureList;
};

#endif // HAARTREE_H
