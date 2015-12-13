#pragma once
#include <boost/utility.hpp>

#include "IModel.h"
#include "IAsset.h"

namespace trainingbm {

    class Asset : public IAsset{
    public:
        friend class AssetTest;
        Asset(IModel model, const double volatility, const double spot);
        ~Asset();
        double operator[](const int i, const int j);
        void evolve();

    
    private:
        //Asset& operator=(const Asset&);
        //Asset(const Asset&);
        IModel _model;
        const double _drift;
        const double _volatility;
        const double _spot;
    
    };
} //namespace trainingbm
