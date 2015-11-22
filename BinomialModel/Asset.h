#pragma once

double calculateDrift(double const interestRate, double const volatility);


double calculateDt(double const maturity, double const numberOfSteps);


double calculateChangeOfAsset(
        double const volatility, double const dt, double const drift); 


double calculateUpProbability(
        double const drift, double const dt, double const changeOfAsset);

double calculateDownProbability(double const upProbability);

double calculateLowestAssetAtMaturity(
        double const changeOfAsset, 
        double const initialAsset, 
        double const numberOfSteps);
