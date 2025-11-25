#include "voiture.h"
#include "voitureSport.h"
#include <iostream>

using namespace std; 


int main(){
    Voiture V1(80,2); 
    VoitureSport V2(110, 6);

    cout << "nb de voitures " << Voiture::nb_objets << endl; 
    
    V1.accelerer(); 
    V2.accelerer(); 

    V1 = V2; 

    V1.accelerer();

    return 0;
}