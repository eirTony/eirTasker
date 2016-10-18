#include <QString>
#include <QtTest>

class TestThingLibs : public QObject
{
    Q_OBJECT

public:
    TestThingLibs();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1_data();
    void testCase1();
    void testIndex(void);
};

TestThingLibs::TestThingLibs()
{
}

void TestThingLibs::initTestCase()
{
}

void TestThingLibs::cleanupTestCase()
{
}

void TestThingLibs::testCase1_data()
{
    QTest::addColumn<QString>("data");
    QTest::newRow("0") << QString();
}

void TestThingLibs::testCase1()
{
    QFETCH(QString, data);
    QVERIFY2(true, "Failure");
}

//#include <thing/Type.h>
//#include "../../libs/thing/Type/Index.h"
#include "../../../libs/thing/Type/Index.h"

void TestThingLibs::testIndex(void)
{
    TestIndex tIndex;
}

QTEST_APPLESS_MAIN(TestThingLibs)

#include "TestThingLibs.moc"
