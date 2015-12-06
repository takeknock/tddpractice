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
        CPPUNIT_TEST(testCreateAsset);
        CPPUNIT_TEST_SUITE_END();
    
    public:
        virtual void setUp();
        void testConstructor();
        void testCreateAsset();
        virtual void tearDown();
    
    };

} // namespace trainingbm
