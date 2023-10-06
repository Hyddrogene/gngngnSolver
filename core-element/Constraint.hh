#pragma once
#include <vector>

class Constraint
{
public:
    Constraint();
    virtual bool isSatisfied(const std::vector<int>& assignment) const = 0;

};
