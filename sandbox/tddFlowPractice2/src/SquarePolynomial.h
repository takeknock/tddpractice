#ifndef SQUAREPOLYNOMIAL_H_INCLUDED
#define SQUAREPOLYNOMIAL_H_INCLUDED

#include "IPolynomial.h"

namespace pln {
    class SquarePolynomial : public IPolynomial{
    public:
        SquarePolynomial(const double a, const double b, const double c);

    private:
        virtual double operatorImpl(const double x) const;
        virtual double getDiscriminantImpl() const;

        const double _a;
        const double _b;
        const double _c;
    };
} // namespace pln {

#endif //SQUAREPOLYNOMIAL_H_INCLUDED
