//
// Created by 刘卫东 on 2020/1/6.
//

#ifndef STEINERTREE_INPUTPARA_H
#define STEINERTREE_INPUTPARA_H
#include <vector>
#include <memory>
#include "node.h"
class InputPara{
public:
    InputPara(double width, double height):
    _width(width), _height(height)
    {}
private:
    double _width;
    double _height;
    vector<shared_ptr<Node>> _nodes;
};
#endif //STEINERTREE_INPUTPARA_H
