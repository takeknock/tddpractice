#ifndef BLACKSCHOLES_H_INCLUDED
#define BLACKSCHOLES_H_INCLUDED
#include <boost/shared_ptr.hpp>
#include "Path.h"
#include "TimeGrid.h"
#include "IModel.h"

namespace mctr {
    class BlackScholes : public IModel {
    public:
        BlackScholes(const double drift, const double volatility);
        ~BlackScholes();

    private:
        const double _drift;
        const double _volatility;

        const boost::shared_ptr<Path> createOnePathImpl(
            TimeGrid& timeGrid);
    };


} // namespace mctr

#endif // BLACKSCHOLES_H_INCLUDED
