#include "HaarFeature.h"

// see https://github.com/eirTony/INDI1/blob/develop/incoming/JViolaJJones2/src/main/java/jviolajones/Feature.java

#include <QtMath>

HaarFeature::HaarFeature(void)
    : mThreshold(0)
    , mLeftValue(0)
    , mRightValue(0)
    , mLeftNode(0)
    , mRightNode(0)
    , mHasLeftNode(false)
    , mHasRightNode(false) {;}

HaarFeatureSize HaarFeature::size(void) const
{
    return mSize;
}

void HaarFeature::addRect(const HaarWeightedRect rect)
{
    mRectList.append(rect);
}

HaarFeatureIsRight HaarFeature::isRight(const HaarSumsFrame & sums,
                                        const HaarSquaresFrame & squares,
                                        const HaarFramePoint pt,
                                        const HaarFeatureScale scale)
{
    HaarFeatureIsRight isRight = false;
    HaarFeatureSize sz = size();
    HaarFeatureCoordinate scaledWidth  = sz.width()  * scale;
    HaarFeatureCoordinate scaledHeight = sz.height() * scale;
    HaarFeatureInternalDouble inverseArea = 1.0 / (scaledWidth * scaledHeight);
    HaarFeatureInternalRect rc(pt, sz);
    HaarSums sum = sums[rc.topLeft()] + sums[rc.bottomRight()]
                 - sums[rc.topRight()] - sums[rc.bottomLeft()];
    HaarSquares sq =  squares[rc.topLeft()] + squares[rc.bottomRight()]
                   - squares[rc.topRight()] - squares[rc.bottomLeft()];
    HaarFeatureInternalDouble moy = inverseArea * sum;
    HaarFeatureInternalDouble vnorm = (inverseArea * sq) - (moy * moy);
    vnorm = (vnorm > 1.0) ? qSqrt(vnorm) : 1.0;

    HaarFeatureInternalDouble sumWrc = 0.0;
    foreach (HaarWeightedRect wrc, mRectList)
    {
        wrc *= scale;
        sumWrc += (sums[wrc.rect().topLeft()] + sums[wrc.rect().bottomRight()]
                -  sums[wrc.rect().topRight()] - sums[wrc.rect().bottomLeft()])
                * wrc.weight();
    }
    sumWrc *= inverseArea;
    isRight = sumWrc > (mThreshold * vnorm);

    return isRight;
}
