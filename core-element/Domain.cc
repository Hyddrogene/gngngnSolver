#include "Domain.hh"

void Domain::constructDomain(){
    for(int i = this->min; i < this->max ;i++){
        this->_val.push_back(i);
    }
    this->_borneInf = this->_val;
}//FinMethod

