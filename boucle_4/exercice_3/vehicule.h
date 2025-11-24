#pragma once 
#include <iostream> 

using namespace std; 

class Vehicule{
public : 
    virtual void lavage(){
        cout << "Le vahicule est lave " << endl; 
    }
};
