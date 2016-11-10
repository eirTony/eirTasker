#ifndef LOGGER_H
#define LOGGER_H

#include <QObject>

class Logger : public QObject
{
    Q_OBJECT
public:
    Logger(QObject * parent=0);
};

#endif // LOGGER_H
