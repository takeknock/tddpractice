#ifndef PAYOFF_H_INCLUDED
#define PAYOFF_H_INCLUDED

namespace mctr {
    class Payoff {
    public:
        enum OptionType {call, put};
        Payoff(const double strike, OptionType type);
        double operator()(const double spot) const;
    private:
        const double _strike;
        OptionType _type;
    
    };

} // namespace mctr {
#endif // PAYOFF_H_INCLUDED

