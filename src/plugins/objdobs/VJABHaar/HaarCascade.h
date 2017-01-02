#ifndef HAARCASCADE_H
#define HAARCASCADE_H
#include "VJABHaar.h"

class QFileInfo;
class QDomDocument;
#include <QDomElement>

#include <../../../libs/core/base/BasicErrorInfo.h>
#include "HaarStage.h"

typedef QList<HaarStage> HaarStageList;

class VJABHAARSHARED_EXPORT HaarCascade : public BasicErrorInfo
{
public:
    enum XmlParseError
    {
        UnexpectedTypeId = 1001,
        NoOpenCVStorageElement,
        NoSizeElement,
        InvalidSizeElement,
        NoStagesElement,
        NoFirstStageElement,
        EmptyTreesElement,
    };

public:
    HaarCascade(void);
    HaarCascade(const QFileInfo & xmlFi);
    HaarCascade(const QDomDocument & doc);
    bool set(const QFileInfo & xmlFi);
    bool set(const QDomDocument & doc);
    bool set(const QDomElement & de);

private:
    bool ingestStages(const QDomElement & stagesDE);
    bool ingestTrees(const QDomElement & treesDE);

private:
    const QString cmExpectedTypeId = QString("opencv-haar-classifier");
    QDomElement mDocElement;
    QDomElement mStagesElement;
    HaarDetectorSize mDetectorSize;
    HaarStageList mStages;
};

#endif // HAARCASCADE_H
