#include "AllDifferent.hh"
#include <iostream>

bool AllDifferent::isSatisfied(const std::vector<int>& assignment) const {
    std::map<int, bool> valueMap;
    for (Variable* var : variables) {
        std::cout<<"id "<<var->id<<std::endl;
        int value = assignment[var->id];
        std::cout<<"value "<<value<<std::endl;
        for(int i = 0; i < var->domain.size();i++){
            std::cout<<" i "<<var->domain.at(i)<<std::endl;
        }
        if (valueMap[value]) {
            return false; // La même valeur apparaît plus d'une fois
        }
        valueMap[value] = true;
    }
    return true; // Toutes les valeurs sont différentes
}//FinMEthod
