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
        boost::shared_ptr<AssetFactory> factory = new AssetFactory;
        CPPUNIT_ASSERT(factory);
        return;
    }
    
    void AssetFactoryTest::testCreateAsset()
    {

        return;
    }

    void AssetFactoryTest::tearDown()
    {
        return;
    }
} //namespace trainingbm
