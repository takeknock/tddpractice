#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>

class SquarePolynomialTest : public CPPUNIT_NS::TestFixture {
public:
    CPPUNIT_TEST_SUITE(SquarePolynomialTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void testConstructor();
    void tearDown();

};
    
