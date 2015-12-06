#include "AssetTest.h"

namespace trainingbm {
    AssetTest::AssetTest()
    {
    }
    
    void AssetTest::testConstructor()
    {
        const double drift = 0.5;
        const double volatility = 0.2;
        const double spot = 100.0;
        Asset asset(drift, volatility, spot);
    }
    
    
    void AssetTest::testDrift()
    {
    }
    
    void AssetTest::testVolatility()
    {
    }
    
    void AssetTest::testSpot()
    {
    }
} // namespace trainingbm {
