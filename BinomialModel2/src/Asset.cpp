
#include "Asset.h"
#include "IModel.h"
#include "IContract.h"

namespace trainingbm {

    Asset::Asset(const IModel& model, const double volatility, const double spot)
    : _model(model), _volatility(volatility), _spot(spot)
    {
    
    }
    
    Asset::~Asset()
    {
    }

    double Asset::operator()(const int i, const int j)
    {
        return 0.0;
    }

    void Asset::evolve()
    {
        return;
    }

} //namespace trainingbm
    
