#pragma once 
#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>
#include "Asset.h"
#include "IModel.h"

namespace trainingbm {
    class AssetFactory {
    public:
        friend class AssetFactoryTest;
        AssetFactory();
        ~AssetFactory();
    
        const boost::shared_ptr<Asset> createAsset(
            const IModel& model, const double volatility, const double spot);
    
    };
}
