#include "Asset.h"

#include <cmath>

double calculateDrift(double const interestRate, double const volatility)
{
    return interestRate - 0.5 * pow(volatility, 2);
}

double calculateDt(double const maturity, double const numberOfSteps)
{
    return maturity / numberOfSteps;
}

double calculateChangeOfAsset(
        double const volatility, double const dt, double const drift) 
{
    return sqrt(pow(volatility, 2)  * dt + pow(drift * dt, 2));
}

double calculateUpProbability(
        double const drift, double const dt, double const changeOfAsset)
{
    return 0.5 + 0.5 * drift * dt / changeOfAsset;
}

double calculateDownProbability(double const upProbability)
{
    return 1.0 - upProbability;
}

double calculateLowestAssetAtMaturity(
        double const changeOfAsset, 
        double const initialAsset, 
        double const numberOfSteps)
{
    double lowestAssetAtMaturity = 
        initialAsset * exp(- changeOfAsset * numberOfSteps);
    return lowestAssetAtMaturity;
}
