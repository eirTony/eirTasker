#ifndef HAARSTAGE_H
#define HAARSTAGE_H
#include "VJABHaar.h"

#include <QLinkedList>
class QDomElement;

#include "HaarTree.h"

class HaarStage
{
public:
    HaarStage(void);
    HaarStage(const int index,
              const QDomElement & de);
    void setThreshold(const HaarStageThreshold threshold);
    void setParent(const HaarStageParent parent);
    void setNext(const HaarStageNext next);
    void add(const HaarTree & tree);
    HaarStageBoolean pass(const HaarGreyFrame & grey,
                          const HaarFeatureSquares & squares,
                          const HaarFramePoint pt,
                          const HaarFeatureScale scale);

private:
    const int mIndex;
    HaarStageThreshold mThreshold;
    HaarStageParent mParentStage;
    HaarStageNext mNextStage;

    QLinkedList<HaarTree> mTreeList;
};

#endif // HAARSTAGE_H
