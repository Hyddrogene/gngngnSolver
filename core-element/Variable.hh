#pragma once
#include <vector>


class Variable {
public:
    int id;
    std::vector<int> domain;

    Variable(int _id, const std::vector<int>& _domain) : id(_id), domain(_domain) {}
};
