#ifndef HAARDETECTOR_H
#define HAARDETECTOR_H
#include "VJABHaar.h"

#include <QList>

#include "HaarCascade.h"
#include "HaarStage.h"

class HaarDetector
{
public:
    HaarDetector(void);
    HaarDetector(const HaarCascade & cascade);
    HaarObsList getObservations(const HaarGreyFrame & image,
                                   const HaarFeatureScale baseScale,
                                   const HaarFeatureScale scaleFactor,
                                   const HaarFeatureScale incrment,
                                   const HaarDetectorBoolean doCanny);

private: // tasks
    HaarSumsFrame calculateSums(void) const;
    HaarSquaresFrame calculateSquares(void) const;
    HaarCannyFrame cannyPruning(void) const; // consider BitFrame return
    bool evaluateCanny(const HaarFramePoint pt);
    HaarObsSizes calculateSizes(void) const;
    HaarObsList process(const HaarObsSize size); // massively parallel
    HaarObsList process(const HaarStage & stage, // called by ^^^^
                        const HaarObsSize size);

private:
    HaarDetectorSize mSize;
    QList<HaarStage> mStageList;

    HaarGreyFrame mGreyFrame;
    HaarFeatureScale mBaseScale;
    HaarFeatureScale mScaleFactor;
    HaarFeatureScale mIncrment;
    HaarDetectorBoolean mDoCanny;

    HaarSumsFrame mSums;
    HaarSquaresFrame mSquares;
    HaarCannyFrame mCanny;
    HaarObsSizes mSizes;
};

#endif // HAARDETECTOR_H
