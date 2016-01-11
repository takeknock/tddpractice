

#include "IContract.h"

namespace mctr {
    IContract::IContract()
    {
    }

    IContract::~IContract()
    {
    }

    double IContract::calculatePayoff(boost::shared_ptr<Path> path)
    {
        return this->calculatePayoff(path);
    }

} // namespace mctr


