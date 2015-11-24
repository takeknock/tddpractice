#include <cmath>
#include <iostream>
#include <algorithm>
#include "Asset.h"

/*
void print(const double *array)
{
    for (std::size_t i = 0; i < array.size(); ++i) {
        std::cout << array[i] << std::endl;
    }
}
*/
const double calculateDiscountFactor(const double interestRate, const double maturity)
{
    return exp(-interestRate * maturity);    
}

const double calculateCallPayoff(const double asset, const double strike) {
    return std::max(asset - strike, 0.0);
}

int main() 
{
    const double interestRate = 0.02;
    const double maturity = 1.0;
    std::size_t const numberOfSteps = 10;
    const double strike = 90;
    const double volatility = 0.11;
    const double initialAsset = 100.0;
   
    Asset asset;

    const double dt = asset.calculateDt(maturity, numberOfSteps);
    const double discountFactor = calculateDiscountFactor(interestRate, maturity);

    const double drift = asset.calculateDrift(interestRate, volatility);

//Assume the change of up is the same as the one of down.
    const double changeOfAsset = asset.calculateChangeOfAsset(volatility, dt, drift);
    const double upProbability = asset.calculateUpProbability(drift, dt, changeOfAsset);
    const double downProbability = asset.calculateDownProbability(upProbability);

    std::size_t const numberOfAssetAtMaturity = numberOfSteps + 1;

    double assetAtMaturity[numberOfAssetAtMaturity] = {0.0};

    for (std::size_t i = 0; i < numberOfAssetAtMaturity; ++i) {
        std::cout << assetAtMaturity[i] << std::endl;
    }

    const double lowestAssetAtMaturity = 
        asset.calculateLowestAssetAtMaturity(changeOfAsset, initialAsset, numberOfSteps);
    assetAtMaturity[0] = lowestAssetAtMaturity;

    for (std::size_t i = 0; i < numberOfAssetAtMaturity-1; ++i) {
        assetAtMaturity[i+1] = assetAtMaturity[i] * exp(2 * changeOfAsset);
    }
    //print(assetAtMaturity);
    
    for (std::size_t i = 0; i < numberOfAssetAtMaturity; ++i) {
        std::cout << assetAtMaturity[i] << std::endl;
    }

    double payoff[numberOfSteps][numberOfAssetAtMaturity] = {0.0};

    for (std::size_t index = 0; index < numberOfAssetAtMaturity; ++index) {
        payoff[numberOfSteps][index] = calculateCallPayoff(assetAtMaturity[index], strike);
    }

    for (std::size_t timestep = numberOfSteps; timestep > 0; --timestep) {
        for (std::size_t innerIndex = 0; innerIndex < timestep; ++innerIndex) {
            const std::size_t formerstep = timestep - 1;
            const std::size_t upIndex = innerIndex + 1;
            payoff[formerstep][innerIndex] = 
                discountFactor * (
                    payoff[timestep][innerIndex] * downProbability 
                    + payoff[timestep][upIndex] * upProbability);
        }
    }

    std::cout << "European Call:" << payoff[0][0] << std::endl;

    return 0;
}

