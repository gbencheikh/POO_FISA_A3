#pragma once 
#include <iostream> 
#include "vehicule.h"
using namespace std; 

class Voiture : public Vehicule{
public: 
    void lavage(){
        cout << "La voiture est lavée" << endl; 
    }
};
