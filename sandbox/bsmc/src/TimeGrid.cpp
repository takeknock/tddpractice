#include "TimeGrid.h"

TimeGrid::TimeGrid(const std::size_t timesteps)
{
    _data.resize(timesteps);
}

TimeGrid::~TimeGrid()
{
}

std::size_t TimeGrid::size()
{
    return _data.size();
}
