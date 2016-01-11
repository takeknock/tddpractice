#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>

class EuropeanOptionTest : public CPPUNIT_NS::TestFixture {
public:
    CPPUNIT_TEST_SUITE(EuropeanOptionTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void testConstructor();
    void tearDown();

};
    
