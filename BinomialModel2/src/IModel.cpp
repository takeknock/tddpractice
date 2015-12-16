#include "IModel.h"
#include "IAsset.h"
#include "IContract.h"


namespace trainingbm {
    IModel::IModel(const IContract& contract)
    {

    }

    IModel::~IModel()
    {
    }

    double IModel::evolveUp(const int i, const int j, const int numStep)
    {
        return 0.0;
    }

    double IModel::evolveDown(const int i, const int j, const int numStep)
    {
        return 0.0;
    }


} // namespace trainingbm {

