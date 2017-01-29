#ifndef HAARCASCADE_H
#define HAARCASCADE_H
#include "VJABHaar.h"

class QFileInfo;
class QDomDocument;
#include <QDomElement>

#include <../../../libs/core/base/BasicErrorInfo.h>
#include <../../../libs/data/type/Index.h>

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
        StagesElementEmpty,
        NoStageTreesElement = 1101,
        XmlParseNotSupported = 1999
    };

public:
    HaarCascade(void);
    HaarCascade(const QFileInfo & xmlFi);
    HaarCascade(const QDomDocument & doc);
    bool load(const QFileInfo & xmlFi);
    bool load(const QDomDocument & doc);
    bool load(const QDomElement & de);
    bool loadStage(const Index x,
                   const QDomElement & de);

private:
    const QString cmExpectedTypeId = QString("opencv-haar-classifier");
    QDomElement mDocElement;
    QList<QDomElement> mStageDEs;
    HaarDetectorSize mDetectorSize;
    HaarStageList mStages;
};

#endif // HAARCASCADE_H
