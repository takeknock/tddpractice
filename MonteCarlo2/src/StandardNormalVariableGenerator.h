#pragma once
#include <boost/random.hpp>
#include <boost/generator_iterator.hpp>

class StandardNormalVariableGenerator {
private:
    typedef boost::mt19937 InnerRngType;
    typedef boost::normal_distribution<> NormalDistribution;
    typedef boost::variate_generator<InnerRngType, NormalDistribution> RngType;
    typedef StandardNormalVariableGenerator ThisType;

public:
    explicit StandardNormalVariableGenerator(const std::size_t seed)
    : _rng(ThisType::create(seed))
    {
    }

    double operator() ()
    {
        return _rng();
    }

private:
    RngType _rng;
    static RngType create(const std::size_t seed)
    {
        return RngType(InnerRngType(seed), NormalDistribution());
    }
};

