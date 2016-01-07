#include "Contract.h"

namespace mctr {
    Contract::Contract(const double maturity, const double strike)
    : _maturity(maturity), _strike(strike)
    {
    }

    Contract::~Contract()
    {
    }

    const double Contract::calculatePayoff(const Path& path) const
    {
        return 0.0;
    }


} // namespace mctr
