#ifndef STDIODEVICE_H
#define STDIODEVICE_H

#include <QObject>

//#include <QFile>
#include <QIODevice>
class QFile;
class QTextStream;

class StdIODevice : public QObject
{
    Q_OBJECT
public:
    StdIODevice(const QIODevice::OpenMode mode,
                QObject * parent=0);
    bool isWritable(void) const;
    bool writeLine(const QString & line);

public slots:
    bool open(const QIODevice::OpenMode mode);

private:
    QFile * mpOutFile = 0;
    QTextStream * mpOutStream = 0;
};

#endif // STDIODEVICE_H
