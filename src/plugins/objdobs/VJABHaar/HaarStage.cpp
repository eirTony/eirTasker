#include "HaarStage.h"

#include <QDomElement>

HaarStage::HaarStage(void) : mIndex(-1) {;}

HaarStage::HaarStage(const int index,
                     const QDomElement & de)
    : mIndex(index)
{
    QDomElement treesDE = de.firstChildElement("trees");
    if (treesDE.isNull()) return;                               //----------
    QDomNodeList treeList = treesDE.childNodes();
    int k = treeList.size();
    for (int x = 0; x < k; ++k)
    {
        QDomNode dn = treeList.at(x);
        if (dn.isElement())
            add(HaarTree(dn.toElement()));
    }
    QDomElement thresholdDE = de.firstChildElement("stage_threshold");
    QDomElement parentDE = de.firstChildElement("parent");
    QDomElement nextDE = de.firstChildElement("next");
    setThreshold(thresholdDE.text().toFloat());
    setParent(parentDE.text().toInt());
    setNext(nextDE.text().toInt());
}

void HaarStage::setThreshold(const HaarStageThreshold threshold)
{
    mThreshold = threshold;
}

void HaarStage::add(const HaarTree & tree)
{
    mTreeList.append(tree);
}

