#ifndef MCTR_FUNCTIONS_H
#define MCTR_FUNCTIONS_H

namespace mctr {

    const double discount(const double payoff, const double discountFactor)
    {
        // compound
        return payoff * discountFactor;
    }

} // namespace mctr

#endif // MCTR_FUNCTIONS_H

