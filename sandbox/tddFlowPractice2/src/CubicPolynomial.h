#ifndef CUBICPOLYNOMIAL_H_INCLUDED
#define CUBICPOLYNOMIAL_H_INCLUDED

#include "IPolynomial.h"


namespace pln {
    class CubicPolynomial : public IPolynomial {
    public:
        friend class CubicPolynomialTest;
    public:
        CubicPolynomial(const double a, const double b, const double c,
            const double d);
   
    private:
        virtual double operatorImpl(const double x) const;
        virtual double getDiscriminantImpl() const;

        const double _a;
        const double _b;
        const double _c;
        const double _d;
    };

} // namespace pln {
#endif // CUBICPOLYNOMIAL_H_INCLUDED
