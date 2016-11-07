#include <QString>
#include <QtTest>

class TestDataLibs : public QObject
{
    Q_OBJECT

public:
    TestDataLibs();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1_data();
    void testCase1();
    void testIndex(void);
};

TestDataLibs::TestDataLibs()
{
}

void TestDataLibs::initTestCase()
{
}

void TestDataLibs::cleanupTestCase()
{
}

void TestDataLibs::testCase1_data()
{
    QTest::addColumn<QString>("data");
    QTest::newRow("0") << QString();
}

void TestDataLibs::testCase1()
{
    QFETCH(QString, data);
    QVERIFY2(true, "Failure");
}

//#include <thing/Type.h>
//#include "../../libs/thing/Type/Index.h"
#include "../../../libs/data/Type/Index.h"

void TestDataLibs::testIndex(void)
{
    TestIndex tIndex;
}

QTEST_APPLESS_MAIN(TestDataLibs)

#include "TestDataLibs.moc"
