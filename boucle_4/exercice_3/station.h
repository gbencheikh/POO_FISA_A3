#pragma once 
#include "vehicule.h"

class Station{
private: 
    Vehicule** liste; 
    int nb = 0; 
public: 
    Station(){
        liste = new Vehicule*[0]; 
        nb = 0; 
    }

    void lavage(){
        if(nb == 0){
            cout << "Liste est vide" << endl; 
            return; 
        }
        liste[0]->lavage(); 
        supprimer(); 
    }
    void ajouter(Vehicule* V){
        Vehicule** T = new Vehicule*[nb+1]; 
        for (int i = 0 ; i < nb; i++){
            T[i] = liste[i]; 
        }
        
        delete[] liste;
        
        liste = T; 
        liste[nb] = V; 
        nb++; 
        cout << "Element ajoute" << "(n= " << nb<< ")" << endl; 
    }

    void supprimer(){
        Vehicule** T = new Vehicule*[nb-1];
        for(int i = 0 ; i < nb-1; i++){
            T[i] = liste[i+1]; 
        } 
        delete[] liste;

        liste = T; 
        nb--;
    } 

    ~Station() {
        for (int i = 0; i < nb; i++)
            delete liste[i];
        delete[] liste;
    }
}; 