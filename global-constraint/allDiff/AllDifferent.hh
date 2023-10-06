#pragma once
#include <vector>
#include "./../../core-element/Constraint.hh"
#include "./../../core-element/Variable.hh"
#include <map>

class AllDifferent : public Constraint {
public:
    std::vector<Variable*> variables;

    AllDifferent(const std::vector<Variable*>& _variables) : variables(_variables) {}

    bool isSatisfied(const std::vector<int>& assignment) const override;
};

