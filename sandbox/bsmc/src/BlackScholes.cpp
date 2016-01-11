#include "BlackScholes.h"

namespace mctr {

    BlackScholes::BlackScholes(const double drift, const double volatility)
    : _drift(drift), _volatility(volatility)
    {
    }

    BlackScholes::~BlackScholes()
    {
    }

    boost::shared_ptr<Path> BlackScholes::createOnePath(TimeGrid& timeGrid)
    {
        boost::shared_ptr<Path> path(new Path(timeGrid));
        return path;
    }


} // namespace mctr
