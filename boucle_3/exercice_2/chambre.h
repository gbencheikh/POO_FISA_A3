#ifndef CHAMBRE_H
#define CHAMBRE_H

#include "piece.h"
class Chambre : public Piece{
protected: 
    int nb_lits; 

public : 
    Chambre(int nb_windows, string color, int nb_lits):Piece(nb_windows,color,"CHAMBRE"), nb_lits(nb_lits){}

    int get_nb_lits(); 
    void set_nb_lits(int); 

    void afficher_info(); 
}; 
#endif