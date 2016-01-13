#include "CubicCurve.h"

namespace cc {
    CubicCurve::CubicCurve(const double a, const double b,
        const double c, const double d)
    {
    }
    CubicCurve::~CubicCurve()
    {
    }

    const bool CubicCurve::isExistLocalPoints() const 
    {
        return true;
    }

    const std::pair<double, double> CubicCurve::calculateInflectionPoint() const
    {
        return std::pair<double, double> (0.0, 0.0);
    }


} // namespace cc
