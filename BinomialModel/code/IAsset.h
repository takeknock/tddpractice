#pragma once
#include <boost/utility.hpp>

namespace trainingbm {
    class IAsset {
    public:
        friend class IAssetTest;
       // IAsset(const double drift, const double volatility, const double spot);
        IAsset();
        virtual ~IAsset();

    private:
        //IAsset(const IAsset& rhs);
        //IAsset& operator=(const IAsset& rhs);
    
    
    };
}


