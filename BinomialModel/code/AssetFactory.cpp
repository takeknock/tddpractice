#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>
#include "AssetFactory.h"
#include "IAsset.h"
#include "Asset.h"
    

namespace trainingbm {
    AssetFactory::AssetFactory()
    {
    }
    
    
    AssetFactory::~AssetFactory()
    {
    }
    
    
    const boost::shared_ptr<Asset> AssetFactory::createAsset(
        const double drift, const double volatility, const double spot)
    {
        
        //boost::scoped_ptr<Asset> asset = new Asset(drift, volatility, spot); 
        return boost::shared_ptr<Asset>(new Asset(drift, volatility, spot)); 
        //return asset;
    }
}
