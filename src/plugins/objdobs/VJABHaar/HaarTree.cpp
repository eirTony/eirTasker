#include "HaarTree.h"

#include <QDomElement>

#include "../../../libs/core/log/Log.h"

HaarTree::HaarTree(void) {;}

HaarTree::HaarTree(const QDomElement & de)
{
    QDomElement featureDE = de.firstChildElement();
    do
    {
        HaarFeature feature(featureDE);
        add(feature);
        featureDE = featureDE.nextSiblingElement();
    } while ( ! featureDE.isNull());
}

void HaarTree::add(const HaarFeature & feature)
{
    TRACE("======Adding Feature %1: % Rects",
          mFeatureList.size(), feature.rectsSize());
    mFeatureList.append(feature);
}

int HaarTree::featureSize(void) const
{
    return mFeatureList.size();
}

HaarFeatureValue HaarTree::getValue(const HaarGreyFrame & grey,
                                    const HaarFeatureSquares & squares,
                                    const HaarFramePoint pt,
                                    const HaarFeatureScale scale)
{
    USE(grey); USE(squares); USE(pt); USE(scale);
    HaarFeatureValue featureValue = 0.0;
    HaarFeature currentFeature = mFeatureList.first();
    USE(currentFeature);

    forever
    {
        break;
    }

    return featureValue;
}
