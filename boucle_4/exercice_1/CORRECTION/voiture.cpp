#include "voiture.h"
#include <iostream>
using namespace std; 

int Voiture::nb_objets = 0; 

Voiture::Voiture(){
    vitesseMax = 50; 
    acceleration = 1; 
    type = "VOITURE"; 
    init(); 
}

Voiture::Voiture(int vitesseMax_, int acceleration_){
    if (vitesseMax_ <= 100){
        vitesseMax = vitesseMax_; 
    }else{
        vitesseMax = 100; 
    }

    if (acceleration_ <= 3)
        acceleration = acceleration_; 
    else    
        acceleration = 3;
    type = "VOITURE";  
    init(); 
}

void Voiture::init(){
    vitesse = 0;    
    nb_objets ++; 
}
void Voiture::accelerer(){
    cout << "Une "<< type << " accelere" << endl; 
    while (vitesse < vitesseMax){
        vitesse += acceleration; 
    } 
    cout << "fin d'acceleration" << endl; 
}

Voiture::~Voiture(){
    nb_objets--; 
}