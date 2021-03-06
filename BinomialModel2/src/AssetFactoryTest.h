#pragma once
#include <boost/shared_ptr.hpp>

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>
#include "AssetFactory.h"

namespace trainingbm {

    class AssetFactoryTest : public CppUnit::TestFixture {
    public:
        CPPUNIT_TEST_SUITE(AssetFactoryTest);
        CPPUNIT_TEST(testConstructor);
        CPPUNIT_TEST(testCreateAsset);
        CPPUNIT_TEST_SUITE_END();
    
    public:
        void setUp();
        void testConstructor();
        void testCreateAsset();
        void tearDown();
    
    };

} // namespace trainingbm
