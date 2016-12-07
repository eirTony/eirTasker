#ifndef LOGSINK_H
#define LOGSINK_H

#include <QObject>

class QFile;
class QFileInfo;
class QIODevice;
class QTextStream;

namespace EIRC2 { namespace BoostLib { namespace Logger {

class LogFilter;

class LogSink : public QObject
{   Q_OBJECT
public:
    LogSink(const QString & name,
            QObject * parent=0);
    bool set(QTextStream * ts);
    bool set(QIODevice * iod);
    bool set(const QFileInfo & fi);
    void set(LogFilter * f);

private:
    const QString cmName;
    QIODevice * mpIOD = 0;
    QTextStream * mpStream = 0;
};
} } } // Logger, BoostLib, EIRC2

#endif // LOGSINK_H
