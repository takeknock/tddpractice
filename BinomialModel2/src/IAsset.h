#pragma once
#include <boost/utility.hpp>

namespace trainingbm {
    class IAsset {
    public:
        friend class IAssetTest;
       // IAsset(const double drift, const double volatility, const double spot);
        virtual IAsset()=0;
        virtual ~IAsset()=0;
        virtual double operator[](const int i, const int j);
        virtual void evolve();

    private:
        //IAsset(const IAsset& rhs);
        //IAsset& operator=(const IAsset& rhs);
    
    
    };
}


