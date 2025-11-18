#include "piece.h"

void Piece::set_nb_windows(int NB_windows){
    nb_windows = NB_windows; 
}

void Piece::set_color(string Color) {
    color = Color; 
}

int Piece::get_nb_windows(){
    return nb_windows; 
}

string Piece::get_color(){
    return color; 
}
string Piece::getID(){
    return ID; 
}
void Piece::afficher_info(){
    cout << ID << "(" << nb_windows << "windows, " << color << ")" << endl;  
}