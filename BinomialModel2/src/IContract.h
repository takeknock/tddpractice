#pragma once

namespace trainingbm {
    class IAsset;

    class IContract {
    public:
        IContract();
        virtual ~IContract();

        const double calculateExpectation(const IAsset& asset) const;
    
    
    };
    
}// namespace trainingbm {


