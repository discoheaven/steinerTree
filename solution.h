//
// Created by 刘卫东 on 2020/1/7.
//

#ifndef STEINERTREE_SOLUTION_H
#define STEINERTREE_SOLUTION_H
#include <memory>
#include <vector>

using namespace std;
class Node;
class Solution{
public:
    Solution() = default;
private:
    vector<shared_ptr<Node>> _nodes;
};
#endif //STEINERTREE_SOLUTION_H
