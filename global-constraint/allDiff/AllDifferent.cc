#include "AllDifferent.hh"
#include <iostream>

typedef unsigned int u32;

bool AllDifferent::isSatisfied(const std::vector<int>& assignment) const {
    std::map<int, bool> valueMap;
    for (Variable* var : variables) {
        //std::cout<<"id "<<var->id<<std::endl;
        int value = assignment[static_cast<u32>(var->id)];
        //std::cout<<"value "<<value<<std::endl;
        if (valueMap[value]) {
            return false; // La même valeur apparaît plus d'une fois
        }
        valueMap[value] = true;
    }
    return true; // Toutes les valeurs sont différentes
}//FinMEthod
