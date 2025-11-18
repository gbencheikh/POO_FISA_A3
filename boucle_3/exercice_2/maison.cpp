#include "maison.h"

Maison::Maison(int size){
    T = new Piece*[size]; 
    n = size; 
}
void Maison::setPieces(Piece* Pieces){
    T = &Pieces; 
}

Piece* Maison::getPieces(){
    return *T; 
}

void Maison::ajouterPiece(Piece* piece){
    Piece** T2 = new Piece*[n+1]; 
    for(int i = 0; i < n; i++){
        T2[i] = T[i]; 
    }
    T[n] = piece; 
    n++; 
}

int Maison::getNbOfBedroom(){
    int count = 0; 
    for(int i = 0 ; i < n ; i++){
        if(T[i]->getID() == "CHAMBRE"){
            count++; 
        }
    }
    return count; 
}
int Maison::getNbOfBathroom(){
    int count = 0; 
    for(int i = 0 ; i < n ; i++){
        if(T[i]->getID() == "SALLE DE BAIN"){
            count++; 
        }
    }
    return count; 
}
void Maison::afficher_info(){
    for(int i = 0 ; i < n ; i++){
        T[i]->afficher_info(); 
    }
}
