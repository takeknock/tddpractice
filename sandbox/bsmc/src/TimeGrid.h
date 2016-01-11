#pragma once
#include <cstddef>
#include <boost/numeric/ublas/vector.hpp>


class TimeGrid {
public:
    TimeGrid(const std::size_t timesteps);
    ~TimeGrid();
    std::size_t size();

private:
    //const std::size_t _grids;
    boost::numeric::ublas::vector<double> _data;


};
