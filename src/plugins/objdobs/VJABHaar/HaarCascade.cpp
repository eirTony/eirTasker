#include "HaarCascade.h"

#include <QFile>
#include <QFileInfo>
#include <QDomDocument>

#include "../../../libs/core/log/Log.h"
#include "../../../libs/data/type/StreamParsed.h"
#include "../../../libs/data/type/Success.h"

HaarCascade::HaarCascade(void) {;}
HaarCascade::HaarCascade(const QFileInfo & xmlFi) { load(xmlFi); }
HaarCascade::HaarCascade(const QDomDocument & doc) { load(doc); }

bool HaarCascade::load(const QFileInfo & xmlFi)
{
    EXPECT(xmlFi.exists());
    QFile xf(xmlFi.absoluteFilePath());
    TRACE("HaarCascade loading: ", xf.fileName());
    QDomDocument dd("HaarCascade:"+xmlFi.completeBaseName());
    if ( ! xf.open(QIODevice::ReadOnly))
        setError(Critical, (ErrorCode)(xf.error()), xf.errorString());
    if ( ! isCritical())    return isCritical();                    //----------

    QString errorString;
    int errorLine, errorColumn;
    if ( ! dd.setContent(&xf, false, &errorString, &errorLine, &errorColumn))
        return setError(Critical, QString("HaarCascade load - XML failure:"
                                          " %1 at %2,%3")
                                    .arg(errorString)
                                    .arg(errorLine)
                                    .arg(errorColumn));             //----------

    return load(dd);

}

bool HaarCascade::load(const QDomDocument & doc)
{
    return load(doc.documentElement());
}

bool HaarCascade::load(const QDomElement & de)
{
    mDocElement = de;

    QDomElement openCvDE = mDocElement.firstChildElement("opencv_storage");
    if (openCvDE.isNull())
        return setError(Critical, NoOpenCVStorageElement);          //----------
    QDomElement haarCascadeDE = openCvDE.firstChildElement();
    QString typeIdAttribute = haarCascadeDE.attribute("type_id");
    if (cmExpectedTypeId != typeIdAttribute)
        return setError(Warning, UnexpectedTypeId, typeIdAttribute);//----------
    QDomElement sizeDE = openCvDE.firstChildElement("size");
    if (sizeDE.isNull())
        return setError(Warning, NoSizeElement);                    //----------
    StreamParsed sp(sizeDE.text());
    mDetectorSize = sp.toSize();
    if ( ! mDetectorSize.isValid())
        return setError(Warning, InvalidSizeElement, sizeDE.text());//----------
    QDomElement stagesDE = openCvDE.firstChildElement("stages");
    if (stagesDE.isNull())
        return setError(Critical, NoStagesElement);                 //----------
    QDomNodeList stageNodes = stagesDE.childNodes();
    if (stageNodes.isEmpty())
        return setError(Critical, StagesElementEmpty);              //----------
    int k = stageNodes.size();
    mStageDEs.reserve(k);
    mStages.reserve(k);
    for (int x = 0; x < k; ++x)
    {
        QDomNode dn = stageNodes.at(x);
        if (dn.isElement())
            mStageDEs.append(dn.toElement());
    }

    // later:
    TODO("Start tasks for stage reads");
    TODO("collect stages from tasks");
    TODO("return true;");

    // For now do sequentially in current thread
    Success success;
    for (int x = 0; x < k; ++x)
    {
        success.set(loadStage(x, mStageDEs.at(x)));
        if ( ! success()) break;
    }
    return success();
}

bool HaarCascade::loadStage(const Index x,
                            const QDomElement & de)
{
    HaarStage stage(x, de);
    mStages[x] = stage;
    return stage.isValid();
}
