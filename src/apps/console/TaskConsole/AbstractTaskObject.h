#ifndef ABSTRACTTASKOBJECT_H
#define ABSTRACTTASKOBJECT_H

#include <QObject>

class AbstractTaskRunnableInterface;

class AbstractTaskObject : public QObject
{
    Q_OBJECT
public:
    explicit AbstractTaskObject(QObject * parent=0);
    void setRif(AbstractTaskRunnableInterface * pRif);
    void emitRunning(const int minProgress, const int maxProgress);
    void emitProgress(const int value);
    void emitFinished(const bool ok);
    void deleteInterface(void);

signals:
    void running(void);
    void running(int minProgress, int maxProgress);
    void progress(int value);
    void progress(int value, int min, int max);
    void success(void);
    void error(void);
    void finished(bool ok);

public slots:

private:
    AbstractTaskRunnableInterface * mpRif;
};

#endif // ABSTRACTTASKOBJECT_H
