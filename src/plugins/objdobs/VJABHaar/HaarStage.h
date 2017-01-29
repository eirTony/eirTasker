#ifndef HAARSTAGE_H
#define HAARSTAGE_H
#include "VJABHaar.h"

#include <QLinkedList>
class QDomElement;

#include <../../../libs/core/base/BasicErrorInfo.h>
#include "../../../libs/data/type/Index.h"

#include "HaarTree.h"

class HaarStage : public BasicErrorInfo
{
public:
    HaarStage(void);
    HaarStage(const Index index,
              const QDomElement & de);
    void setThreshold(const HaarStageThreshold threshold);
    void setParent(const HaarStageParent parent);
    void setNext(const HaarStageNext next);
    void add(const HaarTree & tree);
    bool isValid(void) const;
    HaarStageBoolean pass(const HaarGreyFrame & grey,
                          const HaarFeatureSquares & squares,
                          const HaarFramePoint pt,
                          const HaarFeatureScale scale);

private:
    int mIndex;
    HaarStageThreshold mThreshold;
    HaarStageParent mParentStage;
    HaarStageNext mNextStage;

    QLinkedList<HaarTree> mTreeList;
};

#endif // HAARSTAGE_H
