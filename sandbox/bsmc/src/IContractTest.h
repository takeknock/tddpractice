#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>

namespace mctr {
    class IContractTest : public CPPUNIT_NS::TestFixture {
    public:
        CPPUNIT_TEST_SUITE(IContractTest);
        CPPUNIT_TEST(testCalculatePayoff);
        CPPUNIT_TEST_SUITE_END();
    
    public:
        void setUp();
        void testCalculatePayoff();
        void tearDown();
    
    };
        
} // namespace mctr {
