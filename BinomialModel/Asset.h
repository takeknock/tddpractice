#pragma once

const double calculateDrift(const double interestRate, const double volatility);


const double calculateDt(const double maturity, const double numberOfSteps);


const double calculateChangeOfAsset(
        const double volatility, const double dt, const double drift); 


const double calculateUpProbability(
        const double drift, const double dt, const double changeOfAsset);

const double calculateDownProbability(const double upProbability);

const double calculateLowestAssetAtMaturity(
        const double changeOfAsset, 
        const double initialAsset, 
        const double numberOfSteps);
