#ifndef STDIO_H
#define STDIO_H

#include <QObject>

class QFile;
class QTextStream;

class StdIO : public QObject
{
    Q_OBJECT
public:
    explicit StdIO(QObject * parent=0);

signals:

public slots:

public: // static
//    static QTextStream out(stdout);
//    static QTextStream out(std::cout);
    static QTextStream * out;

private: // static
//    static QFile * spOutFile;
};

#endif // STDIO_H
