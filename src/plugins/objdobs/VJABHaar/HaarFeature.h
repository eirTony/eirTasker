#ifndef HAARFEATURE_H
#define HAARFEATURE_H
#include "VJABHaar.h"

#include <QList>

#include "HaarRect.h"

class HaarFeature
{
public:
    HaarFeature(void);
    void addRect(const HaarRect rect);
    HaarFeatureIsRight getLeftRight(const HaarGreyFrame & grey,
                                    const HaarFeatureSquares & squares,
                                    const int i,
                                    const int j,
                                    const HaarFeatureScale scale);

private:
    QList<HaarRect>         mRectList;
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
