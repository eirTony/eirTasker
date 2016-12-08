#ifndef BASICID_H
#define BASICID_H
#include "BaseLib.h"

#include <QChar>

#include "BasicName.h"

class BASESHARED_EXPORT BasicId
{
public:
    BasicId(void);
    BasicId(const QString & s);
    void set(const QString & s);

private:
    BasicName::List mNameList;

private: // const static
    const static QChar csmSeparatorChar;

};

#endif // BASICID_H
