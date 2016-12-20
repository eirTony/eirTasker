#include "HaarCascade.h"

#include <QFile>
#include <QFileInfo>
#include <QDomDocument>
#include <QDomElement>

HaarCascade::HaarCascade(void) {;}
HaarCascade::HaarCascade(const QFileInfo & xmlFi) { set(xmlFi); }
HaarCascade::HaarCascade(const QDomElement & de) { set(de); }

bool HaarCascade::set(const QFileInfo & xmlFi)
{
    QFile xf(xmlFi.absoluteFilePath());
    QDomDocument dd("HaarCascade:"+xmlFi.completeBaseName());
    if ( ! xf.open(QIODevice::ReadOnly))
        setError((ErrorCode)(xf.error()), xf.errorString());
    if ( ! isError())
    {
        QString errorString;
        int errorLine, errorColumn;
        if ( ! dd.setContent(&xf, false, &errorString, &errorLine, &errorColumn))
            setError(QString("HaarCascade read XML failure: %1 at %2,%3")
                    .arg(errorString).arg(errorLine).arg(errorColumn));
        else
            set(dd.documentElement());
    }
    return isError();
}

bool HaarCascade::set(const QDomElement & de)
{
    (void)de; // TODO: Process cascade

    return false;
}

