#ifndef BINARYBASE_H
#define BINARYBASE_H

#include <QObject>

class BinaryBase : public QObject
{
    Q_OBJECT
public:
    explicit BinaryBase(QObject * parent=0);

signals:

public slots:
};
/*! class BinaryBase Base class for each .DLL and .EXE binary executable
 */

#endif // BINARYBASE_H
