#ifndef ISEXISTLOCALPOINTS_H_INCLUDED
#define ISEXISTLOCALPOINTS_H_INCLUDED

#include "IPolynomial.h"

namespace pln {
    class IsExistLocalPoints {
    public:
        bool operator()(IPolynomial& f) const;

    private:
        const double discriminantImpl(IPolynomial& f) const;
        bool check(const double value) const;

    };

} // namespace pln
#endif // ISEXISTLOCALPOINTS_H_INCLUDED
