#include "Path.h"

#ifndef MCTR_CONTRACT_H
#define MCTR_CONTRACT_H

namespace mctr {

    class Contract {
    public:
        Contract(const double maturity, const double strike);
        ~Contract();

        const double calculatePayoff(const Path& path) const;

    private:
        const double _maturity;
        const double _strike;
    };

} // namespace mctr

#endif // MCTR_CONTRACT_H

