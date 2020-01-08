//
// Created by 刘卫东 on 2020/1/7.
//

#ifndef STEINERTREE_EDGE_H
#define STEINERTREE_EDGE_H

#include <memory>

using namespace std;
class Node;

class Edge{
public:
    Edge(double weight, double capacity):
    _weight(weight), _capacity(capacity)
    {}
private:
    double _weight;
    double _capacity;
    weak_ptr<Node> _left_node;
    weak_ptr<Node> _right_node;
};
#endif //STEINERTREE_EDGE_H
