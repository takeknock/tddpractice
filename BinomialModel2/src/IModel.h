#pragma once 
#include "IContract"

namespace trainingbm {
    class IModel {
    public:
        IModel(const Contract contract);
        virtual void evolve(Asset asset, const int numOfStep);
    
    };
// namespace trainingbm {
