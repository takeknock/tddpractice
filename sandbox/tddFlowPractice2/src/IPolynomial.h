#ifndef IPOLYNOMIAL_H_INCLUDED
#define IPOLYNOMIAL_H_INCLUDED

namespace pln {
    class IPolynomial {
    public:
        double operator()(const double x) const;
        double getDiscriminant();
        virtual ~IPolynomial();
    
    private:
        virtual double operatorImpl(const double x) const = 0;
        virtual double getDiscriminantImpl() const = 0;
    };
} // namespace pln {

#endif // IPOLYNOMIAL_H_INCLUDED
