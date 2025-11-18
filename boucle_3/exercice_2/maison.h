#ifndef MAISON_H
#define MAISON_H

#include "piece.h"

class Maison{
private: 
    Piece **T;
    int n;  

public : 
    Maison(int); 

    Piece* getPieces(); 
    void setPieces(Piece*);
    void ajouterPiece(Piece*); 
    void afficher_info(); 

    int getNbOfBedroom (); 
    int getNbOfBathroom(); 

}; 


#endif