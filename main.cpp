#include <iostream>
#include "solver/Solver.hh"
#include "global-constraint/allDiff/AllDifferent.hh"

int main()
{
    // Exemple d'utilisation de la classe CSPSolver
        CSPSolver solver;

        // Ajouter des variables avec leurs domaines
        solver.addVariable(0, {1, 2, 3});
        solver.addVariable(1, {1, 2});
        solver.addVariable(2, {2, 3});

        // Créer une contrainte personnalisée (AllDifferent)
        std::vector<Variable*> allDiffVariables = {&solver.variables[0], &solver.variables[1]};
        AllDifferent allDiffConstraint(allDiffVariables);

        // Ajouter la contrainte au CSP
        solver.addConstraint(&allDiffConstraint);

        // Résoudre le CSP
        bool solutionFound = solver.solve();

        if (solutionFound) {
            std::cout << "Solution trouvée : ";
            for (int value : solver.variables[0].domain) {
                std::cout << "Variable 0 : " << value << ", ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "Pas de solution trouvée." << std::endl;
        }

        return 0;
}//FinMain
