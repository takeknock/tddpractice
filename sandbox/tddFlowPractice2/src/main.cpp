#include <iostream>
#include <boost/shared_ptr.hpp>

#include "IPolynomial.h"
#include "CubicPolynomial.h"
#include "SquarePolynomial.h"
#include "IsExistLocalPoints.h"


int main()
{
    // 1. use pointer
    boost::shared_ptr<pln::IPolynomial> pf(new pln::CubicPolynomial(1.0, 1.0, 2.0, 3.0));
    std::cout << (*pf)(1.0) << std::endl;

    // 2. use reference
    pln::CubicPolynomial c(1.0, 2.0, 3.0, 4.0);
    pln::IPolynomial& f = c;
    std::cout << f(1.0) << std::endl;

    // check the existing of local points.
    pln::IsExistLocalPoints checkLocalPoint;
    checkLocalPoint(f);

    return 0;
}



