#include "HaarStage.h"

HaarStage::HaarStage(void) : mThreshold(0) {;}

HaarStage::HaarStage(const HaarStageThreshold threshold)
    : mThreshold(threshold) {;}

void HaarStage::addTree(const HaarTree & tree)
{
    mTreeList.append(tree);
}

