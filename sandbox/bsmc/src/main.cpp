#include <cassert>
#include <cmath>

bool doubleEqual(double a, double b, int effectiveOrder)
{
    const int aint = a * std::pow(10, effectiveOrder);
    const int bint = b * std::pow(10, effectiveOrder);
    return aint == bint;
}


void test()
{
    
}

int main()
{
    const double strike = 100.0;
    const double maturity = 1.0;
    const double spot = 100.0;
    const double volatility = 0.11;
    const double interestRate = 0.03;
    const std::size_t numberOfPaths = 100;
    const std::size_t timesteps = 10;

    for (std::size_t i = 0; i < numberOfPaths; ++i) {
        
    }
    

    double price = 9.46;
    
    assert(doubleEqual(price, 9.3846, 5));

    return 0;
}
