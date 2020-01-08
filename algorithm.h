//
// Created by 刘卫东 on 2020/1/7.
//

#ifndef STEINERTREE_ALGORITHMS_H
#define STEINERTREE_ALGORITHMS_H
#include "solution.h"
#include "inputPara.h"

class BaseAlgorithm{
public:
    virtual Solution algo_core(InputPara&) = 0;
    Solution run();
private:
    InputPara _input;
    void transform_input(double width, double height, vector<vector<double>> edges);
};
#endif //STEINERTREE_ALGORITHMS_H
