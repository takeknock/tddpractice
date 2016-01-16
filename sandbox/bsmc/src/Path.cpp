#include "Path.h"

namespace mctr {
    Path::Path(TimeGrid& timeGrid)
    : _data(timeGrid)//TODO: probably segmentation fault 11 here
    {
        //_data = boost::numeric::ublas::vector<double> path(timeGrid.getTimesteps());
        //_data = timeGrid;
    }
    
    Path::~Path()
    {
    
    }
    
    double Path::operator()(const std::size_t i)
    {
        return _data(i);
    }

    void Path::operator =(Path& path)
    {
        
        this->_data = path._data;
    }
    
} // namespace mctr {
