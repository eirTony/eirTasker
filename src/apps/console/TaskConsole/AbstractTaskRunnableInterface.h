#ifndef ABSTRACTTASKRUNNABLEINTERFACE_H
#define ABSTRACTTASKRUNNABLEINTERFACE_H

#include <QRunnable>

#include "AbstractTaskObject.h"
#include "AbstractTaskContextEntity.h"
#include "AbstractTaskConfigurationEntity.h"
#include "AbstractTaskInputEntity.h"
#include "AbstractTaskResultsEntity.h"

// QRunnable::run(void) is pure virual, therefore we are pure virtual

class AbstractTaskRunnableInterface : public QRunnable
{
public:
    AbstractTaskRunnableInterface(void);
    AbstractTaskRunnableInterface(AbstractTaskObject * taskObject,
                                  const AbstractTaskContextEntity & context,
                                  const AbstractTaskConfigurationEntity & config,
                                  const AbstractTaskInputEntity & input);
    AbstractTaskResultsEntity & result() (void) const;

protected:
    void notifyRunning(const int minProgress, const int maxProgress);
    void notifyProgress(const int value);
    void notifyFinished(const bool ok);

private:
    const AbstractTaskObject * cmpObject = 0;
    AbstractTaskContextEntity mContext;
    AbstractTaskConfigurationEntity mConfig;
    AbstractTaskInputEntity mInput;
    AbstractTaskResultsEntity mReslults;
};

#endif // ABSTRACTTASKRUNNABLEINTERFACE_H
