#include <cmath>
#include <iostream>
#include <algorithm>
#include "Asset.h"

double calculateDiscountFactor(double const interestRate, double const maturity)
{
    return exp(-interestRate * maturity);    
}

double calculateCallPayoff(double const asset, double const strike) {
    return std::max(asset - strike, 0.0);
}

int main() 
{
    double const interestRate = 0.02;
    double const maturity = 1.0;
    std::size_t const numberOfSteps = 10;
    double const strike = 90;
    double const volatility = 0.11;
    double const initialAsset = 100.0;
   
    double const dt = calculateDt(maturity, numberOfSteps);
    double const discountFactor = calculateDiscountFactor(interestRate, maturity);

    double const drift = calculateDrift(interestRate, volatility);

//Assume the change of up is the same as the one of down.
    double const changeOfAsset = calculateChangeOfAsset(volatility, dt, drift);
    double const upProbability = calculateUpProbability(drift, dt, changeOfAsset);
    double const downProbability = calculateDownProbability(upProbability);

    std::size_t const numberOfAssetAtMaturity = numberOfSteps + 1;

    double assetAtMaturity[numberOfAssetAtMaturity] = {0.0};

    for (std::size_t i = 0; i < numberOfAssetAtMaturity; ++i) {
        std::cout << assetAtMaturity[i] << std::endl;
    }

    double const lowestAssetAtMaturity = 
        calculateLowestAssetAtMaturity(changeOfAsset, initialAsset, numberOfSteps);
    assetAtMaturity[0] = lowestAssetAtMaturity;

    for (std::size_t i = 0; i < numberOfAssetAtMaturity-1; ++i) {
        assetAtMaturity[i+1] = assetAtMaturity[i] * exp(2 * changeOfAsset);
    }
    
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

