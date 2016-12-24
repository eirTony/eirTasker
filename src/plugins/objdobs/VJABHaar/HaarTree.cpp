#include "HaarTree.h"

HaarTree::HaarTree(void) {;}

void HaarTree::add(const HaarFeature & feature)
{
    mFeatureList.append(feature);
}

HaarFeatureValue HaarTree::getValue(const HaarGreyFrame & grey,
                                    const HaarFeatureSquares & squares,
                                    const HaarFramePoint pt,
                                    const HaarFeatureScale scale)
{
    HaarFeatureValue featureValue = 0.0;
    HaarFeature currentFeature = mFeatureList.first();

    forever
    {

    }

    return featureValue;
}
