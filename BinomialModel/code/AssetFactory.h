#pragma once 
#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>
#include "Asset.h"

namespace trainingbm {
    class AssetFactory {
    public:
        friend class AssetFactoryTest;
        AssetFactory();
        ~AssetFactory();
    
        const boost::shared_ptr<Asset> createAsset(
            const double drift, const double volatility, const double spot);
    
    };
}
