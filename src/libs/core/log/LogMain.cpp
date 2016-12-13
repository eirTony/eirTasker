#include "LogMain.h"

LogMain::LogMain(void) {;}

bool LogMain::add(const QUrl & url)
{
    BasicName scheme = url.scheme();
    if (scheme.is("troll"))
        return addTroll(url);
    else
        return false;
}


bool LogMain::addTroll(const QUrl & url)
{
    
}

