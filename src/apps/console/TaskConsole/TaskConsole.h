#ifndef TASKCONSOLE_H
#define TASKCONSOLE_H

#include <QThread>

#include <../../../libs/core/boost/log/Logger.h>


class TaskConsole : public QThread
{
    Q_OBJECT
public:
    explicit TaskConsole(QObject * parent=0);
    static BL::core_ptr globalLog(void) { return smpGlobalLog; }
//    BL::core * localLog(void) { return cmpLocalLog; }

signals:

public slots:

private slots:
    void init(void);

private:
    static BL::core * boostLog(void);

private:
//    BL::core * cmpLocalLog;
    static BL::core_ptr smpGlobalLog;
};

#endif // TASKCONSOLE_H
