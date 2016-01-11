#ifndef TIMEGRID_H_INCLUDED
#define TIMEGRID_H_INCLUDED

#include <boost/numeric/ublas/vector.hpp>

namespace mctr {
    class TimeGrid {
    public:
        TimeGrid(const std::size_t timesteps);
        ~TimeGrid();
        std::size_t size();
    
    private:
        //const std::size_t _grids;
        boost::numeric::ublas::vector<double> _data;
    
    
    };
} // namespace mctr {
#endif // TIMEGRID_H_INCLUDED
