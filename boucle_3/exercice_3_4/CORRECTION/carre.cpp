#include "carre.h"
#include <iostream>

using namespace std; 

Carre::Carre(double c){
    cote = c; 
}

double Carre::getCote(){
    return cote; 
}
void Carre::setCote(double c){
    cote = c; 
}
double Carre::aire(){
    return cote*cote; 
}
double Carre::perimetre(){
    return 4*cote; 
}
void Carre::afficheInfo(){
    cout << "Carre:" << endl;
    cout << "  Cote     : " << cote << endl;
    cout << "  Aire     : " << aire() << endl;
    cout << "  Perimetre: " << perimetre() << endl;
}