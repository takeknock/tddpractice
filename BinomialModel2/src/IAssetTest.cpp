#include <cppunit/extensions/HelperMacros.h>
#include <boost/shared_ptr.hpp>
#include "IAssetTest.h"
#include "AssetFactory.h"
#include "IAsset.h"
#include "Asset.h"
#include "IContract.h"

namespace trainingbm {
    CPPUNIT_TEST_SUITE_REGISTRATION(IAssetTest);

    void IAssetTest::setUp()
    {
        return;
    }
    
    void IAssetTest::testOperator()
    {
        const double drift = 0.5;
        const double volatility = 0.2;
        const double spot = 100.0;
        AssetFactory f;
        IContract contract;
        IModel model(contract);
        boost::shared_ptr<IAsset> asset = f.createAsset(model, volatility, spot);
        CPPUNIT_ASSERT_EQUAL(100.0, asset->operator()(0,0));
        return;
    }

    void IAssetTest::testEvolve()
    {
        return;
    }

    void IAssetTest::tearDown()
    {
        return;
    }

} //namespace trainingbm {
