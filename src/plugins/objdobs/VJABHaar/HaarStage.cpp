#include "HaarStage.h"

#include <QDomElement>

#include "../../../libs/core/log/Log.h"

#include "HaarCascade.h"

HaarStage::HaarStage(void) : mIndex(-1) {;}

HaarStage::HaarStage(const Index index,
                     const QDomElement & de)
    : mIndex(index)
{
    TRACE("===Loading HaarStage #%1", index);

    QDomElement thresholdDE = de.firstChildElement("stage_threshold");
    QDomElement parentDE = de.firstChildElement("parent");
    QDomElement nextDE = de.firstChildElement("next");
    setThreshold(thresholdDE.text().toFloat());
    setParent(parentDE.text().toInt());
    setNext(nextDE.text().toInt());

    QDomElement treesDE = de.firstChildElement("trees");
    if (treesDE.isNull())
        setError(Critical, HaarCascade::NoStageTreesElement);
    if (isCritical()) return;                                       //----------
    QDomNodeList treeList = treesDE.childNodes();
    int k = treeList.size();
    for (int x = 0; x < k; ++k)
    {
        QDomNode dn = treeList.at(x);
        if (dn.isElement())
            add(HaarTree(dn.toElement()));
    }
}

void HaarStage::setThreshold(const HaarStageThreshold threshold)
{
    mThreshold = threshold;
    TRACE("---stage_threshold = %1", mThreshold);
}

void HaarStage::setParent(const HaarStageParent parent)
{
    mParentStage = parent;
    TRACE("---parent = %1", mParentStage);
}

void HaarStage::setNext(const HaarStageNext next)
{
    mNextStage = next;
    TRACE("---next = %1", mNextStage);
}

void HaarStage::add(const HaarTree & tree)
{
    TRACE("---adding tree %1: %2 features",
          mTreeList.size(), tree.featureSize());
    mTreeList.append(tree);
}

bool HaarStage::isValid(void) const
{
    return ! qIsNull(mThreshold) && ! qIsNaN(mThreshold)
                && !! mParentStage && !! mNextStage
                && ! mTreeList.isEmpty()
                && ! isCritical();
}

