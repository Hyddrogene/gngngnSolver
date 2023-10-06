#include "Solver.hh"


bool CSPSolver::backtrack(std::vector<int>& assignment, u32 varIndex) {
    if (varIndex == variables.size()) {
        // Toutes les variables ont été assignées
        return true;
    }

    Variable* currentVar = variables[varIndex];

    for (int value : currentVar->domain) {
        assignment[varIndex] = value;
        if (isConsistent(assignment, varIndex)) {
            if (backtrack(assignment, varIndex + 1)) {
                // Solution trouvée
                return true;
            }
        }
    }

    return false;
}//FinMethod


bool CSPSolver::isConsistent(const std::vector<int>& assignment, u32 varIndex) {
    for (Constraint* constraint : constraints) {
        if (!constraint->isSatisfied(assignment)) {
            return false;
        }
    }
    return true;
}//FinMethod


bool CSPSolver::solve() {
    // À implémenter : algorithme de résolution CSP
    // Utilisez les variables et les contraintes pour trouver une solution
    // Retourne true si une solution est trouvée, sinon false
    // Met à jour les domaines avec les valeurs d'affectation des variables

    // Exemple : une résolution simplifiée en force brute
    std::vector<int> assignment(variables.size());

    return backtrack(assignment, 0);
}//FinMethod


