#ifndef EUROPEANOPTION_H_INCLUDED
#define  EUROPEANOPTION_H_INCLUDED
#include "IContract.h"
#include "Payoff.h"

namespace mctr {
    class EuropeanOption : public IContract {
    public:

        EuropeanOption(const double strike, 
            const double maturity, const Payoff::OptionType type);
        ~EuropeanOption();
        double calculatePayoff(boost::shared_ptr<Path> path);
    };

} // namespace mctr

#endif
