#include "voiture.h"
#include "voitureSport.h"
#include <iostream>

using namespace std; 


int main(){
    Voiture* V1 = new Voiture(80,2); 
    VoitureSport* V2 = new VoitureSport(110, 6);

    cout << "nb de voitures " << Voiture::nb_objets << endl; 
    
    V1->accelerer(); 
    V2->accelerer(); 

    delete V2; 

    V1 = new VoitureSport(); 

    V1->accelerer(); 

    cout << "nb de voitures " << Voiture::nb_objets << endl;

    return 0;
}