#pragma once
#include <vector>

class Domain {

friend class Variable;
friend class CSPSolver;

public:
    std::vector<int> _val;
    std::vector<int> _borneInf;
    std::vector<int> _borneSup;
    int min;
    int max;

    int min_tmp;
    int max_tmp;

    Domain(std::vector<int>& _val) :_val(_val) {}
    Domain(int min,int max) : min(min),max(max){constructDomain();}
    Domain(int val) : min(val),max(val) {constructDomain();}

    void constructDomain();

    std::vector<int>& getValues(){
        return _val;
    }
};
