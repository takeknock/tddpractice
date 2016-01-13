#pragma once
#include <map>

class CubicCurveTest;
namespace cc {
    class CubicCurve {
    public:
        friend class ::CubicCurveTest;
    public:
        CubicCurve(const double a, const double b, const double c, const double d);
        ~CubicCurve();

        const double solve (const double x) const;
        
        const bool isExistLocalPoints() const;
        const std::pair<double, double> calculateInflectionPoint() const;
    private:
        const double _a;
        const double _b;
        const double _c;
        const double _d;

    };


} // namespace cc {

