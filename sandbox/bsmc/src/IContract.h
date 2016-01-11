#ifndef ICONTRACT_H_INCLUDED
#define ICONTRACT_H_INCLUDED

#include <boost/shared_ptr.hpp>
#include "Path.h"


namespace mctr {

    class IContract {
    public:
        IContract();
        virtual ~IContract();
        double calculatePayoff(boost::shared_ptr<Path> path);
    };

} // namespace mctr

#endif // ICONTRACT_H_INCLUDED
