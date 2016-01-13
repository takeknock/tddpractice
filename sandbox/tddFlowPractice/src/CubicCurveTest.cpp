#include <map>
#include "CubicCurveTest.h"
#include "CubicCurve.h"


CPPUNIT_TEST_SUITE_REGISTRATION(CubicCurveTest);

void CubicCurveTest::setUp()
{
}

void CubicCurveTest::testSolve()
{
}



void CubicCurveTest::testIsExistLocalPoints()
{

    const double a1 = 1.0;
    const double b1 = 10.0;
    const double c1 = 2.0;
    const double d1 = 1.0;
    cc::CubicCurve cubicCurve1(a1, b1, c1, d1);
    CPPUNIT_ASSERT_EQUAL(cubicCurve1.isExistLocalPoints(), true);

    const double a2 = 1.0;
    const double b2 = 1.0;
    const double c2 = 2.0;
    const double d2 = 1.0;
    cc::CubicCurve cubicCurve2(a2, b2, c2, d2);
    CPPUNIT_ASSERT_EQUAL(cubicCurve2.isExistLocalPoints(), false);
}

void CubicCurveTest::testCalculateInflectionPoint()
{
    const double a = 1.0;
    const double b = 1.0;
    const double c = 1.0;
    const double d = 1.0;
    cc::CubicCurve cubicCurve(a, b, c, d);
    std::pair<double, double> inflectionPoint = cubicCurve.calculateInflectionPoint();
    CPPUNIT_ASSERT_DOUBLES_EQUAL(inflectionPoint.first, -b /(3*a), 10e-8);

    
    CPPUNIT_ASSERT_DOUBLES_EQUAL(
        inflectionPoint.second,
        2.0 * b * b - 9 * a * b * c + 27 * a * a * d /(27*a*a), 10e-8);

}


void CubicCurveTest::tearDown()
{
}
