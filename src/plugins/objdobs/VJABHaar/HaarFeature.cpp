#include "HaarFeature.h"

// see https://github.com/eirTony/INDI1/blob/develop/incoming/JViolaJJones2/src/main/java/jviolajones/Feature.java

#include <QtMath>
#include <QDomElement>
#include <QDomNodeList>

#include "../../../libs/core/log/Log.h"
#include "../../../libs/data/type/Readable.h"

HaarFeature::HaarFeature(void)
    : mThreshold(0)
    , mLeftValue(0)
    , mRightValue(0)
    , mLeftNode(0)
    , mRightNode(0)
    , mHasLeftNode(false)
    , mHasRightNode(false) {;}

HaarFeature::HaarFeature(const QDomElement & de)
{
    QDomElement featureDE = de.firstChildElement("feature");

    QDomElement tiltedDE = featureDE.firstChildElement("tilted");
    QDomElement thresholdDE = de.firstChildElement("threshold");
    QDomElement leftDE = de.firstChildElement("left_val");
    QDomElement rightDE = de.firstChildElement("right_val");
    setTilted(tiltedDE.text().toInt());
    setThreshold(thresholdDE.text().toFloat());
    setLeftValue(leftDE.text().toFloat());
    setRightValue(rightDE.text().toFloat());

    QDomElement rectsDE = featureDE.firstChildElement("rects");
    QDomNodeList rectNodes = rectsDE.childNodes();
    int k = rectNodes.size();
    for (int x = 0; x < k; ++x)
    {
        QDomElement rectDE = rectNodes.at(x).toElement();
        HaarWeightedRect hwr(rectDE.text());
        add(hwr);
    }
}

int HaarFeature::rectsSize(void) const
{
    return mRectList.size();
}

HaarFeatureSize HaarFeature::size(void) const
{
    return mSize;
}

void HaarFeature::setTilted(const HaarFeatureTilted tilted)
{
    mTilted = tilted;
    TRACE("------FeatureTilted = %1", mTilted);
}

void HaarFeature::setThreshold(const HaarFeatureThreshold threshold)
{
    mThreshold = threshold;
    TRACE("------FeatureThreshold = %1", mThreshold);
}

void HaarFeature::setLeftValue(const HaarFeatureValue value)
{
    mLeftValue = value;
    TRACE("------FeatureLeftValue = %1", mLeftValue);
}

void HaarFeature::setRightValue(const HaarFeatureValue value)
{
    mRightValue = value;
    TRACE("------FeatureRightValue = %1", mRightValue);
}

void HaarFeature::add(const HaarWeightedRect hwrc)
{
    TRACE("------Feature adding rect %1 = %2, weight = %3",
          mRectList.size(), Readable(hwrc.rect()), hwrc.weight());
    mRectList.append(hwrc);
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
