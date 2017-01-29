#include "ConsoleObject.h"

#include <QtDebug>
#include <QCoreApplication>
#include <QDateTime>
#include <QFileInfo>
#include <QStringBuilder>
#include <QTimer>
#include <QUrl>

#include <../../../libs/core/log/Log.h>
#include <../../../libs/core/log/LogItem.h>
#include <../../../libs/core/log/LogMain.h>

#include <../../../plugins/objdobs/VJABHaar/VJABHaar.h>
#include <../../../plugins/objdobs/VJABHaar/HaarCascade.h>

ConsoleObject::ConsoleObject(QObject * parent)
    : QObject(parent)
    , mpHaar(new VJABHaar)
{
    setObjectName("MainThread");
}

void ConsoleObject::init(void) // slot
{
    LogMain::add(QUrl("troll://"));

    INFO("Starting %1 at %2",
         QCoreApplication::arguments().first(),
         QDateTime::currentDateTime().toString());
    INFO("Starting " + QCoreApplication::arguments().first()
            + " at " + QDateTime::currentDateTime().toString());
    INFOIF(true, "This should print");
    INFONOT(true, "And This should not");
    INFONOT(false, "But, this one should");

    QFileInfo haarFI("../../detectors/haarcascade_frontalface_default.xml");
    EXPECT(haarFI.exists());
    EXPECT(mpHaar->cascade()->load(haarFI));

    QTimer::singleShot(5000, qApp, SLOT(quit()));
}
