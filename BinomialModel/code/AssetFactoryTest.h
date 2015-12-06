#pragma once

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
        CPPUNIT_TEST(createAssetTest);
        CPPUNIT_TEST_SUITE_END();
    
    public:
        virtual void setUp();
        const void testConstructor();
        const void testCreateAsset();
        virtual void tearDown();
    
    };

} // namespace trainingbm
