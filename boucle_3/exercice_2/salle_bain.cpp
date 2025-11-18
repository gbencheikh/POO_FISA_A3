#include "salle_bain.h"

void Salle_bain::set_has_shower(bool Has_shower){
    has_shower = Has_shower; 
}

bool Salle_bain::get_has_shower(){
    return has_shower; 
}

void Salle_bain::afficher_info(){
    cout << ID << "(" << nb_windows << "windows, " << color << "," << has_shower << ")" << endl;  
}