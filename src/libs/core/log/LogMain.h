#ifndef LOGMAIN_H
#define LOGMAIN_H


#include <QUrl>

class LogMain
{
public:
    LogMain(void);
    bool add(const QUrl & url);

private:
    bool addTroll(const QUrl & url);
    
    
};

#endif // LOGMAIN_H
