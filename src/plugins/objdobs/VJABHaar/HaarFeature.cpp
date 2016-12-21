#include "HaarFeature.h"

// see https://github.com/eirTony/INDI1/blob/develop/incoming/JViolaJJones2/src/main/java/jviolajones/Feature.java

HaarFeature::HaarFeature(void)
    : mThreshold(0)
    , mLeftValue(0)
    , mRightValue(0)
    , mLeftNode(0)
    , mRightNode(0)
    , mHasLeftNode(false)
    , mHasRightNode(false) {;}
