#include <boost/shared_ptr.hpp>
#include "AssetFactoryTest.h"
#include "Asset.h"



namespace trainingbm {
    CPPUNIT_TEST_SUITE_REGISTRATION(AssetFactoryTest);
    void AssetFactoryTest::setUp()
    {
        return;
    }

    void AssetFactoryTest::testConstructor()
    {
        boost::shared_ptr<AssetFactory> factory(new AssetFactory);
        CPPUNIT_ASSERT(factory);
        return;
    }
    
    void AssetFactoryTest::testCreateAsset()
    {
        const double drift = 0.2;
        const double volatility = 0.11;
        const double spot = 100.0;
//        boost::shared_ptr<AssetFactory> factory(new AssetFactory);
//        boost::shared_ptr<Asset> asset = factory->createAsset(0.2, 0.11, 100.0);
//        CPPUNIT_ASSERT(asset);

        return;
    }

    void AssetFactoryTest::tearDown()
    {
        return;
    }
} //namespace trainingbm
