#include "AssetFactory.h"
#include "IAsset.h"
#include <boost/shared_ptr.hpp>
    

namespace trainingbm {
    AssetFactory::AssetFactory()
    {
    }
    
    
    AssetFactory::~AssetFactory()
    {
    }
    
    
    boost::shared_ptr<IAsset> AssetFactory::createAsset(
        const double drift, const double volatility, const double spot)
    {
        boost::shared_ptr<IAsset> asset = boost::shared_ptr<IAsset>(new IAsset(drift, volatility, spot));    
        return asset;
    }
}
