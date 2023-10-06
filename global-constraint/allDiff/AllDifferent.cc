#include "AllDifferent.hh"


bool AllDifferent::isSatisfied(const std::vector<int>& assignment) const {
    std::map<int, bool> valueMap;
    for (Variable* var : variables) {
        int value = assignment[var->id];
        if (valueMap[value]) {
            return false; // La même valeur apparaît plus d'une fois
        }
        valueMap[value] = true;
    }
    return true; // Toutes les valeurs sont différentes
}//FinMEthod
