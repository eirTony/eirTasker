#ifndef ABSTRACTTASKRUNNABLEINTERFACE_H
#define ABSTRACTTASKRUNNABLEINTERFACE_H

#include <QRunnable>

#include <QList>

#include "AbstractTaskObject.h"
#include "AbstractTaskContextEntity.h"
#include "AbstractTaskConfigurationEntity.h"
#include "AbstractTaskInputEntity.h"
#include "AbstractTaskResultsEntity.h"
#include "TaskMethodKey.h"

// QRunnable::run(void) is pure virual, therefore we are pure virtual

class AbstractTaskRunnableInterface : public QRunnable
{
    typedef AbstractKey MethodKey;
    typedef MethodKey::List MethodKeyList;

public:
    AbstractTaskRunnableInterface(void);
    AbstractTaskRunnableInterface(AbstractTaskObject * taskObject,
                                  const MethodKeyList & keys,
                                  const AbstractTaskContextEntity & context,
                                  const AbstractTaskConfigurationEntity & config,
                                  const AbstractTaskInputEntity & input);
    void setMethods(const MethodKeyList & methodList);
    virtual MethodKeyList supportedMethods(void) const;
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
    MethodKeyList mMethodList;
    AbstractTaskContextEntity mContext;
    AbstractTaskConfigurationEntity mConfig;
    AbstractTaskInputEntity mInput;
    AbstractTaskResultsEntity mReslults;
};

#endif // ABSTRACTTASKRUNNABLEINTERFACE_H
