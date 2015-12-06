#pragma once
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>

namespace trainingbm {
    class AssetTest :public CPPUNIT_NS::TestFixture {
    public:
        CPPUNIT_TEST_SUITE(AssetTest);
        CPPUNIT_TEST(testConstructor);
        //CPPUNIT_TEST();
        CPPUNIT_TEST(testDrift);
        CPPUNIT_TEST(testVolatility);
        CPPUNIT_TEST(testSpot);
        CPPUNIT_TEST_SUITE_END();
    
    public:
        virtual void setUp();
        void testConstructor();
        void testDrift();
        void testVolatility();
        void testSpot();
        virtual void tearDown();
    
    };
}    
