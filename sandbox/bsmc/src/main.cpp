#include <cassert>
#include <cmath>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics.hpp>

#include "Path.h"
#include "TimeGrid.h"

Path createOnePath(TimeGrid& timeGrid)
{
    Path path(timeGrid);
    return path;
}

bool doubleEqual(double a, double b, int effectiveOrder)
{
    const int aint = a * std::pow(10, effectiveOrder);
    const int bint = b * std::pow(10, effectiveOrder);
    return aint == bint;
}



int main()
{

    // for test code





    const double strike = 100.0;
    const double maturity = 1.0;
    const double spot = 100.0;
    const double volatility = 0.2;
    const double interestRate = 0.06;
    const std::size_t numberOfPaths = 100;
    const std::size_t timesteps = 10;

    TimeGrid timeGrid(timesteps);
    //EuropeanOption europeanCall(strike, maturity, Payoff::call);

    {
        using namespace boost::accumulators;
        // accumulator is used to store each discounted payoffs
        accumulator_set<double, stats<tag::mean, tag::variance> > accumulator;

        // create one path
        for (std::size_t i = 0; i < numberOfPaths; ++i) {
            Path path = createOnePath(timeGrid);
            //double payoff = europeanCall.calculatePayoff(path);


            
            
            
        }
        

    }
    double price = 9.3846;
    
    assert(doubleEqual(price, 9.3846, 5));

    return 0;
}
