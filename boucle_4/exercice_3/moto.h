#pragma once 
#include <iostream> 
#include "vehicule.h"
using namespace std; 

class Moto : public Vehicule{
public: 
    void lavage(){
        cout << "La moto est lavée" << endl; 
    }
};