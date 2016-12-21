#ifndef HAARSTAGE_H
#define HAARSTAGE_H
#include "VJABHaar.h"

#include <QLinkedList>

#include "HaarTree.h"

class HaarStage
{
public:
    HaarStage(void);
    HaarStage(const HaarStageThreshold threshold);
    void addTree(const HaarTree & tree);
    HaarStageBoolean pass(const HaarGreyFrame & grey,
                          const HaarFeatureSquares & squares,
                          const int i,
                          const int j,
                          const HaarFeatureScale scale);


private:
    HaarStageThreshold mThreshold;
    QLinkedList<HaarTree> mTreeList;
};

#endif // HAARSTAGE_H
