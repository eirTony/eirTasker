#ifndef HAARFEATURE_H
#define HAARFEATURE_H
#include "VJABHaar.h"

#include <QList>

#include "HaarWeightedRect.h"

class HaarFeature
{
public:
    HaarFeature(void);
    void setSize(const HaarFeatureCoordinate width,
                 const HaarFeatureCoordinate height);
    void addRect(const HaarWeightedRect rect);

    HaarFeatureSize size(void) const;
    HaarFeatureIsRight isRight(const HaarSumsFrame & sums,
                               const HaarSquaresFrame & squares,
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
