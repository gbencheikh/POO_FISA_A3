#include "chambre.h"

void Chambre::set_nb_lits(int NB_lits){
    nb_lits = NB_lits; 
}

int Chambre::get_nb_lits(){
    return nb_lits; 
}

void Chambre::afficher_info(){
    cout << ID << "(" << nb_windows << "windows, " << color << "," << nb_lits << ")" << endl;  
}