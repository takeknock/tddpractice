#ifndef PATH_H_INCLUDED
#define PATH_H_INCLUDED

#include <boost/numeric/ublas/vector.hpp>

#include "TimeGrid.h"

namespace mctr {
    class Path {
    public:
        Path(TimeGrid& timeGrid);
        ~Path();
        double operator()(const std::size_t i);
    
    private:
        TimeGrid _data;
    
    };

} // namespace mctr

#endif // PATH_H_INCLUDED
