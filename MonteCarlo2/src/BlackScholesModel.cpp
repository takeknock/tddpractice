#include "BlackScholesModel.h"

namespace mctr {
    BlackScholesModel::BlackScholesModel(
        const double drift, const double volatility)
    : _drift(drift), _volatility(volatility)
    {
    }

    BlackScholesModel::~BlackScholesModel()
    {
    }

    const Path BlackScholesModel::createOnePath(const TimeGrid& timeGrid)
    {
        Path path;
        return path;
    }

} // namespace mctr
