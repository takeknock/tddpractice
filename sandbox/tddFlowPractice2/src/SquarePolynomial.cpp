#include "SquarePolynomial.h"

namespace pln {
    SquarePolynomial::SquarePolynomial(const double a, const double b,
        const double c)
    : _a(a), _b(b), _c(c)
    {
    }

    double SquarePolynomial::operatorImpl(const double x) const
    {
        return _a * x * x + _b * x + _c;       
    }

    double SquarePolynomial::getDiscriminantImpl() const
    {
        return _b * _b - 4 * _a * _c;
    }

} // namespace pln
