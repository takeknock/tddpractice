#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>
#include "AssetFactory.h"
#include "Asset.h"
#include "IModel.h"
    

namespace trainingbm {
    AssetFactory::AssetFactory()
    {
    }
    
    
    AssetFactory::~AssetFactory()
    {
    }
    
    
    const boost::shared_ptr<Asset> AssetFactory::createAsset(
        const IModel& model, const double volatility, const double spot)
    {
        //boost::scoped_ptr<Asset> asset = new Asset(drift, volatility, spot); 
        return boost::shared_ptr<Asset>(new Asset(model, volatility, spot)); 
        //return asset;
    }
} // namespace trainingbm
