#pragma once

class Asset {

public:
    Asset();
    ~Asset();
    const double calculateDrift(
        const double interestRate, const double volatility) const;

    const double calculateDt(
        const double maturity, const double numberOfSteps) const;

    const double calculateChangeOfAsset(
        const double volatility, const double dt, const double drift) const; 

    const double calculateUpProbability(
        const double drift, const double dt, const double changeOfAsset) const;

    const double calculateDownProbability(const double upProbability) const;

    const double calculateLowestAssetAtMaturity(
        const double changeOfAsset, 
        const double initialAsset, 
        const double numberOfSteps) const;
    
};
