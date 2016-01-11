#include <boost/numeric/ublas/vector.hpp>
#include "Path.h"

namespace mctr {
    Path::Path(TimeGrid& timeGrid)
    : _data(timeGrid)
    {
        //_data = boost::numeric::ublas::vector<double> path(timeGrid.getTimesteps());
        //_data = timeGrid;
    }
    
    Path::~Path()
    {
    
    }
    
    double Path::operator()(const std::size_t i)
    {
        return 0.0;
    }
    
} // namespace mctr {
