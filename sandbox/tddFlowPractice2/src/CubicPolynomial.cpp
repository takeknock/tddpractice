#include "CubicPolynomial.h"

namespace pln {
    CubicPolynomial::CubicPolynomial(const double a, const double b,
        const double c, const double d)
    : _a(a), _b(b), _c(c), _d(d)
    {
    }

    double CubicPolynomial::operatorImpl(const double x) const
    {
        return _a * x * x * x + _b * x * x + _c * x + _d;       
    }

    double CubicPolynomial::getDiscriminantImpl() const
    {
        return - 4 * _a * _c * _c * _c - 27 * _a * _a * _d * _d
            + _b * _b * _c * _c + 18 * _a * _b * _c * _d 
            - 4 * _b * _b * _b * _d;
    }

} // namespace pln
