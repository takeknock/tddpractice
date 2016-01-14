#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>

class IsExistLocalPointsTest : public CPPUNIT_NS::TestFixture {
public:
    CPPUNIT_TEST_SUITE(IsExistLocalPointsTest);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void testConstructor();
    void tearDown();

};
    
