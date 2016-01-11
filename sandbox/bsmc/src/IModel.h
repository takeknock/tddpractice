#ifndef IMODEL_H_INCLUDED
#define IMODEL_H_INCLUDED
#include "Path.h"
#include "TimeGrid.h"

namespace mctr {
    class IModel {
    public:
        boost::shared_ptr<Path> createOnePath(TimeGrid& timeGrid);
    
    };
} // namespace mctr

#endif // IMODEL_H_INCLUDED
