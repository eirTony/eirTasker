#ifndef HAARFEATURE_H
#define HAARFEATURE_H
#include "VJABHaar.h"

#include <QList>
class QDomElement;

#include "HaarWeightedRect.h"

class HaarFeature
{
public:
    HaarFeature(void);
    HaarFeature(const QDomElement & de);
    void setSize(const HaarFeatureCoordinate width,
                 const HaarFeatureCoordinate height);
    void setTilted(const HaarFeatureTilted tilted);
    void setThreshold(const HaarFeatureThreshold threshold);
    void setLeftValue(const HaarFeatureValue value);
    void setRightValue(const HaarFeatureValue value);
    void add(const HaarWeightedRect rect);

    HaarFeatureSize size(void) const;
    HaarFeatureIsRight isRight(const HaarSumsFrame & sums,
                               const HaarSquaresFrame & squares,
                               const HaarFramePoint pt,
                               const HaarFeatureScale scale);

private:
    QList<HaarWeightedRect>         mRectList;
    HaarFeatureTilted       mTilted;
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
