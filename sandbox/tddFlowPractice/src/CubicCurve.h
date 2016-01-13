#pragma once
#include <map>

namespace cc {
    class CubicCurve {
    public:
        friend class CubicCurvicTest;
    public:
        CubicCurve(const double a, const double b, const double c, const double d);
        ~CubicCurve();

        const double solve (const double x) const;
        
        const bool isExistLocalPoints() const;
        const std::pair<double, double> calculateInflectionPoint() const;

    };


} // namespace cc {

