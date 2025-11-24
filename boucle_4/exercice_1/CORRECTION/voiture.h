#pragma once
#include <iostream> 

class Voiture{
protected:
    int vitesseMax; 
    int vitesse; 
    int acceleration; 
    std::string type; 


public: 
    static int nb_objets; 

    Voiture(); 
    Voiture(int, int); 
    void init(); 
    void accelerer(); 

    ~Voiture(); 
}; 

