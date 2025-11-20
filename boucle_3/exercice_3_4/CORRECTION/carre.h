#ifndef CARRE_H
#define CARRE_H

#include "objet.h"

class Carre : public Objet{
private: 
    double cote; 

public: 
    Carre(double);
    double getCote();  

    void setCote(double);  

    double aire(); 
    double perimetre(); 
    void afficheInfo();  
}; 

#endif