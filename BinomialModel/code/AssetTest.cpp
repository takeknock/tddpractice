#include "AssetTest.h"
#include "Asset.h"
#include "AssetFactory.h"
#include "cppunit/extensions/HelperMacros.h"

namespace trainingbm {
    CPPUNIT_TEST_SUITE_REGISTRATION(AssetTest);
    void AssetTest::setUp()
    {
        const double drift = 0.2;
        const double volatility = 0.11;
        const double spot = 100.0;
        AssetFactory factory;

        _asset = factory.createAsset(drift, volatility, spot);
        return;
    }

    
    void AssetTest::testConstructor()
    {
        
        CPPUNIT_ASSERT(_asset);
        return;
    }
    
    
    void AssetTest::testDrift()
    {
        CPPUNIT_ASSERT_EQUAL(0.2, _asset->_drift);
        return;

    }
    
    void AssetTest::testVolatility()
    {
        CPPUNIT_ASSERT_EQUAL(0.11, _asset->_volatility);
        return;
    }
    
    void AssetTest::testSpot()
    {
        CPPUNIT_ASSERT_EQUAL(100.0, _asset->_spot);

        return;
    }
    void AssetTest::tearDown()
    {
        return;
    }
} // namespace trainingbm {
