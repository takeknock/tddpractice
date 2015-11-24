#include "Asset.h"

#include <cmath>

Asset::Asset() 
{

}

Asset::~Asset()
{

}

const double Asset::calculateDrift(const double interestRate, const double volatility)
{
    return interestRate - 0.5 * pow(volatility, 2);
}

const double Asset::calculateDt(const double maturity, const double numberOfSteps)
{
    return maturity / numberOfSteps;
}

const double Asset::calculateChangeOfAsset(
        const double volatility, const double dt, const double drift) 
{
    return sqrt(pow(volatility, 2)  * dt + pow(drift * dt, 2));
}

const double Asset::calculateUpProbability(
        const double drift, const double dt, const double changeOfAsset)
{
    return 0.5 + 0.5 * drift * dt / changeOfAsset;
}

const double Asset::calculateDownProbability(const double upProbability)
{
    return 1.0 - upProbability;
}

const double Asset::calculateLowestAssetAtMaturity(
        const double changeOfAsset, 
        const double initialAsset, 
        const double numberOfSteps)
{
    const double lowestAssetAtMaturity = 
        initialAsset * exp(- changeOfAsset * numberOfSteps);
    return lowestAssetAtMaturity;
}
