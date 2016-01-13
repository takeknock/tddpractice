#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>

class CubicCurveTest : public CPPUNIT_NS::TestFixture {
public:
    CPPUNIT_TEST_SUITE(CubicCurveTest);
    CPPUNIT_TEST(testSolve);
    CPPUNIT_TEST(testIsExistLocalPoints);
    CPPUNIT_TEST(testCalculateInflectionPoint);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void testSolve();
    void testIsExistLocalPoints();
    void testCalculateInflectionPoint();
    void testConstructor();
    void tearDown();

};
    
