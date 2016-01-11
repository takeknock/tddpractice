#ifndef BLACKSCHOLES_H_INCLUDED
#define BLACKSCHOLES_H_INCLUDED
#include "Path.h"
#include "TimeGrid.h"
#include "IModel.h"

namespace mctr {
    class BlackScholes : public IModel {
    public:
        BlackScholes(const double drift, const double volatility);
        ~BlackScholes();

        Path createOnePath(TimeGrid& timeGrid);

    };


} // namespace mctr

#endif // BLACKSCHOLES_H_INCLUDED
