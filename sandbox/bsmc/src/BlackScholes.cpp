#include <iostream>
#include "BlackScholes.h"

namespace mctr {

    BlackScholes::BlackScholes(const double drift, const double volatility)
    : _drift(drift), _volatility(volatility)
    {
    }

    BlackScholes::~BlackScholes()
    {
    }

    const boost::shared_ptr<Path> BlackScholes::createOnePathImpl(
        TimeGrid& timeGrid)
    {
        return boost::shared_ptr<Path> (new Path(timeGrid));
        //return path;
    }


} // namespace mctr
