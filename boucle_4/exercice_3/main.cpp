#include <iostream>
#include "voiture.h"
#include "moto.h"
#include "station.h"

int main(){
    Station S; 
    S.ajouter(new Voiture()); 
    S.ajouter(new Moto()); 
    S.ajouter(new Voiture()); 

    S.lavage();
    S.lavage();
    S.lavage();
    S.lavage();
    
    return 0; 
}