#pragma once
#include <vector>
#include "./../core-element/Variable.hh"
#include "./../core-element/Constraint.hh"

typedef unsigned int u32;

class CSPSolver {
public:
    std::vector<Variable*> variables;
    std::vector<Constraint*> constraints;

    // Méthode pour ajouter une variable au CSP
    Variable* addVariable(int id, const std::vector<int>& domain) {
        Variable* v = new Variable(id,domain);
        variables.push_back(v);
        return v;
    }

    // Méthode pour ajouter une contrainte au CSP
    void addConstraint(Constraint* constraint) {
        constraints.push_back(constraint);
    }

    // Méthode pour résoudre le CSP
    bool solve();

private:
    bool backtrack(std::vector<int>& assignment, u32 varIndex);
    bool isConsistent(const std::vector<int>& assignment, u32 varIndex);

};
