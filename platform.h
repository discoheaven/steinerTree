//
// Created by 刘卫东 on 2020/1/7.
//

#ifndef STEINERTREE_PLATFORM_H
#define STEINERTREE_PLATFORM_H
#include <string>
#include <vector>
#include "solution.h"
#include "algorithm.h"

using namespace std;
class Platform{
public:
    Platform() = default;
    Solution run_algorithm(string algo_name, double width, double height, vector<vector<double>> edges);
};
#endif //STEINERTREE_PLATFORM_H
