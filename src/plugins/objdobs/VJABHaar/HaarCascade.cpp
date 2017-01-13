#include "HaarCascade.h"

#include <QFile>
#include <QFileInfo>
#include <QDomDocument>

#include "../../../libs/data/Type/StreamParsed.h"

HaarCascade::HaarCascade(void) {;}
HaarCascade::HaarCascade(const QFileInfo & xmlFi) { set(xmlFi); }
HaarCascade::HaarCascade(const QDomDocument & doc) { set(doc); }

bool HaarCascade::set(const QFileInfo & xmlFi)
{
    QFile xf(xmlFi.absoluteFilePath());
    QDomDocument dd("HaarCascade:"+xmlFi.completeBaseName());
    if ( ! xf.open(QIODevice::ReadOnly))
        setError(Critical, (ErrorCode)(xf.error()), xf.errorString());
    if ( ! isError())
    {
        QString errorString;
        int errorLine, errorColumn;
        if ( ! dd.setContent(&xf, false, &errorString, &errorLine, &errorColumn))
            setError(Critical, QString("HaarCascade read XML failure: %1 at %2,%3")
                                .arg(errorString).arg(errorLine).arg(errorColumn));
        else
            set(dd.documentElement());
    }
    return isError();
}

bool HaarCascade::set(const QDomDocument & doc)
{
    return set(doc.documentElement());
}

bool HaarCascade::set(const QDomElement & de)
{
    mDocElement = de;

    QDomElement openCvDE = mDocElement.firstChildElement("opencv_storage");
    if (openCvDE.isNull())
        return setError(Critical, NoOpenCVStorageElement);                //----------
    QDomElement haarCascadeDE = openCvDE.firstChildElement();
    QString typeIdAttribute = haarCascadeDE.attribute("type_id");
    if (cmExpectedTypeId != typeIdAttribute)
        return setError(Warning, UnexpectedTypeId, typeIdAttribute);     //----------
    QDomElement sizeDE = openCvDE.firstChildElement("size");
    if (sizeDE.isNull())
        return setError(Warning, NoSizeElement);                         //----------
    StreamParsed sp(sizeDE.text());
    mDetectorSize = sp.toSize();
    if ( ! mDetectorSize.isValid())
        return setError(Warning, InvalidSizeElement, sizeDE.text());     //----------
    QDomElement stagesDE = openCvDE.firstChildElement("stages");
    if (stagesDE.isNull())
        return setError(Critical, NoStagesElement);                       //----------
    QDomNodeList stageNodes = stagesDE.childNodes();
    if (stageNodes.isEmpty())
        return setError(Critical, StagesElementEmpty);                    //----------
    int k = stageNodes.size();
    mStageDEs.reserve(k);
    for (int x = 0; x < k; ++x)
    {
        QDomNode dn = stageNodes.at(x);
        if (dn.isElement())
            mStageDEs.append(dn.toElement());
    }

    // Start tasks for stage reads

    // collect stages from tasks

    return true;
}
