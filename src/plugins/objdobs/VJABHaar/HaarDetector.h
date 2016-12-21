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

private:
    HaarDetectorSize mSize;
    QList<HaarStage> mStageList;
};

#endif // HAARDETECTOR_H
