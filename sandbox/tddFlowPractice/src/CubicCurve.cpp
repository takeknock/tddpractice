#include "CubicCurve.h"

namespace cc {
    CubicCurve::CubicCurve(const double a, const double b,
        const double c, const double d)
    : _a(a), _b(b), _c(c), _d(d)
    {
    }
    CubicCurve::~CubicCurve()
    {
    }

    const bool CubicCurve::isExistLocalPoints() const 
    {
        if (_b * _b - 3 * _a * _c <= 0)
            return false;
        return true;
    }

    const std::pair<double, double> CubicCurve::calculateInflectionPoint() const
    {
        std::pair<double, double> p(0.0, 0.0);
        p.first = - _b / (3 * _a);
        p.second = (2 * _b * _b * _b - 9 * _a * _b * _c + 27 * _a * _a * _d) 
            / (27 * _a * _a);
        return p;
        
    }


} // namespace cc
