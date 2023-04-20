#include <QtTest>
#include <QDebug>

// add necessary includes here
#include "Calc.h"
class cal_test : public QObject
{
    Q_OBJECT

public:
    cal_test();
    ~cal_test();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();
    void test_case2();
    void test_case3();

};

cal_test::cal_test()
{

}

cal_test::~cal_test()
{

}

void cal_test::initTestCase()
{

}

void cal_test::cleanupTestCase()
{

}

void cal_test::test_case1()
{
    Calc c2;
    QVERIFY2(c2.Add(3,4)==7,"check sumation ");
//    QVERIFY2(c2.Add(3,2)==1,"check sumation ");
}
void cal_test::test_case2()
{
    Calc c2;
    QVERIFY2(c2.Add(10,5)==15,"check sumation ");
//    QVERIFY2(c2.Add(3,2)==1,"check sumation ");
}
void cal_test::test_case3()
{
    Calc c2;
    QVERIFY2(c2.Add(3,4)==1,"check sumation ");
//    QVERIFY2(c2.Add(3,2)==1,"check sumation ");
}
QTEST_APPLESS_MAIN(cal_test)

#include "tst_cal_test.moc"
