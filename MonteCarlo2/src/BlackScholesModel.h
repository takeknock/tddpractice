#include "Path.h"
#include "TimeGrid.h"

#ifndef MCTR_BLACKSCHOLESMODEL_H
#define MCTR_BLACKSCHOLESMODEL_H

namespace mctr {
    // This model is SDE.
    class BlackScholesModel {
    public:
        BlackScholesModel(const double drift, const double volatility);
        ~BlackScholesModel();

        const Path createOnePath(const TimeGrid& timeGrid);

    private:
        const double _drift;
        const double _volatility;
    };


} // namespace mctr {

#endif // MCTR_BLACKSCHOLESMODEL_H
