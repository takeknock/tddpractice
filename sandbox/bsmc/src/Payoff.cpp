#include <algorithm>
#include "Payoff.h"

namespace mctr {
    Payoff::Payoff(const double strike, Payoff::OptionType type)
    : _strike(strike), _type(type)
    {

    }

    double Payoff::operator()(const double spot) const
    {
        if (_type == Payoff::call) {
            return std::max(_strike - spot, 0.0);
        }

        return std::max(spot - _strike, 0.0);
    }



} // namespace mctr
