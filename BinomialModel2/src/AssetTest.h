#pragma once
#include <boost/shared_ptr.hpp>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>

#include "Asset.h"
#include "IAsset.h"
#include "IModel.h"

namespace trainingbm {
    class AssetTest :public CPPUNIT_NS::TestFixture {
    public:
        CPPUNIT_TEST_SUITE(AssetTest);
        CPPUNIT_TEST(testConstructor);
        //CPPUNIT_TEST();
        CPPUNIT_TEST(testVolatility);
        CPPUNIT_TEST(testSpot);
        CPPUNIT_TEST_SUITE_END();
    
    public:
        void setUp();
        void testConstructor();
        void testVolatility();
        void testSpot();
        void tearDown();
        boost::shared_ptr<Asset> _asset;
    
    };
}   //namespace trainingbm 
