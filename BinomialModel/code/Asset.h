#pragma once
#include <boost/utility.hpp>

#include "IAsset.h"

namespace trainingbm {

    class Asset : public IAsset{
    public:
        friend class AssetTest;
        Asset(const double drift, const double volatility, const double spot);
        ~Asset();
    
    private:
        //Asset& operator=(const Asset&);
        //Asset(const Asset&);
        const double _drift;
        const double _volatility;
        const double _spot;
    
    };
}
