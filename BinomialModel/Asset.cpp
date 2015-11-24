#include "Asset.h"

#include <cmath>

const double calculateDrift(const double interestRate, const double volatility)
{
    return interestRate - 0.5 * pow(volatility, 2);
}

const double calculateDt(const double maturity, const double numberOfSteps)
{
    return maturity / numberOfSteps;
}

const double calculateChangeOfAsset(
        const double volatility, const double dt, const double drift) 
{
    return sqrt(pow(volatility, 2)  * dt + pow(drift * dt, 2));
}

const double calculateUpProbability(
        const double drift, const double dt, const double changeOfAsset)
{
    return 0.5 + 0.5 * drift * dt / changeOfAsset;
}

const double calculateDownProbability(const double upProbability)
{
    return 1.0 - upProbability;
}

const double calculateLowestAssetAtMaturity(
        const double changeOfAsset, 
        const double initialAsset, 
        const double numberOfSteps)
{
    const double lowestAssetAtMaturity = 
        initialAsset * exp(- changeOfAsset * numberOfSteps);
    return lowestAssetAtMaturity;
}
