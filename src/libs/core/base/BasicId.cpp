#include "BasicId.h"

const QChar BasicId::csmSeparatorChar('/');

BasicId::BasicId(void) {;}

BasicId::BasicId(const QString & s) { set(s); }

void BasicId::set(const QString & s)
{
    QString names = s.simplified().replace(' ', csmSeparatorChar);
    foreach (BasicName name, s.split(csmSeparatorChar,
                                     QString::SkipEmptyParts))
        mNameList.append(name);
}
