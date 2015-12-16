#pragma once
//#include <boost/utility.hpp>

#include "IModel.h"
#include "IContract.h"

namespace trainingbm {
    class IAsset {
    public:
        friend class IAssetTest;
       // IAsset(const double drift, const double volatility, const double spot);
        IAsset();

        virtual ~IAsset();
        double operator()(const int i, const int j);
        virtual void evolve();

    private:
        //IAsset(const IAsset& rhs);
        //IAsset& operator=(const IAsset& rhs);
    
    
    };
} //namespace trainingbm


