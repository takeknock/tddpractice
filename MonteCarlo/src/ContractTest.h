#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>
#include "Contract.h"

namespace mctr {
    class ContractTest : public CPPUNIT_NS::TestFixture {
    public:
        CPPUNIT_TEST_SUITE(ContractTest);
        CPPUNIT_TEST(testConstructor);
        //CPPUNIT_TEST(testCreateAsset);
        CPPUNIT_TEST_SUITE_END();

    public:
        void setUp();
        void testConstructor();
        void tearDown();

    };

} // namespace mctr {
