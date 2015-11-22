#include <cmath>
#include <iostream>

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

int main() 
{
    double const interestRate = 0.02;
    double const maturity = 1.0;
    std::size_t const numberOfSteps = 4;
    double const strike = 100;
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
    print(assetAtMaturity);
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
    return 0;
}

