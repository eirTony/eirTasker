#ifndef STDIO_H
#define STDIO_H

#include <QObject>

#include <QIODevice>
#include <QTextStream>

class StdIO : public QObject
{
    Q_OBJECT
public:
    explicit StdIO(QObject * parent=0);

signals:

public slots:

public: // static
    static QTextStream out(stdout);
};

#endif // STDIO_H
