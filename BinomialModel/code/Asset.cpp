#include "Asset.h"

Asset::Asset(const double drift, const double volatility, const double spot)
: _drift(drift), _volatility(volatility), _spot(spot)
{

}

Asset::~Asset()
{
}

