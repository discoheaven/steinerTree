//
// Created by 刘卫东 on 2020/1/6.
//

#ifndef STEINERTREE_NODE_H
#define STEINERTREE_NODE_H

#include <vector>
#include <memory>
using namespace std;

class Edge;
class Node{
public:
    Node(double x, double y, double capacity, double weight):
        _x(x), _y(y), _capacity(capacity), _weight(weight)
    {}
private:
    double _x;
    double _y;
    vector<shared_ptr<Edge>> _edges;
    double _capacity;
    double _weight;
};
#endif //STEINERTREE_NODE_H
