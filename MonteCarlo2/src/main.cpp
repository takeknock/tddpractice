#include <iostream>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics.hpp>
#include "StandardNormalVariableGenerator.h"
#include "Path.h"
#include "TimeGrid.h"
#include "BlackScholesModel.h"
#include "Contract.h"
#include "functions.h"


namespace mctr {
    /////////////////Monte Carlo Procedure/////////////////
    //1. create one path
    const Path createOnePath(const TimeGrid& time)
    {
        Path path;
        return path;
    }
    
    //2. calculate payoff for each path
    
    
    
    //3. calculate discounted payoff for each path
    


    //4. calculate price as the mean of discounted payoffs
    


} //namespace mctr {


int main()
{
    const double strike = 100.0;
    const double maturity = 1.0;
    const double spot = 100.0;
    const double volatility = 0.11;
    const double interestRate = 0.01;
    const std::size_t timesteps = 50;
    const std::size_t numberOfPaths = 100;

    const std::size_t seed = 50;

    double drift = interestRate - 0.5 * volatility * volatility;
    const double discountFactor = std::exp(-interestRate * maturity);


    /////////////////Monte Carlo Procedure/////////////////
    {
        using namespace boost::accumulators;
        accumulator_set<double, stats<tag::mean> > accumulator;

        for (std::size_t i = 0; i < numberOfPaths; ++i) {
            //1. create one path
            mctr::TimeGrid timeGrid;
            mctr::BlackScholesModel model(drift, volatility);

            const mctr::Path path = model.createOnePath(timeGrid);

            //2. calculate payoff for each path
            mctr::Contract contract(maturity, strike);
            double payoff = contract.calculatePayoff(path);

            //3. calculate discounted payoff for each path
            const double discountedPayoff =
                mctr::discount(payoff, discountFactor);

            accumulator(discountedPayoff);

        }
        //4. calculate price as the mean of discounted payoffs
       
        const double price = mean(accumulator);
        std::cout << price << std::endl;
    
    }

//    StandardNormalVariableGenerator randomnessGenerator(seed);
//    {
//        using namespace boost::accumulators;
//        accumulator_set<double, stats<tag::mean> > accumulator;
//        for (int i = 0; i < 10; ++i) {
//
//
//            accumulator(randomnessGenerator());
//        }
//
//        std::cout << extract::mean(accumulator) << std::endl;
//    }

    return 0;
}
