#include "IPolynomial.h"

namespace pln {
    double IPolynomial::operator()(const double x) const 
    {
        return this->operatorImpl(x);
    }
    
    double IPolynomial::getDiscriminant()
    {
        return this->getDiscriminantImpl();
    }

    IPolynomial::~IPolynomial()
    {
    }

} // namespace pln
