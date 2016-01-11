#include "BlackScholes.h"

namespace mctr {

    BlackScholes::BlackScholes(const double drift, const double volatility)
    {
    }

    BlackScholes::~BlackScholes()
    {
    }

    Path BlackScholes::createOnePath(TimeGrid& timeGrid)
    {
        Path path(timeGrid);
        return path;
    }


} // namespace mctr
