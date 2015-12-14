#pragma once 
#include "IContract.h"
#include "IAsset.h"

namespace trainingbm {
    class IModel {
    public:
        IModel(const IContract contract);
        double evolveUp(const int i, const int j, const int numStep);
        double evolveDown(const int i, const int j, const int numStep);
        virtual ~IModel();
        //上がる、下がる、以外がすべて同じな関数を2つ作ってしまいそう。
        //なんとかコードの重複をない状態にしたい。
    };
} // namespace trainingbm {
