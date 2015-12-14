#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>

namespace trainingbm {
    class IAssetTest : public CPPUNIT_NS::TestFixture {
    public:
        CPPUNIT_TEST_SUITE(IAssetTest);

        CPPUNIT_TEST(testOperator);
        //CPPUNIT_TEST();
        CPPUNIT_TEST(testEvolve);
        CPPUNIT_TEST_SUITE_END();

    public:
        void setUp();
        void testOperator();
        void testEvolve();
        void tearDown();
    
    };
    
} //namespace trainingbm {
