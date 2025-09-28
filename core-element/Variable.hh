#pragma once
#include <vector>
#include <string>

#include "./../core-element/Domain.hh"

class Variable {
public:
    int id;
    std::vector<int> domain;

    Variable(int _id, const std::vector<int>& _domain) : id(_id), domain(_domain) {}
    Variable(int _id, const int min, const int max) : id(_id), domain(_domain) {}
    Variable(int _id, const int val) : id(_id), domain(_domain) {}
    std::string toString(){
        return "id "+std::to_string(id)+" value "+std::to_string(0)+" \n";
    }

    Domain delayDomainConstructor(){

    }
};
