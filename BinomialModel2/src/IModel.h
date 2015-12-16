#pragma once 


namespace trainingbm {
    class IContract;

    class IModel {
    public:
        IModel(const IContract& contract);
        virtual ~IModel();
        double evolveUp(const int i, const int j, const int numStep);
        double evolveDown(const int i, const int j, const int numStep);
        //上がる、下がる、以外がすべて同じな関数を2つ作ってしまいそう。
        //なんとかコードの重複をない状態にしたい。
    };
} // namespace trainingbm {
