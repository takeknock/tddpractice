#ifndef ICONTRACT_H_INCLUDED
#define ICONTRACT_H_INCLUDED


#include "Path.h"


namespace mctr {

    class IContract {
    public:
        IContract();
        virtual ~IContract();
        double calculatePayoff(Path& path);
    };

} // namespace mctr

#endif // ICONTRACT_H_INCLUDED
