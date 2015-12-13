#include <cppunit/extensions/HelperMacros.h>
#include "IAssetTest.h"
#include "IAsset.h"
#include "Asset.h"

namespace trainingbm {
    CPPUNIT_TEST_SUITE_REGISTRATIONN(IAssetTest);
    void IAssetTest::setUp()
    {
        return;
    }
    
    void IAssetTest::testOperator[]()
    {
        const double drift = 0.5;
        const double volatility = 0.2;
        const double spot = 100.0;
        return;
    }

    void testEvolve()
    {
        return;
    }

    void IAssetTest::tearDown()
    {
        return;
    }

} //namespace trainingbm {
