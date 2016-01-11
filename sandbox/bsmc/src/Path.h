#pragma once
#include <boost/numeric/ublas/vector.hpp>

#include "TimeGrid.h"

class Path {
public:
    Path(TimeGrid& timeGrid);
    ~Path();
    double operator()(const std::size_t i);

private:
    TimeGrid _data;

};
