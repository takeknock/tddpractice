#ifndef IMODEL_H_INCLUDED
#define IMODEL_H_INCLUDED
#include "Path.h"
#include "TimeGrid.h"

namespace mctr {
    class IModel {
    public:
        Path createOnePath(TimeGrid& timeGrid);
    
    };
} // namespace mctr

#endif // IMODEL_H_INCLUDED
