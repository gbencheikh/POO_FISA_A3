#ifndef RECTANGLE_H
#define RECTANGLE_h

#include "objet.h"

class Rectangle : public Objet{
private: 
    double largeur; 
    double longueur; 

public: 
    Rectangle(double, double);
    double getLargeur(); 
    double getLongueur(); 

    void setLargeur(double); 
    void setLongueur(double); 

    double aire(); 
    double perimetre(); 
    void afficheInfo();  
}; 

#endif