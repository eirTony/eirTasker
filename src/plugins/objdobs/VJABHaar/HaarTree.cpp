#include "HaarTree.h"

#include <QDomElement>

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
        break;
    }

    return featureValue;
}
