#ifndef VJABHAAR_H
#define VJABHAAR_H
#include "vjabhaar_global.h"

#include <QPoint>
#include <QRect>
#include <QSize>

#include "../../../libs/data/type/Matrix.h"
#include "../../../libs/data/type/QQRect.h"
#include "../../../libs/image/frame/Frame.h"

typedef QQRect HaarRectRect;
typedef qreal HaarRectWeight;
typedef qreal   HaarFeatureThreshold;
typedef qreal   HaarFeatureValue;
typedef QSize   HaarFeatureSize;
typedef int     HaarFeatureNode;
typedef bool    HaarFeatureBool;
typedef bool    HaarFeatureTilted; // TBD what does non-zero look like?
typedef HaarFeatureBool HaarFeatureIsRight;
typedef qreal   HaarFeatureScale;
typedef Matrix<int> HaarFeatureSquares;
typedef int HaarFeatureCoordinate;
typedef double HaarFeatureInternalDouble;
typedef QRect HaarFeatureInternalRect;
typedef HaarFeatureThreshold    HaarStageThreshold;
typedef bool                    HaarStageBoolean;
typedef int     HaarStageParent;
typedef int     HaarStageNext;
typedef QSize HaarDetectorSize;
typedef bool HaarDetectorBoolean;
typedef QList<HaarRectRect> HaarObsList;
typedef qreal HaarSums;
typedef Frame<HaarSums> HaarSumsFrame;
typedef qreal HaarSquares;
typedef Frame<HaarSquares> HaarSquaresFrame;
typedef int HaarCannyItem;
typedef Frame<HaarCannyItem> HaarCannyFrame;
typedef QPoint HaarFramePoint;
typedef quint8  HaarGreyPixel;
typedef Frame<HaarGreyPixel> HaarGreyFrame;
typedef QSize HaarObsSize;
typedef QList<HaarObsSize> HaarObsSizes;

class HaarCascade;

class VJABHAARSHARED_EXPORT VJABHaar
{

public:
    VJABHaar(void);
    HaarCascade * cascade(void);

private:
    HaarCascade * mpCascade = 0;
};

#endif // VJABHAAR_H
