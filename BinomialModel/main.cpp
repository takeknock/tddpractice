#include <cmath>
#include <iostream>
#include <algorithm>

void print(double *array)
{
    for (std::size_t i = 0; i < sizeof(array); ++i) {
        std::cout << array[i] << std::endl;
    }
}

double calculateDiscountFactor(double const interestRate, double const maturity)
{
    return exp(-interestRate * maturity);    
}

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

    for (std::size_t timesteps = numberOfSteps; timesteps > 0; --timesteps) {
        for (std::size_t innerIndex = 0; innerIndex < timesteps; ++innerIndex) {
            const std::size_t formerstep = timesteps - 1;
            const std::size_t upIndex = innerIndex + 1;
            payoff[formerstep][innerIndex] = 
                discountFactor * (
                    payoff[timesteps][innerIndex] * downProbability 
                    + payoff[timesteps][upIndex] * upProbability);
        }
    }

    std::cout << "European Call:" << payoff[0][0] << std::endl;

    return 0;
}

