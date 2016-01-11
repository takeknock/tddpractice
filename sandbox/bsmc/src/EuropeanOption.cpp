#include "EuropeanOption.h"

namespace mctr {
    EuropeanOption::EuropeanOption(const double strike, const double maturity, const Payoff::OptionType type)
    {

    }

    EuropeanOption::~EuropeanOption()
    {
    }

    double EuropeanOption::calculatePayoff(boost::shared_ptr<Path> path)
    {
        return 0.0;
    }

} // namespace mctr

