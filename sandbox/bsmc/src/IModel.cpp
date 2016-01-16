#include <boost/shared_ptr.hpp>
#include "IModel.h"

namespace mctr {

    IModel::~IModel()
    {
    }

    const boost::shared_ptr<Path> IModel::createOnePath(TimeGrid& timeGrid)
    {
        return this->createOnePathImpl(timeGrid);
    }



} // namespace mctr
