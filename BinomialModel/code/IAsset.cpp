#include <cmath>
#include <iostream>

#include "IAsset.h"

namespace trainingbm {
    
    //IAsset::IAsset(const double drift, const double volatility, const double spot)
    //{
    //}
    IAsset::IAsset()
    {
    }

    IAsset::~IAsset()
    {
    }

    //IAsset& IAsset::operator=(const IAsset&)
    //{
    //}

    //IAsset(const IAsset&)
    //{
    //}

}
    
//const double calculateDrift(const double interestRate, const double volatility)
//{
//    return interestRate - 0.5 * pow(volatility, 2);
//}
//
//const double calculateDt(const double maturity, const double numberOfSteps)
//{
//    return maturity / numberOfSteps;
//}
//
//const double calculateChangeOfIAsset(
//        const double volatility, const double dt, const double drift) 
//{
//    return sqrt(pow(volatility, 2)  * dt + pow(drift * dt, 2));
//}
//
//const double calculateUpProbability(
//        const double drift, const double dt, const double changeOfIAsset)
//{
//    return 0.5 + 0.5 * drift * dt / changeOfIAsset;
//}
//
//const double calculateDownProbability(const double upProbability)
//{
//    return 1.0 - upProbability;
//}
//
//const double calculateLowestIAssetAtMaturity(
//        const double changeOfIAsset, 
//        const double initialIAsset, 
//        const double numberOfSteps)
//{
//    const double lowestIAssetAtMaturity = 
//        initialIAsset * exp(- changeOfIAsset * numberOfSteps);
//    return lowestIAssetAtMaturity;
//}
