#ifndef IMODEL_H_INCLUDED
#define IMODEL_H_INCLUDED
#include "Path.h"
#include "TimeGrid.h"

namespace mctr {
    class IModel {
    public:
        const boost::shared_ptr<Path> createOnePath(TimeGrid& timeGrid);
        virtual ~IModel();
    private:
        virtual const boost::shared_ptr<Path> createOnePathImpl(
            TimeGrid& timeGrid) = 0;
    
    };
} // namespace mctr

#endif // IMODEL_H_INCLUDED
