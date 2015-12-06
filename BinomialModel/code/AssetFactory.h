#pragma once 
#include <boost/shared_ptr.hpp>
#include "IAsset.h"


namespace trainingbm {
    class AssetFactory {
    public:
        friend class AssetFactoryTest;
        AssetFactory();
        ~AssetFactory();
    
        boost::shared_ptr<IAsset> createAsset(
            const double drift, const double volatility, const double spot);
    
    };
}
