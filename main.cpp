#include <iostream>
#include "solver/Solver.hh"
#include "global-constraint/allDiff/AllDifferent.hh"

int main()
{
    // Exemple d'utilisation de la classe CSPSolver
        CSPSolver solver;

        // Ajouter des variables avec leurs domaines
        std::vector<Variable*> tmp = std::vector<Variable*>();
        Variable* v1 = solver.addVariable(0, {1, 2, 3});
        Variable* v2 =solver.addVariable(1, {1, 2});
        Variable* v3 =solver.addVariable(2, {2, 3});

        tmp.push_back(v1);tmp.push_back(v2);tmp.push_back(v3);
        // Créer une contrainte personnalisée (AllDifferent)
        //std::vector<Variable*> allDiffVariables = {&solver.variables[0], &solver.variables[1]};
        AllDifferent allDiffConstraint(tmp);

        // Ajouter la contrainte au CSP
        solver.addConstraint(&allDiffConstraint);

        // Résoudre le CSP
        bool solutionFound = solver.solve();

        if (solutionFound) {
            std::cout << "Solution trouvée : ";
            for (Variable* value : solver.variables) {
                std::cout << "Variable : " << value->toString() << ", ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "Pas de solution trouvée." << std::endl;
        }

        return 0;
}//FinMain
