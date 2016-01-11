#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>

class BlackScholesTest : public CPPUNIT_NS::TestFixture {
public:
    CPPUNIT_TEST_SUITE(BlackScholesTest);
    CPPUNIT_TEST(testCreateOnePath);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void testCreateOnePath();
    void tearDown();

};
    
