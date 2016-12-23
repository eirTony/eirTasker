#ifndef HAARFEATURE_H
#define HAARFEATURE_H
#include "VJABHaar.h"

#include <QList>

#include "HaarWeightedRect.h"

class HaarFeature
{
public:
    HaarFeature(void);
    void addRect(const HaarWeightedRect rect);
    HaarFeatureIsRight getLeftRight(const HaarGreyFrame & grey,
                                    const HaarFeatureSquares & squares,
                                    const HaarFramePoint pt,
                                    const HaarFeatureScale scale);

private:
    QList<HaarWeightedRect>         mRectList;
    HaarFeatureThreshold    mThreshold;
    HaarFeatureValue        mLeftValue;
    HaarFeatureValue        mRightValue;
    HaarFeatureSize         mSize;
    HaarFeatureNode         mLeftNode;
    HaarFeatureNode         mRightNode;
    HaarFeatureBool         mHasLeftNode;
    HaarFeatureBool         mHasRightNode;
};

#endif // HAARFEATURE_H
