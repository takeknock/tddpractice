#include "TimeGrid.h"

namespace mctr {
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
    double TimeGrid::operator()(const std::size_t i)
    {
        return _data[i];
    }

    void TimeGrid::operator =(TimeGrid& timeGrid)
    {
        this->_data.resize(timeGrid.size());
        for (std::size_t i = 0; i < timeGrid.size(); ++i) {
            this->_data[i] = timeGrid._data[i];
        }
    }

}// namespace mctr {

