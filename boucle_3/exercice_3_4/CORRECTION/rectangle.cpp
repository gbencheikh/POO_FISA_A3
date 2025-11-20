#include "rectangle.h"
#include <iostream>

using namespace std; 

Rectangle::Rectangle(double L, double l){
    largeur = L; 
    longueur = l; 
}

double Rectangle::getLargeur(){
    return largeur; 
}
double Rectangle::getLongueur(){
    return longueur; 
}
void Rectangle::setLargeur(double L){
    largeur = L; 
}
void Rectangle::setLongueur(double l){
    largeur = l; 
}
double Rectangle::aire(){
    return longueur * largeur;
}
double Rectangle::perimetre(){
    return 2 * (longueur + largeur); 
}
void Rectangle::afficheInfo(){
    cout << "Rectangle:" << endl;
    cout << "  Longueur : " << longueur << endl;
    cout << "  Largeur  : " << largeur << endl;
    cout << "  Aire     : " << aire() << endl;
    cout << "  Perimetre: " << perimetre() << endl;
}