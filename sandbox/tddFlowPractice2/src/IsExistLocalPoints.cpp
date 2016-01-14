#include "IsExistLocalPoints.h"

namespace pln {
    bool IsExistLocalPoints::operator()(IPolynomial& f) const
    {
        const double discriminant = this->discriminantImpl(f);
        return this->check(discriminant);
    }

    const double IsExistLocalPoints::discriminantImpl(IPolynomial& f) const
    {
        return f.getDiscriminant();
    }

    bool IsExistLocalPoints::check(const double value) const
    {
        return value > 0;
    }
} // namespace pln
