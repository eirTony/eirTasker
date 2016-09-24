#ifndef ABSTRACTTASKRUNNABLEINTERFACE_H
#define ABSTRACTTASKRUNNABLEINTERFACE_H

#include <QRunnable>

#include "AbstractTaskObject.h"
#include "AbstractTaskContextEntity.h"
#include "AbstractTaskConfigurationEntity.h"
#include "AbstractTaskInputEntity.h"
#include "AbstractTaskResultsEntity.h"
#include "TaskMethodKey.h"

// QRunnable::run(void) is pure virual, therefore we are pure virtual

class AbstractTaskRunnableInterface : public QRunnable
{
public:
    AbstractTaskRunnableInterface(void);
    AbstractTaskRunnableInterface(AbstractTaskObject * taskObject,
                                  const AbstractKey::List & keys,
                                  const AbstractTaskContextEntity & context,
                                  const AbstractTaskConfigurationEntity & config,
                                  const AbstractTaskInputEntity & input);
    void setMethods(const AbstractKey::List & methodList);
    virtual AbstractKey::List supportedMethods(void) const;
    virtual bool supports(AbstractKey method);
    AbstractTaskResultsEntity results(void) const;
    AbstractTaskResultsEntity operator() (void) const;
    AbstractTaskResultsEntity takeResults(void);

protected:
    void notifyRunning(const int minProgress, const int maxProgress);
    void notifyProgress(const int value);
    void notifyFinished(const bool ok);

private:
    AbstractTaskObject * const cmpObject = 0;
    AbstractKey::List mMethodList;
    AbstractTaskContextEntity mContext;
    AbstractTaskConfigurationEntity mConfig;
    AbstractTaskInputEntity mInput;
    AbstractTaskResultsEntity mReslults;
};

#endif // ABSTRACTTASKRUNNABLEINTERFACE_H
