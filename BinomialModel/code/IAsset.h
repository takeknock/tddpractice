#pragma once


namespace trainingbm {
    class IAsset {
    public:
        friend class IAssetTest;
        IAsset(const double drift, const double volatility, const double spot);
        virtual ~IAsset();
    
    
    };
}


