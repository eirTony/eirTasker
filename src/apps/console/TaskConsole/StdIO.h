#ifndef STDIO_H
#define STDIO_H

#include <QObject>

#include "AbstractId.h"
#include "AbstractName.h"
#include "AbstractTaskRunnableInterface.h"

class QFile;
class QTextStream;

class StdIO : public QObject
{
    Q_OBJECT
public:
    enum StdName
    {
        NullStd = 0,
        StdInfo,
        Out,
        Log,
        Err,
        In,
        SizeStd
    };
    enum LogLevel
    {
        NullLevel = 0,
        Trace,
        Debug,
        InfoLevel,
        Warning,
        Error,
        Fatal,
        SizeLevel
    };
    typedef QTextStream * StdIOStream;
    typedef AbstractName StreamName;
    typedef QPair<StdName, StreamName> StdStreamName;
    typedef QVector<QFile *> FilePtrList;
    typedef QMap<StdStreamName, StdIOStream *> StdStreamNamePtrMap;

public:
    explicit StdIO(QObject * parent=0);

signals:

public slots:

public: // static
    static void info(const QString & message,
                     const QVariant & var1=QVariant(),
                     const QVariant & var2=QVariant(),
                     const QVariant & var3=QVariant(),
                     const QVariant & var4=QVariant());

protected: // static
    static FILE * fp(const StdName std);
    static QFile * file(const StdName std);
    static StdIOStream * stream(const StdName std);
    static StdIOStream * stream(const StdStreamName & stdStreamName);
    static QByteArray formatted(const QString & message,
                     const QVariant & var1=QVariant(),
                     const QVariant & var2=QVariant(),
                     const QVariant & var3=QVariant(),
                     const QVariant & var4=QVariant());
    static void write(const StdName std,
                      const QString & message,
                     const QVariant & var1=QVariant(),
                     const QVariant & var2=QVariant(),
                     const QVariant & var3=QVariant(),
                     const QVariant & var4=QVariant());


private: // static
    static FilePtrList smFilePtrList;
    static StdStreamNamePtrMap smStdStreamNamePtrMap;
//    static MethodKeyList smStreamNameMap;
};

#endif // STDIO_H
