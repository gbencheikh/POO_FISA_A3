#ifndef SALLE_BAIN_H
#define SALLE_BAIN_H

#include "piece.h"

class Salle_bain : public Piece{
protected: 
    bool has_shower; 
public: 
    Salle_bain(int nb_windows, string color, bool has_shower):has_shower(has_shower), Piece(nb_windows,color,"SALLE DE BAIN"){} 

    void set_has_shower(bool);
    bool get_has_shower(); 

    void afficher_info();  
}; 
#endif