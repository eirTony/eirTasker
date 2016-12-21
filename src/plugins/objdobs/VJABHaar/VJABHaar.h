#ifndef VJABHAAR_H
#define VJABHAAR_H
#include "vjabhaar_global.h"

#include <QRect>
#include <QSize>

#include "../../../libs/data/Type/Matrix.h"
#include "../../../libs/image/frame/Frame.h"

typedef QRect HaarRectRect;
typedef qreal HaarRectWeight;

typedef qreal   HaarFeatureThreshold;
typedef qreal   HaarFeatureValue;
typedef QSize   HaarFeatureSize;
typedef int     HaarFeatureNode;
typedef bool    HaarFeatureBool;
typedef HaarFeatureBool HaarFeatureIsRight;
typedef qreal   HaarFeatureScale;
typedef Matrix<int> HaarFeatureSquares;

typedef HaarFeatureThreshold    HaarStageThreshold;
typedef bool                    HaarStageBoolean;

typedef QSize HaarDetectorSize;

typedef quint8  HaarGreyPixel;
typedef Frame<HaarGreyPixel> HaarGreyFrame;

class VJABHAARSHARED_EXPORT VJABHaar
{

public:
    VJABHaar(void);
};

#endif // VJABHAAR_H
