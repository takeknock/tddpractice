#include <cmath>
//#include <iostream>
#include <algorithm>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/CompilerOutputter.h>
#include "IAsset.h"
#include "AssetFactory.h"
#include "IAssetTest.h"
#include "AssetFactoryTest.h"
#include "AssetTest.h"

/*
void print(const double *array)
{
    for (std::size_t i = 0; i < array.size(); ++i) {
        std::cout << array[i] << std::endl;
    }
}
*/
namespace trainingbm {
    const double calculateDiscountFactor(const double interestRate, double const maturity)
    {
        return std::exp(-interestRate * maturity);    
    }
    
    const double calculateCallPayoff(double const asset, double const strike) {
        return std::max(asset - strike, 0.0);
    }

    const double calculateDrift(const double interestRate, const double volatility)
    {
        return interestRate - 0.5 * pow(volatility, 2);
    }

}// namespace trainingbm

int main() 
{
    //test();

    const double interestRate = 0.02;
    const double maturity = 1.0;
    const std::size_t numberOfSteps = 10;
    const double strike = 90;
    const double volatility = 0.11;
    const double spot = 100.0;
    const double drift = trainingbm::calculateDrift(interestRate, volatility);

    trainingbm::AssetFactory a;
    boost::shared_ptr<trainingbm::IAsset> asset = a.createAsset(drift, volatility, spot);


    CppUnit::TextTestRunner a_runner;
    CppUnit::Outputter* a_outputter = 
        CppUnit::CompilerOutputter::defaultOutputter(
            &a_runner.result(), std::cout );
    a_runner.setOutputter( a_outputter );
    a_runner.addTest(trainingbm::AssetFactoryTest::suite() );
    a_runner.run();

//   
//    double const dt = calculateDt(maturity, numberOfSteps);
//    double const discountFactor = calculateDiscountFactor(interestRate, maturity);
//
//    double const drift = calculateDrift(interestRate, volatility);
//
////Assume the change of up is the same as the one of down.
//    double const changeOfIAsset = calculateChangeOfIAsset(volatility, dt, drift);
//    double const upProbability = calculateUpProbability(drift, dt, changeOfIAsset);
//    double const downProbability = calculateDownProbability(upProbability);
//
//    std::size_t const numberOfIAssetAtMaturity = numberOfSteps + 1;
//
//    double assetAtMaturity[numberOfIAssetAtMaturity] = {0.0};
//
//    for (std::size_t i = 0; i < numberOfIAssetAtMaturity; ++i) {
//        std::cout << assetAtMaturity[i] << std::endl;
//    }
//
//    double const lowestIAssetAtMaturity = 
//        calculateLowestIAssetAtMaturity(changeOfIAsset, initialIAsset, numberOfSteps);
//    assetAtMaturity[0] = lowestIAssetAtMaturity;
//
//    for (std::size_t i = 0; i < numberOfIAssetAtMaturity-1; ++i) {
//        assetAtMaturity[i+1] = assetAtMaturity[i] * exp(2 * changeOfIAsset);
//    }
//    //print(assetAtMaturity);
//    
//    for (std::size_t i = 0; i < numberOfIAssetAtMaturity; ++i) {
//        std::cout << assetAtMaturity[i] << std::endl;
//    }
//
//    double payoff[numberOfSteps][numberOfIAssetAtMaturity] = {0.0};
//
//    for (std::size_t index = 0; index < numberOfIAssetAtMaturity; ++index) {
//        payoff[numberOfSteps][index] = calculateCallPayoff(assetAtMaturity[index], strike);
//    }
//
//    for (std::size_t timestep = numberOfSteps; timestep > 0; --timestep) {
//        for (std::size_t innerIndex = 0; innerIndex < timestep; ++innerIndex) {
//            const std::size_t formerstep = timestep - 1;
//            const std::size_t upIndex = innerIndex + 1;
//            payoff[formerstep][innerIndex] = 
//                discountFactor * (
//                    payoff[timestep][innerIndex] * downProbability 
//                    + payoff[timestep][upIndex] * upProbability);
//        }
//    }
//
//    std::cout << "European Call:" << payoff[0][0] << std::endl;

    return 0;
}

